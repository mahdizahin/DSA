#include<iostream>
using namespace std;
int main(){

cout<<"Whatever you type it will just take 10 words "<<endl;

string arr[10];
for(int i=0; i<10; i++){
    cin>>arr[i];
}

cout<<"Your output is "<<endl;

for(int i=0; i<10; i++){
    cout<<arr[i]<<" ";
}

}
