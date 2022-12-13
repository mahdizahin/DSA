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

void inorder(struct Node* root){

    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


int main(){

struct Node* root =new Node(57);

root->left=new Node(34);
root->right=new Node(78);

cout<<"INORDER Format : ";
inorder(root);

}
