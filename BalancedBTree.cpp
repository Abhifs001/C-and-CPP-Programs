/*Converting Sorted array into Binary Tree
some tips for good programming practice 
1. avoid writing 'Using Namespace std' in code as include all the files including unncessary one 
2. using std:: for vectors as vector is a class in standard namespace 
3. for using a custom data type, use constructor whererever possible

Divide and Conquer technique

to convert an array into a balanced binary search tree

sort the array 

break the array from middle make the tree 
and then make tree from left subarray and right subarray



*/
#include<bits/stdc++.h>
struct TreeNode{
    TreeNode *left, *right;
        int val;
        TreeNode(int x){
            val = x;
            left=NULL; right = NULL;
        }
        TreeNode(int x, TreeNode*LEFT, TreeNode*RIGHT){
            val = x;
            left=LEFT;
            right=RIGHT;
        }
};
class Solution {
public:
    TreeNode* sortedArrayToBST(std::vector<int>&nums) {  
        return ArrtoBST(nums, 0, nums.size()-1);
    }

    TreeNode* ArrtoBST(std::vector<int>&nums, int start, int end){
        if(start>end)return NULL;
        int middle = (start+end)/2;
        TreeNode* Root= new TreeNode(nums[(start+end)/2], ArrtoBST(nums, start, middle-1), ArrtoBST(nums, middle+1, end));

        return Root;
    }

  void display(TreeNode*root){
    if(root!=NULL){
            std::cout<<root->val<<" ";
            display(root->left);
            display(root->right);
   }
        
    }


};

int main(){
    Solution a;
    std::vector<int>Arr = {-10,-3,0,5,9};
    TreeNode*answer = a.sortedArrayToBST(Arr);
    a.display(answer);
}