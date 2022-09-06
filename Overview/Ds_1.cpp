#include<iostream>
#include<stdio.h>
using namespace std;
struct myStruct{
    string name;
    int age;
    double height;

};

int main(){
    int x;
    struct myStruct s1;
    struct myStruct s2;

    s1.name="zahin";
    s1.age=21;
    s1.height=5.58;



cout<<"Java is better than c++"<<endl;
cout<<"Name is "<<s1.name<<",age is "<<s1.age<<", height is"<<s1.height<<endl;

return 0;

}
