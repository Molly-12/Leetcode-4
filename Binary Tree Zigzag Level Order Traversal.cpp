/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };*/
 
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      vector<vector<int>> ans;
      queue<TreeNode*> q;
      if(root==NULL){
        return ans;
      }
      int flag=0;
      q.push(root);
      while(q.size()){
        int size=q.size();
        vector<int> sub;
        while(size--){
          TreeNode* curr=q.front();
          q.pop();
          if(curr->left!=NULL){
            q.push(curr->left);
          }
          if(curr.right!=NULL){
            q.push(curr->right);
          }
          sub.push_back(curr.val);
        }
        if(flag==0){
          flag=1;
          ans.push_back(sub);
        }
        else{
          reverse(sub.begin(),sub.end());
          ans.push_back(sub);
          flag=0;
        }
      }
      return ans;
    }
};

    
