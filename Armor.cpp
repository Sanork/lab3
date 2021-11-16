#include <iostream>
#include <string>
#include <windows.h>
#include "Resistance.h"
#include "Weapon.h"
#include "Armor.h"

using namespace std;

Armor Armor::InitArmor(string armorMaterial, int armorWeight, string armorClass, int armorDefence) /*������� �������� �����*/
{
	Armor ar = {};
	ar.material = armorMaterial;
	ar.weight = armorWeight;
	ar.w_class = armorClass;
	ar.defense = armorDefence;
	return ar;
}

Armor Armor::InputArmor() /*������� �������� ����� ������� � �������*/
{
	//setlocale(LC_ALL, "Russian");
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

void Armor::PrintArmor(Armor ar) /*������� ������ ���������� � �����*/
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

Armor Armor::BreakArmor(Armor ar)  /*������� ������� �����*/
{
	ar.defense = ar.defense / 10;
	return (ar);
}
