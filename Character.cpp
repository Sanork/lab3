#include <iostream>
#include <string>
#include <windows.h>
#include "Character.h"
#include "Weapon.h"
#include "Armor.h"

using namespace std;

Character Character::char_1(string a, int b, string c, string a1, int b1, string c1, int d1, string a2, int b2, int c2, int a3, int b3, int c3, int d3, int e3, int a31, int b31, int c31) /*�������� ���������*/
{
	Character ch;
	ch.name = a;
	ch.lvl = b;
	ch.race = c;
	ch.arm = Armor::arm_1(a1, b1, c1, d1);
	ch.weap = Weapon::weap_1(a2, b2, c2);
	ch.stat = Stats::stat_1(a3, b3, c3, d3, e3, a31, b31, c31);
	return ch;
}

Character Character::SetChar() /*�������� ��������� ������� � �������*/
{
	Character ch = {};
	cout << "������� ��� ���������" << endl;
	cin >> name;
	cout << "������� ������� ���������" << endl;
	cin >> lvl;
	cout << "������� ���� ���������" << endl;
	cin >> race;
	ch.arm = Armor::SetArm();
	weap = SetWeap();
	stat = SetStats();
	return ch;
}

void Character::GetChar(Character b) /*����� ���������� � ���������*/
{
	cout << "��������: ";
	cout << name << endl;
	cout << "������� - ";
	cout << lvl << endl;
	cout << "���� - ";
	cout << race << endl;
	Armor::GetArm();
	GetWeap();
	GetStats();
}
