#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    int temp;
    int maxn;
    int index = 1;
    int input[30];

    while (cin >> temp) {
        maxn = 0;

        for (int i = 0; i < temp; ++i) cin >> input[i];

        for (int i = 0; i < temp; ++i) {
            int product_sum = 1;
            for (int j = i; j < temp; ++j) {
                product_sum *= input[j];
                if (product_sum > maxn) {
                    maxn = product_sum;
                }
            }
        }

        cout << "Case #" << index++ << ": The maximum product is " << maxn
             << "." << endl
             << endl;
    }

    return 0;
}
