#pragma once
#include "player.h"
#include <iostream>
using namespace std;

class Archer : public Player {
public:
    Archer(string nickname);
    void attack() override;
};