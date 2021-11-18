#include <iostream>
#include <string>
#include <windows.h>
#include "Stats.h"
#include "Resistance.h"

using namespace std;

void Stats::InitStats(int statAtack, int statAgility, int statDurability, int statHP, int statEnergy, Resistance res) /*�������*/
{
	this->res = res; 
	this->atack = statAtack;
	this->agility = statAgility;
	this->durability = statDurability;
	this->hp = statHP;
	this->energy = statEnergy;
}

void Stats::InputStats() /*�������� �������*/
{
	cout << "������� ���������� �����" << endl;
	cin >> this->atack;
	cout << "������� ���������� ��������" << endl;
	cin >> this->agility;
	cout << "������� ���������� ���������" << endl;
	cin >> this->durability;
	cout << "������� ���������� ����� ��������" << endl;
	cin >> this->hp;
	cout << "������� ���������� ����� �������" << endl;
	cin >> this->energy;
	this->res.InputResistance();
}

void Stats::PrintStats() /*����� ����������*/
{
	cout << endl << "��������������:" << endl;
	cout << "����� - ";
	cout << this->atack << endl;
	cout << "�������� - ";
	cout << this->agility << endl;
	cout << "��������� - ";
	cout << this->durability << endl;
	cout << "�������� - ";
	cout << this->hp << endl;
	cout << "������� - ";
	cout << this->energy << endl;
	this->res.PrintResistance();
}