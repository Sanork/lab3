#pragma once

#include <string>
#include <windows.h>
//#include "Armor.h"
//#include "Weapon.h"
//#include "Stats.h"

using namespace std;

class Character
{
private:
	string name; /*���*/
	int lvl; /*�������*/
	string race; /*����*/
	//armor arm; /*��������� �����*/
	//weapon weap; /*��������� ������*/
	//stats stat; /*��������� �������������*/
public:
	void char_1(string a, int b, string c, string a1, int b1, string c1, int d1, string a2, int b2, int c2, int a3, int b3, int c3, int d3, int e3, int a31, int b31, int c31); /*�������� ���������*/
	void SetChar(); /*�������� ��������� ������� � �������*/
	void GetChar(Character b); /*����� ���������� � ���������*/
};

