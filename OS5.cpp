//Round Robin Scheduling Algorigthm
#include<iostream>
using namespace std;
//To keep track of the remaining burst time, use another array Rem_Bust
class Process_Scheduling{
    public:
    void RoundRobin(int BusT[], int n, int Time_Slice){
        int waiting[n], Rem_Bust[n];
        for(int i=0;i<n;i++){
            Rem_Bust[i]=BusT[i];
        }
        int Curr_time=0;
//for waiting time
        int flag;
        while(1){
            flag=1;
            for(int i=0;i<n;i++){
            if(Rem_Bust[i]>0){
                flag=0;
                if(Rem_Bust[i]>Time_Slice){
                    Curr_time+=Time_Slice;

                    Rem_Bust[i]-=Time_Slice;
                }else{
                    Curr_time+=Rem_Bust[i];

                    waiting[i]=Curr_time-BusT[i];

                    Rem_Bust[i]=0;
                }
            }
        }
        if(flag==1)break;
            
        }
//for turnaround time
int Tat[n];

for(int i=0;i<n;i++){
    Tat[i]=BusT[i]+waiting[i];
}
float SUM_waiting=0, SUM_Tat=0;
cout<<"Waiting times: "<<" ";
for(int i=0;i<n;i++){
    cout<<waiting[i]<<" ";
    SUM_waiting+=waiting[i];
}cout<<endl;

cout<<"Turnaround times: "<<" ";
for(int i=0;i<n;i++){
    cout<<Tat[i]<<" ";
    SUM_Tat+=Tat[i];
}cout<<endl;
cout<<"Average Waiting time = "<<SUM_waiting/n<<endl;
cout<<"Average Turnaround time = "<<SUM_Tat/n<<endl;    

    }
};
int main(){
    Process_Scheduling a;
    int n, Time_Slice;
    int BusT[10];
    cout<<"Enter number of Processes\n";
    cin>>n;
    cout<<"Enter Burst Time\n";
    for(int i =0;i<n;i++){
        cin>>BusT[i];
    }
    cout<<"Enter Time_Slice for each Process\n";
    cin>>Time_Slice;
    a.RoundRobin(BusT, n, Time_Slice);
    return 0;
}