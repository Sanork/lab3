#pragma once
#include <string>
#include <windows.h>
#include "Armor.h"
#include "Weapon.h"
#include "Stats.h"
//#include "Resistance.h"

using namespace std;

class Character
{
private:
	string name; /*Имя*/
	int lvl; /*Уровень*/
	string race; /*Раса*/
	Armor arm; /*Структура брони*/
	Weapon weap; /*Структура оружия*/
    Stats stat; /*Структура характеристик*/
public:
    
	Character InitCharacter(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res); /*Создание персонажа*/
	Character InputCharacter(Armor a, Weapon w, Stats s, Resistance r); /*Создание персонажа вручную с консоли*/
	void PrintCharacter(Character ch, Armor a, Weapon w, Stats s, Resistance r); /*Вывод информации о персонаже*/
	Character Refresh(Character ch, Armor a, Weapon w);
};

