#pragma once
#include "Character.h"

class Weapon :
    public Character
{
private:
	string type;   /*��� ������*/
	int weight;    /*��� ������*/
	int damage;    /*���� ������*/
public:
	Weapon InitWeapon(string weaponType, int weaponWeight, int weaponDamage);  /*������� �������� ������*/
	Weapon InputWeapon();  /*������� �������� ������ ������� � �������*/
	void PrintWeapon(Weapon w); /*������� ������ ���������� �� ������*/
	Weapon BreakWeapon(Weapon w);  /*������� ������� ������*/
};

