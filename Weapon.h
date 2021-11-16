#pragma once
#include "Character.h"

class Weapon :
    public Character
{
private:
	string type;   /*Тип оружия*/
	int weight;    /*Вес оружия*/
	int damage;    /*Урон оружия*/
public:
	Weapon InitWeapon(string weaponType, int weaponWeight, int weaponDamage);  /*Функция создания оружия*/
	Weapon InputWeapon();  /*Функция создания оружия вручную с консоли*/
	void PrintWeapon(Weapon w); /*Функция вывода информации об оружии*/
	Weapon BreakWeapon(Weapon w);  /*Функция поломки оружия*/
};

