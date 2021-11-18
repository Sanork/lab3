#include <iostream>
#include <conio.h>
#include "Armor.h"
#include "Character.h"
#include "Resistance.h"
#include "Stats.h"
#include "Weapon.h"
#include <string>
#include <stdio.h>
#include <windows.h>
#include <clocale>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	cout << "������ ���������� ���������" << endl;

	Character *exm = new Character;                                                               /*������������ ������*/
	exm->arm.InitArmor("����", 8, "������", 32);
	exm->weap.InitWeapon("���", 2, 44);
	exm->stat.InitStats(15, 72, 21, 1000, 500, exm->stat.res);
	exm->stat.res.InitResistance(20, 10, 10);
	exm->InitCharacter("�������", 52, "������ ����", exm->arm, exm->weap, exm->stat, exm->stat.res); /*�������� ��������� ��� �������*/
	exm->PrintCharacter();                                                                           /*�����*/
	delete exm;
	int n, i;
	cout << endl << "������� ���������� ����������, ������� ������ �������:";
	cin >> n;
	system("cls");
	Character* list = new Character[n];                                                              /*������ ������������ ��������*/
	for (i = 0; i < n; i++)
	{
		cout << "���������� ����� ��������� " << i+1 << endl;
		list[i].InputCharacter();                                                                    /*�������� ��������� �������*/
	}
	system("cls");
	for (i = 0; i < n; i++)
	{
		cout << "�" << i+1 << ":" << endl;
		list[i].PrintCharacter();                                                                     /*�����*/
		cout << endl;
	}
	delete[] list;
}