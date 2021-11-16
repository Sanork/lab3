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
	string name; /*���*/
	int lvl; /*�������*/
	string race; /*����*/
	Armor arm; /*��������� �����*/
	Weapon weap; /*��������� ������*/
    Stats stat; /*��������� �������������*/
public:
    
	Character InitCharacter(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res); /*�������� ���������*/
	Character InputCharacter(Armor a, Weapon w, Stats s, Resistance r); /*�������� ��������� ������� � �������*/
	void PrintCharacter(Character ch, Armor a, Weapon w, Stats s, Resistance r); /*����� ���������� � ���������*/
	Character Refresh(Character ch, Armor a, Weapon w);
};

