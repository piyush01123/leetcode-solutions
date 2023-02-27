/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode *>nodes;
    void pushLeft(TreeNode *root)
    {
        while (root!=NULL)
        {
            nodes.push(root);
            root=root->left;
        }
    }
    BSTIterator(TreeNode* root) {
        pushLeft(root);
    }
    
    int next() {
        if (nodes.size()>0)
        {
            TreeNode *leftBottom = nodes.top();
            nodes.pop();
            pushLeft(leftBottom->right);
            return leftBottom->val;
        }
        else return -1;
        
    }
    
    bool hasNext() {
        return nodes.size()>0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */