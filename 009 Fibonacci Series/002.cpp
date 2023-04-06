#include<iostream>
using namespace std;

int main(){

int n, first=0, second = 1, last;
cin>>n;

cout<<first<<" "<<second<<" ";

for(int i=2; i<n; i++){
    last=first+second;
    cout<<last<<" ";

    first=second;
    second=last;
}




return 0;
}
