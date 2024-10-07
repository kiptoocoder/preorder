class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> postorderTraversal(TreeNode* root) {
    vector<int> result;
    helper(root, result);
    return result;
}

void helper(TreeNode* node, vector<int>& result) {
    if (node) {
        helper(node->left, result);
        helper(node->right, result);
        result.push_back(node->val);
    }
}