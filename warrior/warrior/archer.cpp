#include "archer.h"

Archer::Archer(string nickname) : Player(nickname) {}

void Archer::attack() {
    cout << "화살을 발사합니다!" << endl;
}