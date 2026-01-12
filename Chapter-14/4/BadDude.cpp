#include "BadDude.h"
#include <iostream>
using std::cout;
using std::endl;

double BadDude::Gdraw() const
{
    return Gunslinger::Draw();
}

PokerPlayer::Card BadDude::Cdraw() const
{
    return PokerPlayer::Draw();
}

void BadDude::Show() const
{
    cout << "BadDude's Info: " << endl;
    Person::Data();
    Data();
}
void BadDude::Set()
{
    cout << "BadDude's Setup" << endl;
    Person::Get();
    Get();
}


void BadDude::Data() const
{
    Gunslinger::Data();
    PokerPlayer::Data();
}

void BadDude::Get()
{
    Gunslinger::Get();
    PokerPlayer::Get();
}

