#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    freopen("input.txt", "r", stdin);    // Reading from input.txt
    freopen("output.txt", "w", stdout);  // Writing to output.txt

    int t;
    cin >> t;  // Number of test cases

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print(n); // Calls the pattern printing function
    }

    return 0;
}
