#include "Weapon.h"

int Weapon::DoUpgrade()
{
    return lv * (baseATK + weight);
}

void Weapon::ShowInfo()
{
    cout << name << " 최종 공격력 : " << DoUpgrade() << endl;
}

void Weapon::Attack()
{
    cout << DoUpgrade() << " 만큼 공격을 합니다." << endl;
}

void Weapon::Upgrade()
{
    DoUpgrade();
}

void Spear::Attack()
{
    Weapon::Attack();
    cout << "창으로 찌르기 공격을합니다." << endl;
}

void Spear::Upgrade()
{
    // 창마다 고유의 공격력 만큼 추가로 공격력이 오릅니다.
   FinalATK = DoUpgrade() + specialATK;

   cout << FinalATK << "창이 업그레이드 되어서 공격력이 상승했습니다." << endl;
}

void Sword::Attack()
{
    Weapon::Attack();
    cout << "검으로 베기공격을 합니다." << endl;
}

void Sword::Upgrade()
{
    // 10의 공격력이 추가로 상승합니다.
    FinalATK = DoUpgrade() + 10;
    cout << FinalATK << "검이 업그레이드 되어서 공격력이 상승했습니다." << endl;
}

void Bow::Attack()
{
    Weapon::Attack();
    cout << "활로 화살공격을 합니다." << endl;
}

void Bow::Upgrade()
{
    FinalATK = DoUpgrade() + 12;
    cout << FinalATK << "활이 업그레이드 되어서 공격력이 상승했습니다." << endl;
}
