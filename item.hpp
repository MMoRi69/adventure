#pragma once
#include <string>
using namespace std;

class Item
{
    string name;
    int defence;
    int attack;

public:
    int getDefence() const;
    int getAttack() const;
};