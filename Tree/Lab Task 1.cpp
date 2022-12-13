#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
	Node *lptr;
	Node *rptr;
	Node(){
	    lptr=NULL;
	    rptr=NULL;
	}
	Node(int val){
	    data=val;
	    lptr=NULL;
	    rptr=NULL;
	}
};
Node *insertBST(Node *root,int val){
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->lptr=insertBST(root->lptr,val);
    }
    else{
        root->rptr=insertBST(root->rptr,val);
    }
    return root;
}
void inorder(Node *tptr){
    if(tptr==NULL){
        return;
    }
    inorder(tptr->lptr);
    cout<<tptr->data<<" ";
    inorder(tptr->rptr);
}
void preorder(Node *tptr){
    if(tptr==NULL){
        return;
    }
    cout<<tptr->data<<" ";
    preorder(tptr->lptr);
    preorder(tptr->rptr);
}
void postorder(Node *tptr){
    if(tptr==NULL){
        return;
    }
    postorder(tptr->lptr);
    postorder(tptr->rptr);
    cout<<tptr->data<<" ";
}
Node *searchBST(Node *root,int val){
    if(root==NULL){
        return NULL;
    }

    if(root->data==val){
        return root;
    }
    if(root->data > val){
        return searchBST(root->lptr,val);
    }
    return searchBST(root->rptr,val);
}
Node *Inorder(Node *root){
    Node *curr=root;
    while(curr && curr->lptr !=NULL){
        curr=curr->lptr;
    }
    return curr;
}

Node *deleteBST(Node *root,int val){
    if(val < root->data){
        root->lptr=deleteBST(root->lptr,val);
    }
    else if(val> root->data){
        root->rptr=deleteBST(root->rptr,val);
    }
    else{
        if(root->lptr==NULL){
            Node *temp=root->rptr;
            free(root);
            return temp;
        }
        else if(root->rptr==NULL){
            Node *temp=root->lptr;
            free(root);
            return temp;
        }
        Node *temp=Inorder(root->rptr);
        root->data=temp->data;
        root->rptr=deleteBST(root->rptr,temp->data);
    }
    return root;
}

int main()
{
    Node *root=NULL;
    while(1){
        cout<<"1.Insert\n2.Travers\n3.Search\n4.Delete"<<endl;
        int n;
        cin>>n;
        switch(n){
        case 1:{
            int n1;
            cout<<"Enter The Number : ";
            cin>>n1;
            root=insertBST(root,n1);
            break;
        }
        case 2:{
            int n2;
            cout<<"1.Inorder\n2.Preorder\n3.postorder";
            cin>>n2;
            switch(n2){
            case 1:
                inorder(root);
                cout<<endl;
                break;
            case 2:
                preorder(root);
                cout<<endl;
                break;
            case 3:
                postorder(root);
                cout<<endl;
                break;
            }
            break;
        }
            case 3:{
                int n3;
                cout<<"Enter The Number : ";
                cin>>n3;
                if (searchBST(root,n3)==NULL){
                   cout<<"Doesn't exist"<<endl;
                }
                else{
                   cout<<"Exists"<<endl;
                }
                break;
            }
            case 4:{
                int n4;
                cout<<"Enter The number : ";
                cin>>n4;
                root=deleteBST(root,n4);
                break;
            }
        }
    }

    return 0;
}
