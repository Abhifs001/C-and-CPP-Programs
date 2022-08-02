#include<iostream>
using namespace std;
class P_scheduling{
    public:
    struct Process{
        int id;
        int BusT;
        int Priority;  
    };
       struct Process h[10];
       
    void Sortprocess(int n){//sort processes according to their priority
        for(int i =0;i<n;i++){
                for(int j=0;j<n-1-i;j++){
                    if(h[j].Priority>h[j+1].Priority){
                        swap(h[j], h[j+1]);
                    }
                }
        }   
     }
    void Priority_sche( int NoP){
        cout<<"Order of process execution\n";//display order of process execution
        for(int i =0;i<NoP;i++){
            cout<<"P"<<h[i].id<<" "<<h[i].Priority<<" "<<h[i].BusT<<endl;
        }
            //finding waiting time and average waiting time 
            int Waiting[NoP];
            Waiting[0]=0;
            for(int i=1;i<NoP;i++){
                Waiting[i]=h[i-1].BusT+ Waiting[i-1];
            }
            //finding turnaround time = waiting time + burst time
            int TaT[NoP]; 
            for(int i =0;i<NoP;i++){
                TaT[i]=h[i].BusT+Waiting[i];

            } float SUM_waiting =0, SUM_tat=0;
            //Display the waiting times and Turnaround times 
             cout<<"Waiting times"<<"\t"<<"Turnaround times"<<endl;
            for(int i=0;i<NoP;i++){
                cout<<"P"<<h[i].id<<" "<<Waiting[i]<<"\t\t"<<TaT[i]<<endl;
                SUM_waiting+=Waiting[i];
                SUM_tat+=TaT[i];
            }

            //display average waiting times
            cout<<"Average Waiting time = "<<SUM_waiting/NoP<<endl;
            cout<<"Average Turnaround Time = "<<SUM_tat/NoP<<endl;
    }     
};
int main(int argc, char const *argv[])
{  P_scheduling a;
int n; int bust, prio;
cout<<"Enter number of processes (maximum =10)\n";
cin>>n;
cout<<"Enter the Burst time and Priorities of Processes\n";

for(int i=0;i<n;i++){
cin>>a.h[i].BusT>>a.h[i].Priority;
a.h[i].id=i+1;

}
a.Sortprocess(n);
a.Priority_sche(n);
return 0;
}
