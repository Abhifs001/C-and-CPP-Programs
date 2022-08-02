#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main(){
  
    vector<string>test= {"eat","tea", "tan","ate","nat","bat"};
    vector<vector<string>>wert;
    wert.resize(test.size());
map<string, vector<int>> Map;
for(int i =0;i<test.size();i++){
    string temp = test[i];
    sort(temp.begin(),temp.end());
    Map[temp].push_back(i);
}


   for(auto it:Map){
       vector<int>inde= it.second;
       vector<string>temp;
       for(auto t:inde){
           temp.push_back(test[t]);
       }
       wert.push_back(temp);
   }
 


    for(int i = 0 ;i<wert.size();i++){
        for(int j = 0 ;j<wert[i].size();j++){
cout<<wert[i][j]<<endl;
        }
    }

}