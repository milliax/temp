#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

string solution(int a[], int n) {
    int d[n];
    bool key = true;

    for (int i = 0; i < n - 1; i++) {
        d[i] = abs(a[i + 1] - a[i]);
        if (!(d[i] >= 1 && d[i] <= n - 1)) return "Not jolly";
    }

    sort(d, d + n - 1);

    // cout << "Sorted" << endl;
    // for (int i = 0; i < n - 1; i++) {
    //     cout << d[i] << " ";
    // }
    // cout << endl;

    for (int i = 0; i < n - 1; i++) {
        if (d[i] != i + 1) {
            key = false;
            break;
        }
    }

    if (key)
        return "Jolly";
    else
        return "Not jolly";
}
/*
int main() {
    int n;
    while (cin >> n) {
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << solution(a, n) << endl;
    }
    return 0;
}*/