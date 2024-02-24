#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> lef, righ, leaf;

void getleftBoundary(TreeNode* node){
    if (node == nullptr) return;
    if (node->left == nullptr && node->right == nullptr) return; // Avoid adding leaf nodes to the left boundary
    lef.push_back(node->val);
    if (node->left) {
        getleftBoundary(node->left);
    } else if (node->right) {
        getleftBoundary(node->right);
    }
}

void getrightBoundary(TreeNode* node){
    if (node == nullptr) return;
    if (node->left == nullptr && node->right == nullptr) return; // Avoid adding leaf nodes to the right boundary
    if (node->right) {
        getrightBoundary(node->right);
    } else if (node->left) {
        getrightBoundary(node->left);
    }
    righ.push_back(node->val);
}

void getleaf(TreeNode* root){
    if (root == nullptr) return;
    if (root->left == nullptr && root->right == nullptr){
        leaf.push_back(root->val);
    }
    getleaf(root->left);
    getleaf(root->right);
}

vector<vector<int>> getBoundary(TreeNode* root){
    vector<vector<int>> result;
    if (root == nullptr) return result;

    // Add the root value to the left boundary if it doesn't have a right child
    if (root->right == nullptr) lef.push_back(root->val);

    getleftBoundary(root->left);
    getrightBoundary(root->right);
    getleaf(root);

    result.push_back(lef);
    result.push_back(leaf);
    result.push_back(righ);
    return result;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(3);
    root->right->right = new TreeNode(8);
    root->left->left->right = new TreeNode(4);
    root->left->left->right->left = new TreeNode(5);
    root->left->left->right->right = new TreeNode(6);
    root->right->right->right = new TreeNode(9);
    root->right->right->right->left = new TreeNode(10);
    root->right->right->right->right = new TreeNode(11); 

    vector<vector<int>> boundary = getBoundary(root);

    for (const auto& vec : boundary) {
        for (int val : vec) {
            cout << val << " ";
        }
        cout << endl;
    }

    // Cleanup memory to prevent memory leaks
    delete root->left->right;
    delete root->left->left->right->left;
    delete root->left->left->right->right;
    delete root->left->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right->right->right->left;
    delete root->right->right->right->right;
    delete root->right->right->right;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}

