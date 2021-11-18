#include <iostream>
#include <string>
#include <windows.h>
#include "Resistance.h"

using namespace std;

void Resistance::InitResistance(int resistancePoison, int resistanceFire, int resistanceFrost)   /*��������*/
{
	this->poison_res = resistancePoison;
	this->fire_res = resistancePoison;
	this->frost_res = resistanceFrost;
}

void Resistance::InputResistance()   /*�������� �������*/
{
	cout << "������� ������������� ���" << endl;
	cin >> this->poison_res;
	cout << "������� ������������� ����" << endl;
	cin >> this->fire_res;
	cout << "������� ������������� ������" << endl;
	cin >> this->frost_res;
}

void Resistance::PrintResistance()  /*����� ����������*/
{
	cout << "������������� ��� - ";
	cout << this->poison_res << "%" << endl;
	cout << "������������� ���� - ";
	cout << this->fire_res << "%" << endl;
	cout << "������������� ������ - ";
	cout << this->frost_res << "%" << endl;
}