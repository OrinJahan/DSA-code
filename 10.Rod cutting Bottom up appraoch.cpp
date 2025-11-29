#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int profit[8] = {0, 10, 22, 35, 45, 57, 62, 70};
    int dp[8];
    int cut[8];
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        int maxProfit = -1000000;
        for (int j = 1; j <= i; j++) {
            int currentProfit = profit[j] + dp[i - j];
            if (currentProfit > maxProfit) {
                maxProfit = currentProfit;
                cut[i] = j;
            }
        }
        dp[i] = maxProfit;
    }
    cout << "Maximum Profit: " << dp[n] << endl;
    cout << "Optimal cuts: ";
    int length = n;
    while (length > 0) {
        cout << cut[length] << " ";
        length -= cut[length];
    }
    cout << endl;

    return 0;
}
