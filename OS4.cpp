//SRTF- OS assigns CPU the process with smallest Burst Time
#include<iostream>
#include<algorithm>
using namespace std;
class Process_Scheduling{
    public:
    void SRTF(int Arrival[], int BusT[], int n){
        int Waiting[n], TaT[n], x[n];
        int i,j,smallest,count=0,time,Var;
        float Avg_wait, Avg_Tat,end;

        for(i=0;i<n;i++){
            x[i]=BusT[i];
        }
     
       BusT[9]=999;

       for(time =0;count!=n;time++){
           smallest=9;
           for(i=0;i<n;i++){
               if(Arrival[i]<=time && BusT[i]<BusT[smallest] && BusT[i]>0 ){
                   smallest=i;
               }
           }BusT[smallest]--;
           if(BusT[smallest]==0){
               count++;
               end=time+1;
               Waiting[smallest]= end- Arrival[smallest]-x[smallest];
               TaT[smallest]= end-Arrival[smallest];
           }
       }
float SUM_waiting= 0, SUM_Tat=0;
cout<<"Waiting times: " <<"\t";
for(int i =0;i<n;i++){
    cout<<Waiting[i]<<"  ";
    SUM_waiting+=Waiting[i];
}
cout<<endl;
cout<<"Turnaround times: "<<"\t";
for(int i=0;i<n;i++){
    cout<<TaT[i]<<"  ";
    SUM_Tat+=TaT[i];
}
cout<<endl;

cout<<"Average Waiting time = "<< SUM_waiting/n<<endl;
cout<<"Average Turnaround time = "<<SUM_Tat/n <<endl;
    }
};
int main(int argc, char const *argv[])
{
    Process_Scheduling a;
int ArrivalT[10], BusT[10], n;
cout<<"Enter number of processes\n";
cin>>n;
cout<<"Enter Burst Time of Processes\n";
for(int i=0;i<n;i++){
    cin>>BusT[i];
}
cout<<"Enter Arrival Time of Processes\n";
for(int i=0;i<n;i++){
    cin>>ArrivalT[i];
}
a.SRTF(ArrivalT, BusT, n);
    return 0;
}
