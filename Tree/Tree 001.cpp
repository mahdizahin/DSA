#include<iostream>
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

int main(){

struct Node* root=new Node(10);
root->left= new Node(5);
root->right= new Node(15);

root->left->left=new Node(3);
root->left->right=new Node(6);


}
