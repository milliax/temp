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
    // 計算累積總值
    for (int e : numbers) {
        // 用vector的特有語法 (C++11後支援)
        // e 為每一資料格的值
        sum += e;
    }

    /*
    // 原始的 vector 遍歷
    // 用一個 迭代器(iterator) 指向 vector的第一項 然後每次迴圈指向下一項
    直到iterator只到最後一項就結束 for(vector<int>::iterator it =
    numbers.begin();it != numbers.end();it++){ sum += *it;
    }
    */

    // 總數除以vector陣列個數
    // 用法跟陣列的.length()一樣 但vector只有.size()的方法
    return sum / numbers.size();
}

int findElementIndex(const vector<int> &numbers, int target) {
    // 遍歷 numbers 但是需要index
    // 所以把vector當成一般陣列用
    for (int i = 0; i < numbers.size(); ++i) {
        if (target == numbers[i]) {
            // 如果找到目標值就回傳陣列index
            return i;
        }
    }

    // 假如上面的回全找不到目標值
    // 就回傳 -1
    return -1;
}

void removeEvenNumbers(vector<int> &numbers) {
    // 該項目是vector中的奇數元素移除
    // 引數裡面有 & 代表的是call by reference
    // 也就是在這個function中對numbers做的更動都會改變到原本main函式原本變數的值

    // 新建立一個空 vector
    vector<int> ans;

    // 遍歷numbers的每一項 將偶數元素(我們要保留的)存在ans中
    for (int e : numbers) {
        if (e % 2) {
            // 如果是偶數的話就存起來
            ans.push_back(e);
        }
    }

    // 將偶數的vector將ans交換
    ans.swap(numbers);
}

int findMaxValue(const vector<int> &numbers) {
    int max = -1;
    // 將最大值設成不可能達到但又是小的值對這題來說就是 -1
    for (int e : numbers) {
        // 遍歷numbers的每一個值
        // 如果比 max 大就把 max 設成該值
        if (e > max) {
            max = e;
        }
    }
    // 回傳最大值
    return max;
}

vector<int> mergeVectors(const vector<int> &vector1,
                         const vector<int> &vector2) {
    // 合併兩個vector
    // 因為兩個都是const(不能變更)
    // 所以另外建一個vector
    vector<int> ans;

    // 把 vector1 跟 vector2 的值全部存在ans中
    for (int e : vector1) {
        ans.push_back(e);
    }
    for (int e : vector2) {
        ans.push_back(e);
    }
    // 將存完值的 ans 排序
    sort(ans.begin(), ans.end()); // vector排序的專用語法
    return ans;
}