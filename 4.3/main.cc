void tr(const vector<int> &v, int low, int high, TreeNode* &r){
    if(low > high) return;
    
    int mid = low+(high-low)/2;
    TreeNode *root = new TreeNode(v[mid]);
    r = root;
    tr(v, low, mid-1, r->left);
    tr(v, mid+1, high, r->right);
}

TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {

    TreeNode *ret = NULL;
    tr(A, 0, A.size()-1, ret);
    return ret;
}

