class Solution {
public:
    int maxDepth(TreeNode* root) {
         if(root==NULL){
            return 0;
         }
         int l1=maxDepth(root->left);
         int l2=maxDepth(root->right);
         int ans=max(l1,l2)+1;
         return ans;
    }
};