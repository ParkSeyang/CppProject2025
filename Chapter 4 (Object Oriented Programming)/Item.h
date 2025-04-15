#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include "Game.h"

enum ItemType
{
    ARMOR,
    WEAPON,
    USEBLE
};

struct Item
{
    std::string name;
    int price;
    int itemCount;
    ItemType type;
    // 생성자 - 구조체의 이름과 동일해야 한다. + ()
    // 멤버 이니셜라이즈 (Member initialize)
    Item(string name, int price, int itemCount, ItemType type)
        :name(name), price(price), itemCount(itemCount), type(type)
    {}

    void ShowItemInfo();  // itemCount 추가할 것
    string ReturnByTypeName();
   
};

struct Player
{
    // 확인문제 
    // Player 의 좌표 데이터를 정의
    int Playerx, Playery;
    string Playername = "ZeroDarkMos";
    string PlayerType = "Warrior";
    // 좌표를 기능적으로 함수로 구현하세요

    void ShowInfo();
    void GOTOXY(int x, int y);
   

};