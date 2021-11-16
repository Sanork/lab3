#include <iostream>
#include <string>
#include <windows.h>
#include "Stats.h"
#include "Resistance.h"

using namespace std;

Stats Stats::InitStats(int statAtack, int statAgility, int statDurability, int statHP, int statEnergy, Resistance res) /*�������*/
{
	Stats s;
	s.res = res; //InitResistance(a1, b1, c1);
	s.atack = statAtack;
	s.agility = statAgility;
	s.durability = statDurability;
	s.hp = statHP;
	s.energy = statEnergy;
	return s;
}

Stats Stats::InputStats(Resistance r) /*�������� �������*/
{
	Stats s = {};
	cout << "������� ���������� �����" << endl;
	cin >> s.atack;
	cout << "������� ���������� ��������" << endl;
	cin >> s.agility;
	cout << "������� ���������� ���������" << endl;
	cin >> s.durability;
	cout << "������� ���������� ����� ��������" << endl;
	cin >> s.hp;
	cout << "������� ���������� ����� �������" << endl;
	cin >> s.energy;
	s.res = r.InputResistance();
	return s;
}

void Stats::PrintStats(Stats s, Resistance r) /*����� ����������*/
{
	cout << endl << "��������������:" << endl;
	cout << "����� - ";
	cout << s.atack << endl;
	cout << "�������� - ";
	cout << s.agility << endl;
	cout << "��������� - ";
	cout << s.durability << endl;
	cout << "�������� - ";
	cout << s.hp << endl;
	cout << "������� - ";
	cout << s.energy << endl;
	r.PrintResistance(s.res);
}