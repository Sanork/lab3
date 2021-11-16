#include "Weapon.h"
#include <string>
#include <windows.h>
#include <iostream>

using namespace std;

Weapon Weapon::InitWeapon(string weaponType, int weaponWeight, int weaponDamage) /*Функция создания оружия*/
{
	Weapon w;
	w.type = weaponType;
	w.weight = weaponWeight;
	w.damage = weaponDamage;
	return w;
}

Weapon Weapon::InputWeapon()   /*Функция создания оружия вручную с консоли*/
{
	Weapon w = {};
	cout << "Введите тип оружия" << endl;
	cin >> w.type;
	cout << "Введите вес оружия" << endl;
	cin >> w.weight;
	cout << "Введите урон оружия" << endl;
	cin >> w.damage;
	return w;
}

void Weapon::PrintWeapon(Weapon w)  /*Функция вывода информации об орижии*/
{
	cout << endl << "Оружие: " << endl;
	cout << "Тип оружия - ";
	cout << w.type << endl;
	cout << "Вес оружия - ";
	cout << w.weight << endl;
	cout << "Урон оружия - ";
	cout << w.damage << endl;
}

Weapon Weapon::BreakWeapon(Weapon w)   /*Функция поломки оружия*/
{
	w.damage = 0;
	//w.damage = w.damage / 10;
	return (w);
}