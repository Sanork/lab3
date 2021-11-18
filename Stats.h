#pragma once
#include <string>
#include <windows.h>
#include "Resistance.h"

using namespace std;

class Stats
{
private:
	int atack; /*�����*/
	int agility; /*��������*/
	int durability; /*���������*/
	int hp; /*���� ��������*/
	int energy; /*���� �������*/
public:
    Resistance res; /*����� �������������*/
	void InitStats(int statAtack, int statAgility, int statDurability, int statHP, int statEnergy, Resistance res); /*��������*/
	void InputStats(); /*�������� �������*/
	void PrintStats(); /*����� ����������*/
};

