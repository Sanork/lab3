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


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������ ���������� ���������" << endl;
	Character exm;
	Armor a;
	Weapon w;
	Stats s;
	Resistance r;
	int q1 = 1;
	a = a.InitArmor("����", 8, "������", 32);
	w = w.InitWeapon("���", 2, 44);
	
	r = r.InitResistance(20, 10, 10);
    s = s.InitStats(15, 72, 21, 1000, 500, r);
	
    exm = exm.InitCharacter("�������", 52, "������ ����", a, w, s, r); /*�������� ��������� ��� �������*/
	while (q1)
	{
        
		exm.PrintCharacter(exm, a, w, s, r);
		int q = 0;
		while (q != 3)
		{

			cout << endl << "�������� ��������:" << endl << "1) ������� �����" << endl << "2) ������� ������" << endl << "3) ������� � ���������" << endl;
			cin >> q;
			while (q != 3 && q != 2 && q != 1)
			{
				cout << "������� ������������ ��������" << endl;
				cin >> q;
			}
			if (q == 1)
			{

				a = a.BreakArmor(a); /*������� �����*/
				system("cls");
				//exm.Refresh(exm, a, w);
				exm.PrintCharacter(exm, a, w, s, r);
			}
			if (q == 2)
			{
				w = w.BreakWeapon(w); /*������� ������*/
				system("cls");
				//exm.Refresh(exm, a, w);
				exm.PrintCharacter(exm, a, w, s, r);
			}
		}
		system("cls");
		int q2 = 1;
		while (q2)
		{
			system("cls");
			int n;
			cout << endl << "�������� ��������:" << endl << "1) ������� �����" << endl << "2) ������� ������" << endl << "3) ������ ��������������" << endl << "4) ������� ���������" << endl;
			cin >> n;

			while (n != 4 && n != 3 && n != 2 && n != 1)
			{
				cout << "������� ������������ ��������" << endl;
				cin >> n;
			}
			if (n == 4)
			{
				Character ch;
				ch = ch.InputCharacter(a,w,s,r); /*�������� ��������� �������*/
				exm = ch;
				break;
			}
			if (n == 1)
			{
				Armor arm;
				arm = arm.InputArmor(); /*�������� ����� �������*/
				system("cls");
				arm.PrintArmor(arm);
			}
			if (n == 2)
			{
				Weapon weap;
				weap = w.InputWeapon(); /*�������� ������ �������*/
				system("cls");
				w.PrintWeapon(weap);
			}
			if (n == 3)
			{
				Resistance res = {};
				Stats stat;
				stat = stat.InputStats(res); /*�������� �������*/
				system("cls");
				stat.PrintStats(stat, res);
			}
			cout << endl << "������� ����� �������, ����� ��������� � ������� ����";
			_getch();
		}
	}
}