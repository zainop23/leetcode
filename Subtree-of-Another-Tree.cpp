1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    bool subtree(TreeNode* root, TreeNode* subRoot){
15        if(!root && !subRoot) return true;
16        if(!root || !subRoot) return false;
17        if(root->val != subRoot->val) return false;
18        return subtree(root->left,subRoot->left) && subtree(root->right,subRoot->right);
19    }
20    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
21        if(!root) return false;
22        if(subtree(root,subRoot)) return true;
23        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
24
25    }
26};