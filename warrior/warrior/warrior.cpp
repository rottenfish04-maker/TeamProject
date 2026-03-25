#include "warrior.h"

#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname)  // 부모 클래스의 생성자 호출
{
    job_name = "전사";
    cout << "* 전사로 전직하였습니다." << endl;

    hp = 80;  // 전사의 HP는 80으로 지정
}

void Warrior::attack() {
    cout << "검을 휘두른다!" << endl;  // 전사의 공격 동작 출력
}