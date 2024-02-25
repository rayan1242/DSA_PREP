#include <iostream>
#include <vector>
using namespace std;

// Definition of TreeNode
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Recursive function to perform in-order traversal and print the values
void printTree(TreeNode* root) {
    if (root == nullptr) return;
    printTree(root->left);
    cout << root->val << " ";
    printTree(root->right);
}

// Recursive function to construct the binary tree
TreeNode* Rec(vector<int>& pre, vector<int>& in, int start, int end, int& index) {
    if (start > end) return nullptr;

    // Find the index of the current root in the inorder traversal
    int ind;
    for (int i = start; i <= end; i++) {
        if (in[i] == pre[index]) {
            ind = i;
            break;
        }
    }

    // Create a new node with the value of the current root
    TreeNode* root = new TreeNode(pre[index]);
    index++;

    // Construct the left and right subtrees recursively
    root->left = Rec(pre, in, start, ind - 1, index);
    root->right = Rec(pre, in, ind + 1, end, index);

    return root;
}

// Function to build the binary tree from preorder and inorder traversals
TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
    int index = 0;
    return Rec(pre, in, 0, in.size() - 1, index);
}

int main() {
    vector<int> pre = {1, 2, 3, 4, 5, 6};
    vector<int> in = {4, 2, 5, 1, 6, 3};
    TreeNode* root = buildTree(pre, in);
    cout<<root->val;
    cout << "In-order traversal of the tree: ";
    printTree(root);
    
    return 0;
}

