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
	Weapon weap_1(string a, int b, int c);  /*Функция создания оружия*/
	Weapon SetWeap();  /*Функция создания оружия вручную с консоли*/
	void GetWeap(); /*Функция вывода информации об оружии*/
	Weapon BreakWeap(Weapon w);  /*Функция поломки оружия*/
};

