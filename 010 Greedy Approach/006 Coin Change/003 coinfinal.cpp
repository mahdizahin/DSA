#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 0));

    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= amount; j++) {
            if (coins[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
            }
            else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][amount];
}

int main() {
    vector<int> coins = {1,2,5};
    int amount = 12;

    int ans = coinChange(coins, amount);

    cout << "The number of ways to make the amount " << amount << " using coins " << endl;
    for(int i=0;i<coins.size();i++) {
        cout<<coins[i]<<" ";
    }
    cout << "is " << ans << endl;

    return 0;
}
