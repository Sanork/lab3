#include "Weapon.h"
#include <string>
#include <windows.h>
#include <iostream>

using namespace std;

Weapon Weapon::weap_1(string a, int b, int c) /*������� �������� ������*/
{
	Weapon w;
	w.type = a;
	w.weight = b;
	w.damage = c;
	return w;
}

Weapon Weapon::SetWeap()   /*������� �������� ������ ������� � �������*/
{
	Weapon w = {};
	cout << "������� ��� ������" << endl;
	cin >> type;
	cout << "������� ��� ������" << endl;
	cin >> weight;
	cout << "������� ���� ������" << endl;
	cin >> damage;
	return w;
}

void Weapon::GetWeap()   /*������� ������ ���������� �� ������*/
{
	cout << endl << "������: " << endl;
	cout << "��� ������ - ";
	cout << type << endl;
	cout << "��� ������ - ";
	cout << weight << endl;
	cout << "���� ������ - ";
	cout << damage << endl;
}

Weapon Weapon::BreakWeap(Weapon w)   /*������� ������� ������*/
{
	damage = damage / 10;
	return (w);
}