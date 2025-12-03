#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore               p) pianist" << endl;
    cout << "t) tree                    g) game" << endl;

    char choice;
    while(cin >> choice)
    {
        while(cin.get() != '\n')
            continue;
        if(choice == 'c' || choice == 'p' || choice == 't' || choice == 'g')
            break;
        else
            cout << "Please enter a c, p, t, or g: ";
    }
    switch(choice){
    case 'c':
        cout << "carnivore" << endl;
        break;
    case 'p':
        cout << "pianist" << endl;
        break;
    case 't':
        cout << "A maple is a tree" << endl;
        break;
    case 'g':
        cout << "game" << endl;
        break;
    default:
        cout << "unknown error" << endl;
        break;
    }

    return 0;
}

