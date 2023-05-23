#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    int cases = 0;
    int n;
    int temp;
    int result;

    int i = 1;
    bool is_possitive;
    int negative[30];
    int ptr;

    while (cin >> temp) {
        result = 1;
        is_possitive = false;
        ptr = 0;

        for (int i = 0; i < temp; ++i) {
            cin >> n;
            if (n > 0) {
                is_possitive = true;
                result *= n;
            } else {
                negative[ptr++] = n;
            }
        }

        sort(negative, negative + ptr);

        if (ptr % 2) {
            for (int j = 0; j < ptr - 1; ++j) {
                result *= negative[j];
            }
        } else {
            for (int j = 0; j < ptr; ++j) {
                result *= negative[j];
            }
        }

        cout << "Case #" << i++ << ": The maximum product is "
             << (is_possitive ? result : 0) << "." << endl
             << endl;
    }

    return 0;
}
