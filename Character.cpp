#include <iostream>
#include <string>
#include <windows.h>
#include "Character.h"
#include "Weapon.h"
#include "Armor.h"
#include "Resistance.h"

using namespace std;

void Character::InitCharacter(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res) /*�������� ���������*/
{
	this->name = characterName;
	this->lvl = characterLVL;
	this->race = characterRace;
	this->arm = arm;
	this->weap = weap;
	this->stat = st;
}

void Character::InputCharacter() /*�������� ��������� ������� � �������*/
{
	cout << "������� ��� ���������" << endl;
	cin >> this->name;
	cout << "������� ������� ���������" << endl;
	cin >> this->lvl;
	cout << "������� ���� ���������" << endl;
	cin >> this->race;
	this->arm.InputArmor();
	this->weap.InputWeapon();
	this->stat.InputStats();
}

void Character::PrintCharacter() /*����� ���������� � ���������*/
{
	cout << "��������: ";
	cout << this->name << endl;
	cout << "������� - ";
	cout << this->lvl << endl;
	cout << "���� - ";
	cout << this->race << endl;
	this->arm.PrintArmor();
	this->weap.PrintWeapon();
	this->stat.PrintStats();
}

