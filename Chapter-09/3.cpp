#include <iostream>
#include <new>

using std::cout;
using std::cin;
using std::endl;

struct chaff
{
    char dross[20];
    int slag;
};

void set_chaff(chaff* p_chaff, int n);
void show_chaff(const chaff* p_chaff, int n);

const int BUF = 512;
char buffer[BUF];

int main()
{
    chaff* p_chaff;

    p_chaff = new (buffer) chaff[2];
    set_chaff(p_chaff, 2);
    show_chaff(p_chaff, 2);

    chaff* heap_chaff = new chaff[2];
    set_chaff(heap_chaff, 2);
    show_chaff(heap_chaff, 2);

    delete [] heap_chaff;
    return 0;
}

void set_chaff(chaff* p_chaff, int n){
    for(int i = 0; i < n; i++){
        cout << "Enter dross: ";
        cin.getline(p_chaff[i].dross, sizeof(p_chaff[i].dross));
        cout << "Enter slag: ";
        cin >> p_chaff[i].slag;
        while(cin.get() != '\n')
            continue;
    }
}
void show_chaff(const chaff* p_chaff, int n){
    for(int i = 0; i < n; i++)
        cout << "dross: " << p_chaff[i].dross 
            << ", slag: " << p_chaff[i].slag << endl;
}
