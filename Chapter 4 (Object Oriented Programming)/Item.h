#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Game.h"

enum ItemType
{
    ARMOR,
    WEAPON,
    USEABLE
};

struct Item
{
    std::string name;
    int price;
    int itemCount;
    ItemType type;
    // 생성자 - 구조체의 이름과 동일해야 한다. + ()
    // 멤버 이니셜라이즈 (Member initialize) 
    // 멤버 이니셜라이즈의 장점 : 외부에서 따로생성하지않고 바로불러오기때문에 동작이 속도가 조금 더 빠르다.
    Item(string name, int price, int itemCount, ItemType type)
        : name(name), price(price), itemCount(itemCount), type(type)
    {}

    void ShowItemInfo();  // itemCount 추가할 것
    string ReturnByTypeName();
   
};
