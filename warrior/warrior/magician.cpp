#include "magician.h"

Magician::Magician(string nickname) : Player(nickname) {}

void Magician::attack() {
    cout << "마법 화살을 쏩니다!" << endl;
}