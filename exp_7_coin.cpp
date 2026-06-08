#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, amount;

    // Input number of coins
    cout << "Enter number of coin denominations: ";
    cin >> n;

    int coins[100];  // simple array (max 100 coins)

    // Input coin values
    cout << "Enter coin denominations:\n";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    // Input amount
    cout << "Enter the amount: ";
    cin >> amount;

    // Sort coins in descending order
    sort(coins, coins + n, greater<int>());

    int count = 0;
    int usedCoins[100]; // to store result
    int k = 0;

    // Greedy approach
    for (int i = 0; i < n; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            usedCoins[k++] = coins[i];
            count++;
        }
    }

    // Output result
    if (amount != 0) {
        cout << "Change cannot be made with given denominations.\n";
    } else {
        cout << "Minimum coins required: " << count << endl;
        cout << "Coins used: ";
        for (int i = 0; i < k; i++) {
            cout << usedCoins[i] << " ";
        }
    }

    return 0;
}

