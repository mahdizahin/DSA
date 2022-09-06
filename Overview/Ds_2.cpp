#include<iostream>
#include<stdio.h>
using namespace std;

struct myStruct{

string Subject_name,student_name;
string id;
double cgpa;


};

int main(){

    struct myStruct student_1;

    student_1.student_name="Mahdi zahin";
    student_1.id="X7-4XXX7-1";
    student_1.Subject_name="Data Structure";
    double grade = student_1.cgpa= 4.00;

    cout<<"C++ is boring"<<endl;

    cout<<"Student Name : "<<student_1.student_name<<endl;
    cout<<"Student ID : "<<student_1.id<<endl;
    cout<<"Subject Name : "<<student_1.Subject_name<<endl;
    cout<<"Student's Grade : "<<grade<<endl;

return 0;}
