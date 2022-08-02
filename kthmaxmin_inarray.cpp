#include<iostream>
#include<vector>
#include<map>
// create a map and store the frequencies of the element and sum frequencies till it becomes equal to k and return corresponding element
using namespace std;
class Kth_MAXMIN {

    public :
    int kthmaxi(vector<int>&array, int K){
        map<int,int>mp;
        for(int i = 0;i<array.size();i++){
            mp[array[i]]++;
        }

        int Freq=0;
        map<int,int>::iterator p;
        for(p=mp.begin();p!=mp.end();++p){
       // cout<<p->first<<" "<<p->second<<endl;
           Freq = Freq+ (p->second);

            if(Freq>=K){
                return p->first;

            }

        }
        
return -1;
    }
};
int main(){
Kth_MAXMIN obj;
vector<int>test= { 12, 3, 5, 7, 19 };
int k= 2;

int ans = obj.kthmaxi(test, k);
cout<< k <<"th Max element = "<<ans<<endl;


}