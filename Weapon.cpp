#include "Weapon.h"
#include <string>
#include <windows.h>
#include <iostream>

using namespace std;

void Weapon::InitWeapon(string weaponType, int weaponWeight, int weaponDamage) /*Функция создания оружия*/
{
	this->type = weaponType;
	this->weight = weaponWeight;
	this->damage = weaponDamage;
}

void Weapon::InputWeapon()   /*Функция создания оружия вручную с консоли*/
{
	cout << "Введите тип оружия" << endl;
	cin >> this->type;
	cout << "Введите вес оружия" << endl;
	cin >> this->weight;
	cout << "Введите урон оружия" << endl;
	cin >> this->damage;
}

void Weapon::PrintWeapon()  /*Функция вывода информации об орижии*/
{
	cout << endl << "Оружие: " << endl;
	cout << "Тип оружия - ";
	cout << this->type << endl;
	cout << "Вес оружия - ";
	cout << this->weight << endl;
	cout << "Урон оружия - ";
	cout << this->damage << endl;
}
