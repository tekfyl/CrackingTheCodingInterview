 int bal = 1;
 int hb(TreeNode *A){
     if(A == NULL) return 0;
     int l,r;
     l = hb(A->left);
     r = hb(A->right);
     if(abs(l-r) > 1) bal = 0;
     return max(l,r) + 1;
 }
 
int Solution::isBalanced(TreeNode* A) {

    hb(A);
    return bal;
}
i
