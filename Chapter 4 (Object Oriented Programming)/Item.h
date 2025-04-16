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
    // 멤버 이니셜라이즈의 장점 : 외부에서 따로생성하지않고 바로불러오기때문에 동작이 속도가 조금 더 빠르다.
    Item(string name, int price, int itemCount, ItemType type)
        :name(name), price(price), itemCount(itemCount), type(type) // <- 이러한 방식을 멤버 이니셜 라이즈라고한다.
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