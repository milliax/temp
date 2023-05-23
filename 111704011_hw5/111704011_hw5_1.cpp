#include <bits/stdc++.h>
using namespace std;
double calculateAverage(const vector<int> &numbers);
int findElementIndex(const vector<int> &numbers, int target);
void removeEvenNumbers(vector<int> &numbers);
int findMaxValue(const vector<int> &numbers);
vector<int> mergeVectors(const vector<int> &vector1,
                         const vector<int> &vector2);
int main() {
    // input vector1, vector2, target
    int count, value;
    cin >> count;
    vector<int> vector1, vector2;
    for (int i = 0; i < count; ++i) {
        cin >> value;
        vector1.push_back(value);
    }
    cin >> count;
    for (int i = 0; i < count; ++i) {
        cin >> value;
        vector2.push_back(value);
    }
    int target;
    cin >> target;

    // 計算vector1平均值
    double average = calculateAverage(vector1);
    cout << average << endl;

    // 查找vector1特定元素
    int index = findElementIndex(vector1, target);
    cout << index << endl;

    // 移除vector1偶數
    removeEvenNumbers(vector1);
    for (int num : vector1) cout << num << " ";
    cout << endl;

    // 查找new vector1最大值
    int maxValue = findMaxValue(vector1);
    cout << maxValue << endl;

    // 合併兩個 vector
    vector<int> mergedVector = mergeVectors(vector1, vector2);
    for (int num : mergedVector) cout << num << " ";
    cout << endl;

    return 0;
}

double calculateAverage(const vector<int> &numbers) {
    double sum = 0;
    for (int e : numbers) {
        sum += e;
    }
    return sum / numbers.size();
}
int findElementIndex(const vector<int> &numbers, int target) {
    for (int i = 0; i < numbers.size(); ++i) {
        if (target == numbers[i]) {
            return i;
        }
    }
    return -1;
}
void removeEvenNumbers(vector<int> &numbers) {
    vector<int> ans;
    for (int e : numbers) {
        if (e % 2) {
            ans.push_back(e);
        }
    }
    numbers.clear();
    ans.swap(numbers);
}
int findMaxValue(const vector<int> &numbers) {
    int max = -1;
    for (int e : numbers) {
        if (e > max) {
            max = e;
        }
    }
    return max;
}
vector<int> mergeVectors(const vector<int> &vector1,
                         const vector<int> &vector2) {
    vector<int> ans;
    for (int e : vector1) {
        ans.push_back(e);
    }
    for (int e : vector2) {
        ans.push_back(e);
    }
    sort(ans.begin(), ans.end());
    return ans;
}