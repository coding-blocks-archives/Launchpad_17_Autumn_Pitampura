// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

int memo[100];

int fib(int x) {
    if (x == 0 || x == 1) return x;

    if (memo[x] != -1) return memo[x];

    int ans = fib(x - 1) + fib(x - 2);
    memo[x] = ans;
    return ans;
}


int dp[100];
int fibBottomUp(int x) {
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= x; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[x];
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 100; ++i) memo[i] = -1;

    cout << fib(n);


}