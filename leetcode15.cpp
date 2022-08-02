#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class MyHashMap {
public:
        vector<int>hash;
    MyHashMap() {
       hash.resize(1e6+1,-1);
      //  MyHashMap*p= new MyHashMap();   
        
    }
    
    void put(int key, int value) {
            hash[key]=value;
            
        
    }
    
    int get(int key) {
        return hash[key];    
    }
    
    void remove(int key) {
        hash[key]=-1;
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

int main(){
    MyHashMap a;
    vector<string>funname= {"MyHashMap", "put", "put", "get", "get", "put", "get", "remove", "get"};
        vector<vector<int>>test= { {0},
                        {1,1},
                        {2,2},
                        {1},
                        {3},
                        {2,1},
                        {2},
                        {2},
                        {2} };

for(int i =0;i<funname.size();i++){
if(funname[i]=="MyHashMap"){
    MyHashMap a;
    cout<<"null"<<" ";

}if(funname[i]=="put"){
    a.put(test[i][0],test[i][1]);
    cout<<"null"<<" ";

} if(funname[i]=="get"){
    int getkey=a.get(test[i][0]);
    cout<<getkey<<" ";


} if(funname[i]=="remove"){
    a.remove(test[i][0]);
    cout<<"null"<<" ";
}

}

    return 0;
}