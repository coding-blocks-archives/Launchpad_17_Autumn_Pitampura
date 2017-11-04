// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
#include <algorithm>
using namespace std;
int memo[200];



int change(int denominations[], int n, int money){
    if (money < 0){
        return 1e7;
    }

    if (money == 0) return 0;

    if (memo[money] != -1) return memo[money];

    int ans = 1e7;
    for(int coinNo = 0; coinNo < n; ++coinNo){
        int curCoin = denominations[coinNo];
        int rem = money - curCoin;
        int curAns = 1 + change(denominations, n, rem);
        ans  = min(ans, curAns);
    }
    memo[money] = ans;
    return ans;
}

int dp[100];
int change2(int denominations[], int n, int money){
    dp[0] = 0;
    dp[1] = 1;  //base cases

    for(int i = 2; i <= money; ++i){
        //for each denomination
        for(int j = 0; j < n; ++j){
            dp[i] = min(dp[i], 1 + dp[i - denominations[j]]);
        }
    }
    return dp[money];
}


int main() {
    int denominations[100];
    int n;
    int money;

    cin >> n;
    for(int i = 0; i < n; ++i) cin >> denominations[i];
    cin >> money;

    // fill(memo, memo + 200, -1);
    // memset(dp, inf, sizeof dp);
    fill(dp, dp + 100, 1e7);

    int ans = change2(denominations, n, money);
    cout << ans;

}