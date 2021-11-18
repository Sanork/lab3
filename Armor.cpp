#include <iostream>
#include <string>
#include <windows.h>
#include "Resistance.h"
#include "Weapon.h"
#include "Armor.h"

using namespace std;

void Armor::InitArmor(string armorMaterial, int armorWeight, string armorClass, int armorDefence) /*������� �������� �����*/
{
	this->material = armorMaterial;
	this->weight = armorWeight;
	this->w_class = armorClass;
	this->defense = armorDefence;
}

void Armor::InputArmor() /*������� �������� ����� ������� � �������*/
{
	cout << "������� �������� �����" << endl;
	cin >> this->material;
	cout << "������� ��� �����" << endl;
	cin >> this->weight;
	cout << "������� ����� �����" << endl;
	cin >> this->w_class;
	cout << "������� ���������� ������ �����" << endl;
	cin >> this->defense;
}

void Armor::PrintArmor() /*������� ������ ���������� � �����*/
{
	cout << endl << "�����: " << endl;
	cout << "�������� ����� - ";
	cout << this->material << endl;
	cout << "��� ����� - ";
	cout << this->weight << endl;
	cout << "����� ����� - ";
	cout << this->w_class << endl;
	cout << "���������� ������ ����� - ";
	cout << this->defense << endl;
}