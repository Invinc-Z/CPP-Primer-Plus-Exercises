#include <iostream>
#include <algorithm>
#include <array>
#include <cassert>

int reduce(long ar[], int n);


int main() {
    std::array<long, 5> arr = {5, 3, 2, 3, 1};
    int len = reduce(arr.data(), static_cast<int>(arr.size()));

    assert(arr.size() == 5); // std::array has a fixed physical size.
    assert(len == 4);        // Only the logical size is reduced.
    const std::array<long, 4> expected = {1, 2, 3, 5};
    assert(std::equal(arr.begin(), arr.begin() + len, expected.begin()));

    std::cout << "physical size: " << arr.size() << '\n';
    std::cout << "logical size: " << len << '\n';
    std::cout << "reduced values:";
    for (int i = 0; i < len; ++i)
        std::cout << ' ' << arr[i];
    std::cout << '\n';

    return 0;
}

int reduce(long ar[], int n)
{
    std::sort(ar, ar + n);
    long* new_end = std::unique(ar, ar + n);
    return new_end - ar;
}
