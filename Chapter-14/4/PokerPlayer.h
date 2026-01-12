#pragma once
#include "Person.h"
#include <string>
using std::string;

class PokerPlayer : virtual public Person
{
protected:
    struct Card
    {
        int suit;
        int face;
    };
    enum{SIZE = 4};
    void Data() const;
    void Get();
private:
    static const char* k_suit[SIZE];

public:
    PokerPlayer(const string & fn = "", const string & ln = ""): Person(fn, ln) {}
    PokerPlayer(const Person & pn) : Person(pn) {}
    ~PokerPlayer() {}
    Card Draw() const;
    void Show() const;
    void Set(); 
};

