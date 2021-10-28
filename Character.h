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
	string name; /*Имя*/
	int lvl; /*Уровень*/
	string race; /*Раса*/
	//armor arm; /*Структура брони*/
	//weapon weap; /*Структура оружия*/
	//stats stat; /*Структура характеристик*/
public:
	void char_1(string a, int b, string c, string a1, int b1, string c1, int d1, string a2, int b2, int c2, int a3, int b3, int c3, int d3, int e3, int a31, int b31, int c31); /*Создание персонажа*/
	void SetChar(); /*Создание персонажа вручную с консоли*/
	void GetChar(Character b); /*Вывод информации о персонаже*/
};

