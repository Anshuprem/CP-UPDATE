#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void minCoins(vector<int>& coins, int amount) {
    sort(coins.rbegin(), coins.rend());

    vector<int> result;
    for (int coin : coins) {
        while (amount >= coin) {
            amount -= coin;
            result.push_back(coin);
        }
    }

    if (amount == 0) {
        cout << "Coins used: ";
        for (int coin : result)
            cout << coin << " ";
        cout << endl;
    } else {
        cout << "Change cannot be made with given denominations" << endl;
    }
}

int main() {
    vector<int> coins = {1, 5, 10, 25, 50}; 
    int amount;

    cout << "Enter the amount: ";
    cin >> amount;

    minCoins(coins, amount);
    return 0;
}
