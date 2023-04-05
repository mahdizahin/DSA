#include<iostream>
#include<vector>
#include<algorithm>
#include<bitset>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for (int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) __builtin_popcount(x)

const int N=1e3+2;  //N= 1-^3 + 2 (10 to the power 3 Plus +2 )

int dp[N][N];

int CoinChange (vi &a,int n,int x){

if(x==0)
    return 1;
if(x<0)
    return 0;
    if(n<=0){
        return 0;
    }

    if(dp[n][x]!=-1){
        return dp[n][x];
    }

    dp[n][x]= CoinChange(a,n,x-a[n-1])+ CoinChange(a,n-1,x);
    return dp[n][x];
}

signed main(){

rep(i,0,N){
rep(j,0,N)
    dp[i][j]=-1;
}

int n;
cin>>n;

vi(a);

rep(i,0,n)
{
    cin>>a[i];
}

int x;
cin>>x;
//cout<<"coin change"

//vvi dp(n=1,vi(x+1,0));

//dp[0][0]= 1;
cout<<CoinChange(a,n,x)<<endl;


return 0;
}
