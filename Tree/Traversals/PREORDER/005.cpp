
#include "bits/stdc++.h"
using namespace std;

struct Node{

    int data;
    struct Node* left;
    struct Node* right;

    Node(int value){

        data=value;
        left=NULL;
        right=NULL;

    }

};


void preorder(struct Node* root){

    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

int main(){

struct Node* root=new Node(10);
root->left=new Node(5);
root->right=new Node(20);

root->right->left=new Node(17);
root->right->right=new Node(24);
preorder(root);



return 0;
}
