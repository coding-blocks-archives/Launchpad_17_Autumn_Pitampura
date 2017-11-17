// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
#include <cstring>
using namespace std;

int memo[60];


int maxCoupons(int stalls[], int be, int en, int k) {
    if (be > en) return 0;

    if (memo[be] != -1) return memo[be];


    int notPick = maxCoupons(stalls, be + 1, en, k);
    int pick = maxCoupons(stalls, be + k + 1, en, k) + stalls[be];

    return memo[be] = max(pick, notPick);
}



int main() {
    int stalls[60];
    int N;
    int k;
    cin >> N >>  k;

    for (int i = 0; i < N; ++i) cin >> stalls[i];
    memset(memo, -1, sizeof memo);

    cout << maxCoupons(stalls, 0, N - 1, k);
}