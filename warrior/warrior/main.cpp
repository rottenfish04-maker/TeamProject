#include <iostream>
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
using namespace std;

int main() {
    Player* player = nullptr;

    int choice;
    cout << "직업 선택 (1.전사 / 2.마법사 / 3.도적 / 4.궁수): ";
    cin >> choice;

    switch (choice) {
    case 1:
        player = new Warrior("전사");
        break;
    case 2:
        player = new Magician("마법사");
        break;
    case 3:
        player = new Thief("도적");
        break;
    case 4:
        player = new Archer("궁수");
        break;
    default:
        cout << "잘못된 입력" << endl;
        return 0;
    }

    player->attack();

    delete player;
    return 0;
}