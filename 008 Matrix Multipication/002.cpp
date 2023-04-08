#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int MAX=100;

int main(){

int row1,row2,colm1,colm2;

int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
cout<<"Row 1st";
cin>>row1;
cin>>colm1;
cin>>row2;
cin>>colm2;

if(colm1  != row2){
    cout<<"Gun kora possible na";
    return 0;
}

cout<<"Enter the element of fst mtrx";

for(int i=0;i<row1;i++){
    for(int j=0;j<colm1;j++){
        cin>>matrix1[i][j];
    }
}


cout<<"Enter the element of fst mtrx";

for(int i=0;i<row2;i++){
    for(int j=0;j<colm2;j++){
        cin>>matrix2[i][j];
    }
}

for(int i=0;i<row1;i++){
    for(int j=0;j<colm2;j++){
        result[i][j]=0;
        for(int k=0; k<colm1;k++){
            result[i][j] +=matrix1[i][k]*matrix2[k][j];
        }
    }
}

for(int i=0;i<row1;i++){
    for(int j=0;j<colm2;j++){
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}
