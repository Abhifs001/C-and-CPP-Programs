/*This Problem is based on the search suggestion System 
When you search for a product on a website it shows a bunch of matching suggestions 
that can be implement using data structures string and searching technique of binary search

First step will be sorting the array of strings lexicographically (dictionary order)
we are using here the std::sort function which sort the array of strings in dictionary order 
lampda expression (third argument in the sort function) specifies the exact comparison function to compare the letters of the strings
so, array of strings is sorted 

now we have 2 approaches - 
1. take a current string and fill it with searchword, character by character
for each character do 
    take a another string TOOl and put first string of products into it and compare its substring from 0 to current.length if found equal store TOOL  in temporary array of string 
    if temporary ka size == 3 break
----------------------
        for(auto c : searchWord){
            //fill the current string with letters of searchword to compare
            current+=c;
            temp.clear();
            for(int i =0;i<products.size();i++){
                string tool = products[i];
                if(tool.substr(0, current.length())==current){
                    temp.push_back(tool);
                    if(temp.size()==3)break;
                }
            }
            ans.push_back(temp);
        }
            return ans;   
    end for 

strore temporary in answer and return
this is costlier as runtime is huge thus we will appply binary search 
----------------------
2. binary search approach

it is similar to previos approach that means loop will run for each char by char filling of searchword in the current string 


binary search is applied as follows 
from left, there is start pointer which is at position of occurences of character example for char m in search word it points to mobile (first occurence)
then it increases start = (start + i)

if string at start position matches the current string, it is stored in the temporary array and temporary array is stored in the answer 2d vector 

example - searchword is mobile 
first iteration 
current = m , start = mobile 
i=0
string tool = valued at start +0 = start = mobile 
if tool(find(mobile )) -> true as m is in mobile so store mobile  in temporary array of strings and repeat 3 times (given in question)

then store it in the answer 2d vector

*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end(), [](string a , string b){return a<b;});
        vector<vector<string>>ans;
        vector<string>temp;
        string current="";
        auto start= products.begin();
        
                
                for(auto c : searchWord){
                    current+=c;
                    temp.clear();
                    start = lower_bound(start, products.end(),current);
                    for(int i =0; i<3 && start+i!=products.end(); i++){
                        string tool = *(start+i);
                        if(tool.find(current))break; // loop breaks if the current string is not found
                        temp.push_back(tool);

                    }
                    ans.push_back(temp);
                }
 return ans;
    }

    
    
};

int main(){
    Solution a;
    vector<string> arr = {"mobile","mouse","moneypot","monitor","mousepad"};
   vector<vector<string>> answer =  a.suggestedProducts(arr, "mobile");
   
   
   for(int i =0;i<answer.size();i++){
    for(int j=0;j<answer[i].size();j++){
        for(int k = 0; k< answer[i][j].length();k++){
           cout<<answer[i][j][k];
        }
    }
        cout<<endl;
   }

   
   

}