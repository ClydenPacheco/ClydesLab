//First come first serve scheduling program
#include<iostream>
using namespace std;
struct s
{
    int at, bt, ft, tat, wt;
};
int main()
{
    float atat=0,awt=0;
    cout << "First Come First Serve scheduling program...\n\n";
    s process[10];
    cout << "How many processes would you like to enter? ";
    int n;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cout << "Enter the arrival time of process [" << i+1 << "]: ";
        cin >> process[i].at;
        cout << "Enter the burst time of process [" << i+1 << "]: ";
        cin >> process[i].bt;
        process[i].ft = 0;
        for (int j = 0;j <= i;j++)
        {
            process[i].ft =process[i].ft + process[j].bt;
        }
        process[i].tat = process[i].ft - process[i].at;
        process[i].wt = process[i].tat - process[i].bt;
    }
    cout << "\nThe FCFS table is: \n";
    printf("Process Arrival_Time Burst_Time Finish_time Total_Turnaround_Time Waiting_Time\n");
    for (int i = 0;i < n;i++)
    {
        atat+=process[i].tat;
        awt+=process[i].wt;
        printf("P[%d] %4d %13d %10d %11d %21d\n", i+1, process[i].at, process[i].bt, process[i].ft, process[i].tat, process[i].wt);
    }
    cout << endl;
    atat/=5;
    awt/=5;
    cout << "The average turnaround time is: " << atat << " ms\n";
    cout << "The average wait time is :" << awt << " ms\n"; 
    return 0;
}
