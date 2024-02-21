#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
void verti(TreeNode* root, unordered_map<int, vector<int>>& um, int col) {
    if (root == nullptr) return;
    
    um[col].push_back(root->val);
    
    verti(root->left, um, col - 1);
    verti(root->right, um, col + 1);
}

vector<int> verticalTraversal(TreeNode* root) {
    vector<int> result;
    if (!root) return result;
    
    unordered_map<int, vector<int>> um;
    verti(root, um, 0);
    
    // Sorting values within each vertical level
    for (auto& vec : um) {
        sort(vec.second.begin(), vec.second.end());
    }
    
    // Sorting based on keys (column numbers)
    vector<int> keys;
    for (auto& entry : um) {
        keys.push_back(entry.first);
    }
    sort(keys.begin(), keys.end());
    
    // Extracting values in sorted order
    for (int key : keys) {
        result.push_back(um[key][0]);
    }
    
    return result;
}

int main() {
    // Creating a binary tree to test verticalTraversal function
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->left->left->right = new TreeNode(7);
    root->left->left->right->left = new TreeNode(9);
    root->left->left->right->left->left = new TreeNode(10);
    root->right->right->left = new TreeNode(8);
    root->right->right->left->right = new TreeNode(11);    

    // Calling verticalTraversal function
    vector<int> result = verticalTraversal(root);

    // Printing the result
    cout << "Vertical Traversal of the Binary Tree: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    // Don't forget to free the allocated memory
    // (not shown in this simplified example)

    return 0;
}
