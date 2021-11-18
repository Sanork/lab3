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
	string name; /*���*/
	int lvl; /*�������*/
	string race; /*����*/
	
public:
    Armor arm; /*����� �����*/
	Weapon weap; /*����� ������*/
    Stats stat; /*����� �������������*/
	void InitCharacter(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res); /*�������� ���������*/
	void InputCharacter(); /*�������� ��������� ������� � �������*/
	void PrintCharacter(); /*����� ���������� � ���������*/
};

