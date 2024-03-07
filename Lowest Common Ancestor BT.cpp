#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int _val) : val(_val), left(nullptr), right(nullptr) {}
};

//vector<int> rec(TreeNode* root, int key) {
//    if(root == nullptr) return {};
//
//    if(root->val == key) {
//        return {root->val};
//    }
//
//    vector<int> leftPath = rec(root->left, key);
//    if(!leftPath.empty()) {
//        leftPath.insert(leftPath.begin(), root->val);
//        return leftPath;
//    }
//
//    vector<int> rightPath = rec(root->right, key);
//    if(!rightPath.empty()) {
//        rightPath.insert(rightPath.begin(), root->val);
//        return rightPath;
//    }
//
//    return {}; // Return empty vector if key is not found in left or right subtree
//}


bool rec(TreeNode* root, int key, vector<int>& v) {
    if(root == nullptr) {
        return false;
    }

    if(root->val == key) {
        v.push_back(root->val);
        return true;
    }

    v.push_back(root->val);

    if(rec(root->left,key,v) || rec(root->right,key,v)) {
        return true;
    }

    v.pop_back();
    return false;
}


int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(50);
    root->left->right = new TreeNode(60);
    root->right->left = new TreeNode(40);
    root->right->left->right = new TreeNode(80);
    
    int key1 = 60;
    int key2 = 50;
    vector<int> v1;
    vector<int> v2;
    rec(root, key1, v1);
    rec(root, key2, v2);

    // Find the common ancestor by comparing the paths
    int i = 0;
    while(i < v1.size() && i < v2.size() && v1[i] == v2[i]) {
        i++;
    }
    // Print the value of the last common ancestor
    if(i > 0) {
        cout << "Common Ancestor: " << v1[i-1] << endl;
    } else {
        cout << "No common ancestor found." << endl;
    }

    return 0;
}

