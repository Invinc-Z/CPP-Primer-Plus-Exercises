#include "PokerPlayer.h"
#include <iostream>
#include <stdlib.h>
using std::cin;
using std::cout;
using std::endl;

const char* PokerPlayer::k_suit[SIZE] = {"Spade", "Heart", "Diamond", "Club"};
PokerPlayer::Card PokerPlayer::Draw() const
{
    Card card;
    card.suit = rand() % 4;
    card.face = (rand() + 1) % 53; 
    return card;
}

void PokerPlayer::Show() const
{
    cout << "PokerPlayer's Info: " << endl;
    Person::Data();
    Data();
}

void PokerPlayer::Set()
{
    cout << "PokerPlayer's Setup" << endl; 
    Person::Get();
    Get();
}
void PokerPlayer::Data() const
{
    Card card;
    card = Draw();
    cout << "suit: " << k_suit[card.suit] << endl;
    cout << "face: " << card.face << endl;
}

void PokerPlayer::Get()
{
}
