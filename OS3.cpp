#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int BusT[10], WaitT[10], TurnT[10];
    float AvgWT = 0 , AvgTT = 0 ;
    cout<<"SJF ALGO: Enter the number of processes\n";
    cin>>n;
    cout<<"Processes : ";
    for(int i =0;i<5;i++){
        cout<<"P["<<i+1<<"]"<<" ";
    }cout<<endl;
    cout<<"Enter burst time for the process\n";

    for(int i =0;i<5;i++){
        cin>>BusT[i];
    }
    sort(BusT, BusT+n);
WaitT[0]=0;
    for(int i =1; i<n;i++){
        WaitT[i]=0;
        for(int j =0;j<i;j++){
            WaitT[i]= WaitT[i]+BusT[j];
        }
    }
        for(int i = 0 ;i<n;i++){
            cout<<WaitT[i]<< "  " ;
            AvgWT = AvgWT+ WaitT[i];
        }cout<<endl;

for(int i =0;i<n;i++){
    TurnT[i]= WaitT[i]+BusT[i];
}
for(int i =0;i<n;i++){
        cout<<TurnT[i]<<" ";
        AvgTT= AvgTT+TurnT[i];
}cout<<endl;

cout<<"average waiting time = "<<AvgWT/n<<endl;
cout<<"average Turnaround time = "<<AvgTT/n<<endl;


    }



