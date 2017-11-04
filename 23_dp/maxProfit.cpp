// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
#include <cstring>
using namespace std;

int memo[100][100];

int maxProfit(int bottlePrice[], int be, int en, int year){
    if (be > en) return 0;

    if (memo[be][en] != -1) return memo[be][en];

    int left = maxProfit(bottlePrice, be + 1, en, year + 1) + bottlePrice[be] * year;
    int right = maxProfit(bottlePrice, be, en - 1, year + 1) + bottlePrice[en] * year;
    int ans = max(left, right);
    memo[be][en] = ans;
    return ans;
}

int main() {
    int bottlePrice[100];
    int n;
    cin >> n;   

    for(int i = 0; i < n; ++i) cin >> bottlePrice[i];

    memset(memo, -1, sizeof memo);

    cout << maxProfit(bottlePrice, 0, n-1, 1);
}