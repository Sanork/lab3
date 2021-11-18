#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Weapon
{
private:
	string type;   /*��� ������*/
	int weight;    /*��� ������*/
	int damage;    /*���� ������*/
public:
	void InitWeapon(string weaponType, int weaponWeight, int weaponDamage);  /*������� �������� ������*/
	void InputWeapon();  /*������� �������� ������ ������� � �������*/
	void PrintWeapon(); /*������� ������ ���������� �� ������*/
};

