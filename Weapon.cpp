#include "Weapon.h"
#include <string>
#include <windows.h>
#include <iostream>

using namespace std;

Weapon Weapon::InitWeapon(string weaponType, int weaponWeight, int weaponDamage) /*������� �������� ������*/
{
	Weapon w;
	w.type = weaponType;
	w.weight = weaponWeight;
	w.damage = weaponDamage;
	return w;
}

Weapon Weapon::InputWeapon()   /*������� �������� ������ ������� � �������*/
{
	Weapon w = {};
	cout << "������� ��� ������" << endl;
	cin >> w.type;
	cout << "������� ��� ������" << endl;
	cin >> w.weight;
	cout << "������� ���� ������" << endl;
	cin >> w.damage;
	return w;
}

void Weapon::PrintWeapon(Weapon w)  /*������� ������ ���������� �� ������*/
{
	cout << endl << "������: " << endl;
	cout << "��� ������ - ";
	cout << w.type << endl;
	cout << "��� ������ - ";
	cout << w.weight << endl;
	cout << "���� ������ - ";
	cout << w.damage << endl;
}

Weapon Weapon::BreakWeapon(Weapon w)   /*������� ������� ������*/
{
	w.damage = 0;
	//w.damage = w.damage / 10;
	return (w);
}