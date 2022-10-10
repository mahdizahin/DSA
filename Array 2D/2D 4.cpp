#include<iostream>
using namespace std;
int main(){

//string arr[3][3]={"Name","Roll","ID","ZAHIN","464","22-1","7","8","9"};

string arr[3][3];

cout<<"\n2D Array Input:\n";
for(int i=0;i<3;i++){
    for(int j=0; j<3;j++){
            cout<<"\narr["<<i<<"]["<<j<<"]=  ";
        cin>>arr[i][j];
    }

}
cout<<"\nThe 2-D Array is:\n";
for(int i=0;i<3;i++){
    for(int j=0; j<3;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


}
