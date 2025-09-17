#pragma once
#include <string>
#include "Item.cpp"
using namespace std;

class Player
{
    string man;
    int health;
    int agility;
    int strength;

    Item helm;
    Item armor;
    Item weapon;
    Item boots;
    Item shield;

public:

    /*_hit = helm.defence+
             armor.defence+
             weapon.defence +
             shield.defence;
    if(defence < damage)
    health -= (damage - defence)*/

    int Hit(int damage);
    int ViewRadius() const;
    Point GetPosition

};