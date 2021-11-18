#include <iostream>
#include <string>
#include <windows.h>
#include "Character.h"
#include "Weapon.h"
#include "Armor.h"
#include "Resistance.h"

using namespace std;

void Character::InitCharacter(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res) /*Создание персонажа*/
{
	this->name = characterName;
	this->lvl = characterLVL;
	this->race = characterRace;
	this->arm = arm;
	this->weap = weap;
	this->stat = st;
}

void Character::InputCharacter() /*Создание персонажа вручную с консоли*/
{
	cout << "Введите имя персонажа" << endl;
	cin >> this->name;
	cout << "Введите уровень персонажа" << endl;
	cin >> this->lvl;
	cout << "Введите расу персонажа" << endl;
	cin >> this->race;
	this->arm.InputArmor();
	this->weap.InputWeapon();
	this->stat.InputStats();
}

void Character::PrintCharacter() /*Вывод информации о персонаже*/
{
	cout << "Персонаж: ";
	cout << this->name << endl;
	cout << "Уровень - ";
	cout << this->lvl << endl;
	cout << "Раса - ";
	cout << this->race << endl;
	this->arm.PrintArmor();
	this->weap.PrintWeapon();
	this->stat.PrintStats();
}

