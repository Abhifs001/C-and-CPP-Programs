#include<iostream>
#include<vector>
using namespace std;
class Abhi {
    public:
    vector<int> maxNmin(vector<int> &a){
        int max=a[0],min=0; int temp;
        vector<int>answer;
        for(int i = 0;i<a.size();i++){
            if(max>a[i]){
                max= a[i];
            }
        }answer.push_back(max);
        for(int i =0;i<a.size();i++){
            if(min<a[i]){
                min= a[i];
            }
        }answer.push_back(min);

        return answer;

    }

};
int main(){
    Abhi obj;
    vector<int> a = {3,5,66,7,3};
    vector<int> ans = obj.maxNmin(a);
cout<<"Minimum number = "<<ans[0]<<endl;
cout<<"Maximum number = "<<ans[1]<<endl;
    
}