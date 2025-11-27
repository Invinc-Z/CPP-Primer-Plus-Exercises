#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    string word;
    cout << "Enter words (to stop, type the word done): " << endl;
    int count = 0;
    cin >> word; // 读取第一个单词
    while (word != "done") {
        count++; // 统计输入的单词数量
        cin >> word;
    }
    cout << "You entered " << count << " words." << endl;

    return 0;
}

