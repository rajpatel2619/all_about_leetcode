/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> res;
        if(n%2==0 || n==0) return res;
        if(n==1){
            TreeNode* temp = new TreeNode(0);
            res.push_back(temp);
            return res;
        }
        for(int i=1;i<n;i+=2)
        {
            vector<TreeNode*> lft = allPossibleFBT(i);
            vector<TreeNode*> rft = allPossibleFBT(n-i-1);
            for(int i=0;i<lft.size();i++){
                for(int j=0;j<rft.size();j++){
                    TreeNode* root = new TreeNode(0);
                    root->left = lft[i];
                    root->right = rft[j];
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};
