#include <iostream>
#include "dma.h"
const int CLIENTS = 4;

using std::cout;
using std::endl;
using std::cin;

int main()
{
    DMA * p_dma[CLIENTS];
    int temp_rating;
    char kind;
    char temp_label[1024];

    for(int i = 0; i < CLIENTS; i++)
    {
        cout << "Enter client's rating: ";
        cin >> temp_rating;
        cout << "Enter client's label: ";
        while(cin.get() != '\n')
            continue;
        cin.getline(temp_label, sizeof(temp_label));
        cout << "Enter 1 for baseDMA, 2 for lacksDMA, and 3 for hasDMA: ";
        while(cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
            cout << "Enter 1, 2 or 3: ";
        while(cin.get() != '\n')
            continue;
        if(kind == '1')
            p_dma[i] = new baseDMA(temp_label, temp_rating);
        else if (kind == '2')
        {
            cout << "Enter client's color: ";
            char temp_color[64];
            cin.getline(temp_color, sizeof(temp_color));
            p_dma[i] = new lacksDMA(temp_color, temp_label, temp_rating);
        }
        else if(kind == '3')
        {
            cout << "Enter client's style: ";
            char temp_style[64];
            cin.getline(temp_style, sizeof(temp_style));
            p_dma[i] = new hasDMA(temp_style, temp_label, temp_rating);
        }
        cout << endl;
    }

    cout << "--------------------------" << endl;
    for(int i = 0; i < CLIENTS; i++)
    {
        p_dma[i]->View();
        cout << "--------------------------" << endl;
    }

    for(int i = 0; i < CLIENTS; i++)
        delete p_dma[i];

    cout << "Done.\n";
    return 0;
}

