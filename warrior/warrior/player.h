#pragma once
#include <string>
using namespace std;

class Player {
protected:
    string nickname;
    string job_name;
    int hp;

public:
    Player(string nickname) {
        this->nickname = nickname;
    }

    virtual void attack() = 0;  // 순수 가상 함수 (무조건 자식이 구현해야 함)
};
