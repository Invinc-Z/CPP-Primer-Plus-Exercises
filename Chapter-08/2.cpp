#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

const int BrandSize = 32;
struct CandyBar{
    char brand[BrandSize];
    float weight;
    int calories;
};
int SetCandyBar(CandyBar& cb, const char* brand = "Millennium Munch", float weight = 2.85, int calories = 350);
void ShowCandyBar(const CandyBar& cb);

int main()
{
    CandyBar cb;
    cout << "use default values: " << endl;
    SetCandyBar(cb);
    ShowCandyBar(cb);

    cout << "Set by yourself: " << endl;
    SetCandyBar(cb, "Invinc-Z", 12.8, 0);
    ShowCandyBar(cb);

    return 0;
}

int SetCandyBar(CandyBar& cb, const char* brand, float weight, int calories)
{
    memset(cb.brand, 0, BrandSize);
    strcpy(cb.brand, brand);
    cb.weight = weight;
    cb.calories = calories;
    return 0;
}
void ShowCandyBar(const CandyBar& cb)
{
    cout << "brand: " << cb.brand << endl;
    cout << "weight: " << cb.weight << endl;
    cout << "calories: " << cb.calories << endl;
}
