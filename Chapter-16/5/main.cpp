#include <iostream>
#include <algorithm>
#include <array>
#include <cassert>
#include <string>


template <class T>
int reduce(T ar[], int n);

void test_long()
{
    std::array<long, 5> values = {5, 3, 2, 3, 1};
    const int length = reduce(values.data(), static_cast<int>(values.size()));

    const std::array<long, 4> expected = {1, 2, 3, 5};
    assert(length == 4);
    assert(std::equal(values.begin(), values.begin() + length, expected.begin()));
}

void test_string()
{
    std::array<std::string, 6> values = {
        "pear", "apple", "pear", "banana", "apple", "orange"
    };
    const int length = reduce(values.data(), static_cast<int>(values.size()));

    const std::array<std::string, 4> expected = {
        "apple", "banana", "orange", "pear"
    };
    assert(length == 4);
    assert(std::equal(values.begin(), values.begin() + length, expected.begin()));
}

int main()
{
    test_long();
    test_string();
    std::cout << "All tests passed.\n";
}


template <class T>
int reduce(T ar[], int n)
{
    std::sort(ar, ar + n);
    T* new_end = std::unique(ar, ar + n);
    return static_cast<int>(new_end - ar);
}
