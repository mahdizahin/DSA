#include "bits/stdc++.h"
using namespace std;

struct Node{

    int data;
    struct Node* LeftPointer;
    struct Node* RightPointer;

    Node(int value){

        data=value;
        LeftPointer=NULL;
        RightPointer=NULL;

    }

};

void postorder(struct Node* root){

    if(root==NULL){
        return;
    }

    postorder(root->LeftPointer);
    postorder(root->RightPointer);
    cout<<root->data<<" ";

}

int main(){

    struct Node* root= new Node(50);
    root->LeftPointer=new Node(30);
    root->RightPointer=new Node(70);

    postorder(root);
}
