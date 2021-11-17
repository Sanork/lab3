#include <iostream>
#include <string>
#include <windows.h>
#include "Character.h"
#include "Weapon.h"
#include "Armor.h"
#include "Resistance.h"

using namespace std;

Character Character::InitCharacter(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res) /*Создание персонажа*/
{
	Character ch;
	ch.name = characterName;
	ch.lvl = characterLVL;
	ch.race = characterRace;
	ch.arm = arm;
	ch.weap = weap;
	ch.stat = st;
	return ch;
}

Character Character::InputCharacter(Armor a, Weapon w, Stats s, Resistance r) /*Создание персонажа вручную с консоли*/
{
	Character ch = {};
	cout << "Введите имя персонажа" << endl;
	cin >> ch.name;
	cout << "Введите уровень персонажа" << endl;
	cin >> ch.lvl;
	cout << "Введите расу персонажа" << endl;
	cin >> ch.race;
	ch.arm = a.InputArmor();
	ch.weap = w.InputWeapon();
	ch.stat = s.InputStats(r);
	return ch;
}

void Character::PrintCharacter(Character ch, Armor a, Weapon w, Stats s, Resistance r) /*Вывод информации о персонаже*/
{
	cout << "Персонаж: ";
	cout << ch.name << endl;
	cout << "Уровень - ";
	cout << ch.lvl << endl;
	cout << "Раса - ";
	cout << ch.race << endl;
	a.PrintArmor(ch.arm);
	w.PrintWeapon(ch.weap);
	s.PrintStats(ch.stat, r);
}

Character Character::Refresh(Character ch, Armor a, Weapon w)
{

	ch.arm = a;
	ch.weap = w;
	return ch;
}

Character Character::BreakCharacterWeapon(Character ch)
{
	ch.weap = ch.weap.BreakWeapon(ch.weap);
	return ch;
}

Character Character::BreakCharacterArmor(Character ch)
{
	ch.arm = ch.arm.BreakArmor(ch.arm);
	return ch;
}
