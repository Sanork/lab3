#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Weapon
{
private:
	string type;   /*Тип оружия*/
	int weight;    /*Вес оружия*/
	int damage;    /*Урон оружия*/
public:
	void InitWeapon(string weaponType, int weaponWeight, int weaponDamage);  /*Функция создания оружия*/
	void InputWeapon();  /*Функция создания оружия вручную с консоли*/
	void PrintWeapon(); /*Функция вывода информации об оружии*/
};

