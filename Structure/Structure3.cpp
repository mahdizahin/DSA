#include<iostream>
using namespace std;

struct fairy{

string name;
string universe;
int age;
};

int main(){

fairy porimoni;

porimoni.name="porimoni";
porimoni.universe="Benjir";
porimoni.age=16;

fairy alisaB7;

alisaB7.name="Asila Monash";
alisaB7.universe="Heaven seven";
alisaB7.age=18;

cout<<porimoni.name<<" "<<porimoni.universe<<" "<<porimoni.age<<endl;
cout<<alisaB7.name<<" "<<alisaB7.universe<<" "<<alisaB7.age<<endl;

}
