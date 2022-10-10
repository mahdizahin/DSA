#include<iostream>
using namespace std;
int main(){

int count=0;
string s1="I hate programming";
char s2='a';
for(int i=0; s1[i]!='\0';i++){

    if(s1[i]==s2){
       count++;
}
    }

cout<<s2<<" appeared "<<count<<" times";
}
