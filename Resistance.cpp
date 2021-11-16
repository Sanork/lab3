#include <iostream>
#include <string>
#include <windows.h>
#include "Resistance.h"

using namespace std;

Resistance Resistance::InitResistance(int resistancePoison, int resistanceFire, int resistanceFrost)   /*��������*/
{
	Resistance r;
	r.poison_res = resistancePoison;
	r.fire_res = resistancePoison;
	r.frost_res = resistanceFrost;
	return r;
}

Resistance Resistance::InputResistance()   /*�������� �������*/
{
	Resistance r = {};
	cout << "������� ������������� ���" << endl;
	cin >> r.poison_res;
	cout << "������� ������������� ����" << endl;
	cin >> r.fire_res;
	cout << "������� ������������� ������" << endl;
	cin >> r.frost_res;
	return r;
}

void Resistance::PrintResistance(Resistance r)  /*����� ����������*/
{
	cout << "������������� ��� - ";
	cout << r.poison_res << "%" << endl;
	cout << "������������� ���� - ";
	cout << r.fire_res << "%" << endl;
	cout << "������������� ������ - ";
	cout << r.frost_res << "%" << endl;
}