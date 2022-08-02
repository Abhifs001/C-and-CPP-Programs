#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>>answer;
        map<string, vector<int>>MAP;
        for(int i =0;i<strs.size();i++){
            string temp= strs[i];
            sort(temp.begin(),temp.end());
            MAP[temp].push_back(i);

        }

        for(auto it:MAP){
            vector<int>temp = it.second;
            vector<string>ar;

            for(auto index:temp){
                ar.push_back(strs[index]);
            }
            answer.push_back(ar);


        }
return answer;
        
    }
};
int main(){
    Solution a;
    vector<string>test= {"eat","tea", "tan","ate","nat","bat"};
    vector<vector<string>>wert = a.groupAnagrams(test);
    
 
    for(int i = 0 ;i<wert.size();i++){
        for(int j = 0 ;j<wert[i].size();j++){
        cout<<wert[i][j]<<" ";
        }cout<<endl;
    }

}