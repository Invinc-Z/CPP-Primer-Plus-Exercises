#include <iostream>
using std::cout;
using std::endl;

template <typename T>
long double sum_values(const T & value)
{
    return static_cast<double>(value);
}

template <typename T, typename... Args>
long double sum_values(const T& value, const Args&... args)
{
    return static_cast<double>(value + sum_values(args...));
}

int main (int argc, char *argv[]) {
    cout << sum_values(1, 3L, 5.0) << endl;
    return 0;
}
