#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

struct Box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void ShowBox(const Box box);
void SetBoxVolume(Box* pbox);

int main()
{
    Box box;
    strcpy(box.maker, "Invinc-Z");
    box.height = 2;
    box.width = 2;
    box.length = 2;

    SetBoxVolume(&box);
    ShowBox(box);

    return 0;
}

void ShowBox(const Box box)
{
    cout << "maker: " << box.maker << endl;
    cout << "height: " << box.height << endl;
    cout << "width: " << box.width << endl;
    cout << "length: " << box.length << endl;
    cout << "volume: " << box.volume << endl;
}

void SetBoxVolume(Box* pbox)
{
    pbox->volume = pbox->height * pbox->width * pbox->length;
}

