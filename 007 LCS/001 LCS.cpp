#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for (int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N=1e3+2;

int lcs(string &s1, string &s2,int n, int m)//just pass string's refference
{
   if(n==0||m==0){
    return 0;
   } else if (s1[n-1]==s2[m-1]){
        return 1+lcs(s1,s2,n,m-1);
   }else{
        return max(lcs(s1,s2,n,m-1), lcs(s1,s2,n-1,m));
   }


}
int main(){
string s1,s2;
cout<<"Enter first String : ";
cin>>s1;
cout<<"Enter Second String : ";
cin>>s2;


int n=s1.size(), m=s2.size();

cout<<lcs(s1,s2,n,m);

return 0;
}
