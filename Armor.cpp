#include <iostream>
#include <string>
#include <windows.h>
//#include "Resistance.h"
#include "Weapon.h"
#include "Armor.h"

using namespace std;

Armor Armor::arm_1(string a, int b, string c, int d) /*������� �������� �����*/
{
	Armor ar = {};
	ar.material = a;
	ar.weight = b;
	ar.w_class = c;
	ar.defense = d;
	return ar;
}

Armor Armor::SetArm() /*������� �������� ����� ������� � �������*/
{
	Armor ar = {};
	cout << "������� �������� �����" << endl;
	cin >> ar.material;
	cout << "������� ��� �����" << endl;
	cin >> ar.weight;
	cout << "������� ����� �����" << endl;
	cin >> ar.w_class;
	cout << "������� ���������� ������ �����" << endl;
	cin >> ar.defense;
	return ar;
}

void Armor::GetArm(Armor ar) /*������� ������ ���������� � �����*/
{
	cout << endl << "�����: " << endl;
	cout << "�������� ����� - ";
	cout << ar.material << endl;
	cout << "��� ����� - ";
	cout << ar.weight << endl;
	cout << "����� ����� - ";
	cout << ar.w_class << endl;
	cout << "���������� ������ ����� - ";
	cout << ar.defense << endl;
}

Armor Armor::BreakArm(Armor ar)  /*������� ������� �����*/
{
	ar.defense = ar.defense / 10;
	return (ar);
}
