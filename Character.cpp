#include <iostream>
#include <string>
#include <windows.h>
#include "Character.h"
#include "Weapon.h"
#include "Armor.h"
#include "Resistance.h"

using namespace std;

Character Character::InitCharacter(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res) /*�������� ���������*/
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

Character Character::InputCharacter(Armor a, Weapon w, Stats s, Resistance r) /*�������� ��������� ������� � �������*/
{
	Character ch = {};
	cout << "������� ��� ���������" << endl;
	cin >> ch.name;
	cout << "������� ������� ���������" << endl;
	cin >> ch.lvl;
	cout << "������� ���� ���������" << endl;
	cin >> ch.race;
	ch.arm = a.InputArmor();
	ch.weap = w.InputWeapon();
	ch.stat = s.InputStats(r);
	return ch;
}

void Character::PrintCharacter(Character ch, Armor a, Weapon w, Stats s, Resistance r) /*����� ���������� � ���������*/
{
	cout << "��������: ";
	cout << ch.name << endl;
	cout << "������� - ";
	cout << ch.lvl << endl;
	cout << "���� - ";
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
