#include<iostream>
using namespace std;
void display()
{
    cout<<"1.Convert Parent to Child""\n2.Convert Child to Parent""\n3.Tree Traverse\n4.Exit"<<endl;
}

void preorder(int pos, int tree[], int len)
{
    int l,r;
    if(pos<len)
    {
        if(tree[pos]!=0)
        {
            cout<< tree[pos] << "   ";
        }
        l = 2*pos + 1;
        preorder(l, tree, len);

        r = 2*pos +2;
        preorder(r,tree, len);
    }
}

void inorder(int pos, int tree[], int len)
{
    int l,r;
    if(pos<len)
    {
        l = 2*pos + 1;
        inorder(l, tree, len);

        if(tree[pos]!=0)
        {
            cout<< tree[pos] << "   ";
        }

        r = 2*pos +2;
        inorder(r,tree, len);


    }


}

void postorder(int pos, int tree[], int len)
{
    int l,r;
    if(pos<len)
    {
        l = 2*pos + 1;
        postorder(l, tree, len);

        r = 2*pos +2;
        postorder(r,tree, len);

        if(tree[pos]!=0)
        {
            cout<< tree[pos] << "   ";
        }


    }


}



int main()
{
    int arr[10]= {1,2,3,4,5,'\0',6,'\0','\0',7};
    int left,right,in;
    int choice,choice2;

    display();
    cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"1.Left""\n2.Right""\n3.exit"<<endl;

            cin>>choice2;
            if(choice2==1)
            {
                cout<<"Enter parent index: ";
                cin>>in;
                left=2*in+1;
                cout<<"Child Value :"<<arr[left]<<"\nchild Index :"<<left<<"\n\n"<<endl;

            }
            else if(choice2==2)
            {
                cout<<"Enter parent index: ";
                cin>>in;
                right=2*in+1;
                cout<<"Child Value :"<<arr[right]<<"\nchild Index :"<<right<<"\n\n"<<endl;
            }
            else if(choice2==3)
            {
                cout<<endl;
                cout<<"Thanks for the convertion.."<<endl;
                cout<<endl;
            }
            else
            {
                cout<<"Enter a option between (1-3)"<<endl;
            }

            break;
        case 2:
            cout<<"1.From Left child ""\n2.From Right child""\n3.Exit"<<endl;
            cin>>choice2;
            if(choice2==1)
            {
                cout<<"Enter Child  index: ";
                cin>>in;
                left=in/2;
                cout<<"partent Value :"<<arr[left]<<"\n parent Index :"<<left<<"\n\n"<<endl;

            }
            else if(choice2==2)
            {
                cout<<"Enter child index: ";
                cin>>in;
                right=(in/2)-1;
                cout<<"Parent Value :"<<arr[right]<<"\nParent Index :"<<right<<"\n\n"<<endl;
            }
            else if(choice2==3)
            {
                cout<<endl;
                cout<<"Thanks for the convertion.."<<endl;
                cout<<endl;
            }
            else
            {
                cout<<"Enter a option between (1-3)"<<endl;

            }

            break;
        case 3:
            cout<< " Pre order: "<<"\t";
            preorder(0, arr, 10);
            cout<< endl;
            cout<< " In order: "<<"\t";
            inorder(0, arr, 10);
            cout<< endl;
            cout<< " Post order: "<<"\t";
            postorder(0, arr, 10);
            break;
        default:
            cout<<"Enter a option between (1-4)"<<endl;
        }

}
