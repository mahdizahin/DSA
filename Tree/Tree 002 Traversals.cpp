#include "bits/stdc++.h"
//##include<iostream>
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

void pre(struct Node* root){

    if(root==NULL){
        return  ;
    }

    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);


}

void in(struct Node* root){

if (root==NULL){
    return;
}
in(root->left);
cout<<root->data<<" ";
in(root->right);

}

void post(struct Node* root){

    if(root==NULL){
        return;
    }

    post(root->left);
    post(root->right);
    cout<<root->data<<" ";

}

int main(){

struct Node* root=new Node(10);
root->left= new Node(5);
root->right= new Node(15);

root->left->left=new Node(3);
root->left->right=new Node(6);


cout<<"PREORDER : ";
pre(root);
cout<<endl;
cout<<"INORDER : ";
in(root);

cout<<endl;
cout<<"POSTORDER : ";
post(root);

return 0;
}
