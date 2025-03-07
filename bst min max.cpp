#include <iostream>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void findPairwiseMinMax(TreeNode* root, int parentMin, int parentMax) {
    if (root == nullptr)
        return;

    // Update local minimum and maximum considering parent's constraints
    int localMin = max(root->val, parentMin);
    int localMax = min(root->val, parentMax);

    cout << "Pairwise min-max: " << localMin << ", " << localMax << endl;

    // Recursively find pairwise min-max for left and right subtrees
    findPairwiseMinMax(root->left, parentMin, root->val);
    findPairwiseMinMax(root->right, root->val, parentMax);
}

int main() {
    // Example BST construction
    TreeNode* root = new TreeNode(8);
    root->left = new TreeNode(3);
    root->right = new TreeNode(12);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(6);
    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(14);
    root->left->right->left = new TreeNode(4);
    root->left->right->right = new TreeNode(7);
    root->right->right->left = new TreeNode(13);

    // Find pairwise min-max values in the BST
    findPairwiseMinMax(root, INT_MIN, INT_MAX);

    // Cleanup - freeing memory
    delete root->left->right->right;
    delete root->left->right->left;
    delete root->right->right->left;
    delete root->right->right;
    delete root->right->left;
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
