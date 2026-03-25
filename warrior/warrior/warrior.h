#pragma once
#include "player.h"

class Warrior : public Player {  // Player 클래스를 상속
public:
    Warrior(string nickname);
    void attack() override;  // 부모 클래스의 함수를 재정의함을 명시
};