//Least recently used page replacement algoritm
#include<iostream>
using namespace std;
int main()
{
    int nopages, nofaults, page[20],i ,count=0;
    cout<<"Enter the number of frames: "; 
    cin>> nopages;
    cout<<"\nEnter the reference string:\n";
    for(i=0;i< nopages;i++){
        cin>>page[i];
    }   
    cout<<"\nEnter the number of frames: "; 
    cin>> nofaults;
    int frame[nofaults],fcount[nofaults];
    for(i=0;i< nofaults;i++){
        frame[i]=-1;
        fcount[i]=0;
    }
    i=0;
    while(i< nopages){
        int j=0,flag=0;
        while(j< nofaults){
            if(page[i]==frame[j]){
                flag=1;
                fcount[j]=i+1;
            }
            j++;
        }   
        j=0;  
        cout<<"\n***\n";
        cout<<page[i]<<"->";   
        if(flag==0){
            int min=0,k=0;
            while(k<nofaults-1) { 
                if(fcount[min]>fcount[k+1])
                    min=k+1;
                k++;
            }
            frame[min]=page[i]; 
            fcount[min]=i+1;
            count++;
            while(j< nofaults){
                cout<<"\t|"<<frame[j]<<"|";
                j++;
            }
        }
    i++; 
    }
    cout<<"\n***\n";
    cout<<"\nPage Fault: "<<count;
    return 0;
} 
