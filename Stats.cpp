#include <iostream>
#include <string>
#include <windows.h>
#include "Stats.h"

using namespace std;

Stats Stats::stat_1(int a, int b, int c, int d, int e, int a1, int b1, int c1) /*�������*/
{
	Stats s;
	s.res = res_1(a1, b1, c1);
	s.atack = a;
	s.agility = b;
	s.durability = c;
	s.hp = d;
	s.energy = e;
	return s;
}

Stats Stats::SetStats() /*�������� �������*/
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
	s.res = SetRes();
	return s;
}

void Stats::GetStats(Stats s) /*����� ����������*/
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
	GetRes(s.res);
}