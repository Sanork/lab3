#pragma once
//#include "Character.h"
#include <string>
#include <windows.h>
#include "Resistance.h"

using namespace std;

class Stats //:
    //protected 
	//Character
{
private:
	int atack; /*�����*/
	int agility; /*��������*/
	int durability; /*���������*/
	int hp; /*���� ��������*/
	int energy; /*���� �������*/
	Resistance res; /*��������� �������������*/
public:
	Stats InitStats(int statAtack, int statAgility, int statDurability, int statHP, int statEnergy, Resistance res); /*��������*/
	Stats InputStats(Resistance r); /*�������� �������*/
	void PrintStats(Stats s, Resistance r); /*����� ����������*/
};

