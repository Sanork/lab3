#pragma once
#include <string>
#include <windows.h>
#include "Armor.h"
#include "Weapon.h"
#include "Stats.h"

using namespace std;

class Character
{
private:
	string name; /*Имя*/
	int lvl; /*Уровень*/
	string race; /*Раса*/
	
public:
    Armor arm; /*Класс брони*/
	Weapon weap; /*Класс оружия*/
    Stats stat; /*Класс характеристик*/
	void InitCharacter(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res); /*Создание персонажа*/
	void InputCharacter(); /*Создание персонажа вручную с консоли*/
	void PrintCharacter(); /*Вывод информации о персонаже*/
};

