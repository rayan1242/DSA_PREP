#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:
    string serialize(TreeNode* root) {
        return reserialize(root);
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
        index++; // move index after ","
        TreeNode* root = new TreeNode(stoi(k));
        root->left = rdeserealise(data, index);
        root->right = rdeserealise(data, index);
        return root;       
    }
};

int main() {
    // Test your code here
    return 0;
}
