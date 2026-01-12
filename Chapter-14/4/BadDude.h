#pragma once
#include "Gunslinger.h"
#include "PokerPlayer.h"

class BadDude : public Gunslinger, public PokerPlayer
{
public:
    BadDude(const string & fn = "", const string & ln = "", double dt = 0, int n = 0)
        : Person(fn, ln), Gunslinger(fn, ln, dt, n), PokerPlayer(fn,ln) {}
    BadDude(const Person & pn, double dt = 0, int n = 0)
        : Person(pn), Gunslinger(pn, dt, n), PokerPlayer(pn) {}
    BadDude(const Gunslinger & gun)
        : Person(gun), Gunslinger(gun), PokerPlayer(gun) {}
    BadDude(const PokerPlayer & poker, double dt = 0, int n = 0)
        : Person(poker), Gunslinger(poker, dt, n), PokerPlayer(poker) {}
    ~BadDude() {}
    double Gdraw() const;
    PokerPlayer::Card Cdraw() const;
    void Show() const;
    void Set();

protected:
    void Data() const;
    void Get();
};

