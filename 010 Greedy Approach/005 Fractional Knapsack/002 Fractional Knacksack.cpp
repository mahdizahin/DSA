//#include<iostream>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

struct Items{
int value;
int weight;
};

bool compare(Items &a, Items&b){
return(a.value/(double)a.weight)> (b.value/(double)b.weight);

}

double fk(int w, Items *items, int n){
//sort the item based on the ratio : value/weight

sort(items,items+n,compare);

double max_val=0;
int cur_w=0; //current weight
for(int i=0;i<n;i++){
    //accomodate the full weight of item
    if(cur_w + items[i].weight<=w){
        cur_w +=items[i].weight;
        max_val += items[i].value;
    }else{
    //fraction of the weight
    int rem_w = w-cur_w;
    max_val+= items[i].value* (rem_w/(double)items[i].weight);
    break;
    }
}
return max_val;
}

int main(){

int n;
cin>>n;

Items items[n];
//input the values
for(int i=0;i<n;i++){
    cin>>items[i].value;
    }
//input for weights
for(int i=0;i<n;i++){
    cin>>items[i].weight;
}
///capacity
int w;
cin>>w;

cout<<fixed<<setprecision(3)<<fk(w,items,n);
}
