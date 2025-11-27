#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    char word[32];
    cout << "Enter words (to stop, type the word done): " << endl;
    int count = 0;
    cin >> word; // 读取第一个单词
    while (strcmp(word, "done")) {
        ++count; // 统计输入的单词数量
        cin >> word;
    }
    cout << "You entered " << count << " words." << endl;

    return 0;
}

