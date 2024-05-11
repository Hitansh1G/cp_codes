#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<unordered_map>
#include<unordered_set>

#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(),left(NULL),right(NULL) {}
    TreeNode(int x): val(x),left(NULL),right(NULL) {}
    TreeNode(int x , TreeNode* left , TreeNode* right):val(x),left(left),right(right){}
};


TreeNode* newNode(int val){
    TreeNode* root = new TreeNode;
    root->val = val;
    root->left = root->right = NULL;
    return root;
}
int helper(TreeNode* root){

    if(root == NULL) return 0;
    queue<TreeNode*>q;

    q.push(root);
    int count =0;
    while(!q.empty()){
        int n = q.size();
        for(int i=0;i<n;i++){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left != NULL)q.push(curr->left);

            if(curr->right != NULL)q.push(curr->right);

        }
        count++;
    }
    return count;
}
int32_t main(){
    Fast
    TreeNode* root = newNode(3);
    root->left = newNode(9);
    root->right = newNode(20);
    root->right->left = newNode(15);
    root->right->right = newNode(7);
    root->left->left = newNode(10);
    root->left->right = newNode(1);
    root->left->left->left = newNode(2);


    cout<<helper(root);

    return 0;
}