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
	Weapon weap_1(string a, int b, int c);  /*������� �������� ������*/
	Weapon SetWeap();  /*������� �������� ������ ������� � �������*/
	void GetWeap(); /*������� ������ ���������� �� ������*/
	Weapon BreakWeap(Weapon w);  /*������� ������� ������*/
};

