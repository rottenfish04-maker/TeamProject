#pragma once
#include "player.h"
#include <iostream>
using namespace std;

class Thief : public Player {
public:
    Thief(string nickname);
    void attack() override;
};