#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int _val) : val(_val), left(nullptr), right(nullptr) {}
};

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
    
    int key1 = 80; // Example key
    int key2 = 50;
    vector<int> v1, v2;
    rec(root, key1, v1);
    rec(root, key2, v2);
    int i = 0;
    int n = v1.size();
    int m = v2.size();
    while(i < n && i < m && v1[i] == v2[i]) {
        i++;        
    }
    int ans = (n - i) + (m - i);
    cout << ans << endl;
    return 0;
}

