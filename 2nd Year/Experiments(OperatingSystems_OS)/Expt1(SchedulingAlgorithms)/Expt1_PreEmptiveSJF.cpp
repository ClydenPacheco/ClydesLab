//Pre-emptive shortest job first scheduling program
#include <bits/stdc++.h>
using namespace std;
struct Process {
    int pid;
    int bt;
    int art;
};
void findWaitingTime(Process proc[], int n,int wt[])
{
    int rt[n];
    for (int i = 0; i < n; i++)
        rt[i] = proc[i].bt;
 
    int complete = 0, t = 0, minm = INT_MAX;
    int shortest = 0, finish_time;
    bool check = false;
    while (complete != n) {
        for (int j = 0; j < n; j++) {
            if ((proc[j].art <= t) &&
            (rt[j] < minm) && rt[j] > 0) {
                minm = rt[j];
                shortest = j;
                check = true;
            }
        }
        if (check == false) {
            t++;
            continue;
        }
        rt[shortest]--;
        minm = rt[shortest];
        if (minm == 0)
            minm = INT_MAX;
        if (rt[shortest] == 0) {
            complete++;
            check = false;
            finish_time = t + 1;
            wt[shortest] = finish_time-proc[shortest].bt-proc[shortest].art;
            if (wt[shortest] < 0)
                wt[shortest] = 0;
        }
        t++;
    }
}
void findTurnAroundTime(Process proc[], int n,int wt[], int tat[])
{
    for (int i = 0; i < n; i++)
        tat[i] = proc[i].bt + wt[i];
}

void findavgTime(Process proc[], int n)
{
    int wt[n], tat[n], total_wt = 0,total_tat = 0;
    findWaitingTime(proc, n, wt);
    findTurnAroundTime(proc, n, wt, tat);
    cout << "The Pre-emptive SJF table is:\n";
    printf("Process Arrival_Time Burst_Time Finish_time Total_Turnaround_Time Waiting_Time\n");
    for (int i = 0; i < n; i++) {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("P[%d] %4d %13d %10d %11d %21d\n", i+1, proc[i].art, proc[i].bt, tat[i]+proc[i].art, tat[i], wt[i]);
    }
    cout << "\nThe average turn around time is: "<< (float)total_tat / (float)n;
    cout << "\nThe average waiting time is: "<< (float)total_wt / (float)n;
}
int main()
{
    
    cout << "Pre-emptive Shortest Job First scheduling program\n\n";
    cout<< "How many proceses would you like to enter? ";
    int n;
    cin >> n;
    Process proc[10];
    for (int i = 0;i < n;i++)
    {
        cout << "Enter the arrival time of process [" << i+1 << "]: ";
        cin >> proc[i].art;
        cout << "Enter the burst time of process [" << i+1 << "]: ";
        cin >> proc[i].bt;
        proc[i].pid = i;
    }
    cout<<endl;
    findavgTime(proc, n);
    return 0;
}
