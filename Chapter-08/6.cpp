#include <iostream>
#include <cstring>
using namespace std;

// 1. 通用模板：求数组中“值最大”的元素（数值类型）
template <typename T>
T maxn(const T arr[], int n) {
    T max_val = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

// 2. 针对 const char* 类型的全特化：求最长字符串（匹配原模板的语法要求）
template <>  // 全特化必须加的标记
const char* maxn<const char*>(const char* const arr[], int n) {
    const char* longest_str = arr[0];
    for (int i = 1; i < n; ++i) {
        if (strlen(arr[i]) > strlen(longest_str)) {
            longest_str = arr[i];
        }
    }
    return longest_str;
}

int main() {
    // 测试数值数组
    int int_arr[] = {1, 5, 3, 9, 2};
    double double_arr[] = {3.14, 1.59, 9.81, 2.72};
    cout << "整型数组最大值：" << maxn(int_arr, 5) << endl;
    cout << "浮点数组最大值：" << maxn(double_arr, 4) << endl;

    // 测试字符串数组
    const char* str_arr[] = {"apple", "banana", "cherry", "date", "error"};
    cout << "最长字符串：" << maxn(str_arr, 5) << endl;

    return 0;
}
