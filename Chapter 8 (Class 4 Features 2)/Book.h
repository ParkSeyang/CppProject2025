#pragma once
#include "Common.h"

// 책.
// Spell book, Story Book, Quest Book

// 모든 책들이 해야 하는 기능?
// 읽을 수 있는가?, 읽는다.

// 상속의 3가지 방법
// pubilc, protected, private
//
// 1. public 상속을 하면됩니다.
// 2. protected, private 는 무엇인가?
// 3. private? public? protected? 정보은닉

class BookMark
{
	int page;
public:
	void ShowPage();
};

// 문제의 여지가 있는 코드입니다.
// 책은 반드시 BookMark를 가지고 있는 형태입니다.
// 모든 코드를 상속시켜버리면 추가를 안해도 되는 코드가 추가된다.

// Is-A 관계 Has-A관계
// (B) IS-A : B는 A이다.
// (B) Has-A: B는 A를 갖고 있다.
class Book    // 책은 책갈피 이다. 책은 책갈피를 갖고 있다.
{
private:
	BookMark* bookMark; // <- BookMark * bookMark = NULL;
public:
	void Read();

};

class SpellBook : public Book // SpellBook은 Book입니다.
{

};

class StoryBook : public Book
{

};

class QuestBook : public Book
{

};
