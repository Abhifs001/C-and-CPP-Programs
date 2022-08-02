#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> answer;
        vector<int>hash(26,0);
        int start=0,maxi= INT32_MIN;
        for(int i = 0;i<s.size();i++){
            hash[s[i]-'a']= i;
        }

        for(int i = 0 ;i<s.size();i++){
            maxi = max(hash[s[i]-'a'],maxi);

            if(maxi<=i){
                answer.push_back(i-start+1);
                start = i+1;
            }

        }
     return answer;   
    }
};
int main(){
    Solution a;

    string e="ababcbacadefegdehijhklij";

    vector<int>answer= a.partitionLabels(e);

    for(int i =0;i<answer.size();i++){

        cout<<answer[i]<<" ";
    }
    
}