#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

    TreeNode* rdeserealise(string &data, int &index){
        if(index >= data.size() || data.substr(index, 4) == "null") {
            index += 5; // move index after "null,"
            return nullptr;
        }
        string k;
        while(data[index] != ',') {
            k += data[index];
            index++;
        }
        cout<<k<<endl;
        index++; // move index after ","
        TreeNode* root = new TreeNode(stoi(k));
        root->left = rdeserealise(data, index);
        root->right = rdeserealise(data, index);
        return root;       
    }

    string reserialize(TreeNode* root){
        if(root == nullptr){
            return "null";
        }
        string s = to_string(root->val);
        s += ",";
        s += reserialize(root->left);
        s += ",";
        s += reserialize(root->right);
        return s;
    }

    TreeNode* deserialize(string data) {
        int index = 0;
        return rdeserealise(data, index);
    }

    string serialize(TreeNode* root) {
        string l= reserialize(root);
        return l;
    }

    
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);    // Test your code here
    cout<<serialize(root);
    return 0;
}
