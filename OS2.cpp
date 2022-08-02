#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n ;
    int BusT[10], WaitT[10], TurnT[10];
    float AvgWT = 0 , AvgTT = 0 ;
    cout<<"FCFS ALGO: Enter the number of processes\n";
    cin>>n;
    cout<<"Processes : ";
    for(int i =0;i<5;i++){
        cout<<"P["<<i+1<<"]"<<" ";
    }cout<<endl;
    cout<<"Enter burst time for the process\n";

    for(int i =0;i<5;i++){
        cin>>BusT[i];
    }
    // calculating waiting time 
    WaitT[0]=0;
    for(int j=1;j<n;j++){
        WaitT[j]=0;
        for(int k=0;k<j;k++){
            WaitT[j]=WaitT[j]+BusT[k];

        }
    }
cout<<"Waiting times: ";
for(int i = 0 ; i <n;i++){
    cout<<WaitT[i]<<"   ";
    AvgWT = AvgWT+ WaitT[i];
}
cout<<endl;
for(int i =0 ; i < n;i++){
    TurnT[i] = BusT[i]+WaitT[i];
}
cout<<"Turnaround times : ";
for(int i =0 ; i < n;i++){
        cout<<TurnT[i]<<" ";
        AvgTT = AvgTT + TurnT[i];
}
cout<<endl;
cout<<"Average Waiting time = "<<AvgWT/n<<endl;
cout<<"Average Turnaround time = "<<AvgTT/n<<endl;



    }