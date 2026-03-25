#pragma once
#include "player.h"
#include <iostream>
using namespace std;

class Magician : public Player {
public:
    Magician(string nickname);
    void attack() override;
};