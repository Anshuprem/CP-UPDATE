#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    long long reverse = 0;
    if (x == -2147483648) return 0;
    if (x < 0) {
        x = -x;
        while (x > 0) {
            int lastd = x % 10;
            reverse = (reverse * 10) + lastd;
            x = x / 10;
        }
        if (reverse > 2147483647)
            return 0;
        return -reverse;
    } else {
        while (x > 0) {
            int lastd = x % 10;
            reverse = (reverse * 10) + lastd;
            x = x / 10;
        }
        if (reverse > 2147483647)
            return 0;
        return reverse;
    }
}
