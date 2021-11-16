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
	cout << "Пример созданного персонажа" << endl;
	Character exm;
	Armor a;
	Weapon w;
	Stats s;
	Resistance r;
	int q1 = 1;
	a = a.InitArmor("Кожа", 8, "Легкая", 32);
	w = w.InitWeapon("Лук", 2, 44);
	
	r = r.InitResistance(20, 10, 10);
    s = s.InitStats(15, 72, 21, 1000, 500, r);
	
    exm = exm.InitCharacter("Леголас", 52, "Лесной эльф", a, w, s, r); /*Создание персонажа для примера*/
	while (q1)
	{
        
		exm.PrintCharacter(exm, a, w, s, r);
		int q = 0;
		while (q != 3)
		{

			cout << endl << "Выберете действие:" << endl << "1) Сломать броню" << endl << "2) Сломать оружие" << endl << "3) Перейти к редактору" << endl;
			cin >> q;
			while (q != 3 && q != 2 && q != 1)
			{
				cout << "Введено некорректное значение" << endl;
				cin >> q;
			}
			if (q == 1)
			{

				a = a.BreakArmor(a); /*Поломка брони*/
				system("cls");
				//exm.Refresh(exm, a, w);
				exm.PrintCharacter(exm, a, w, s, r);
			}
			if (q == 2)
			{
				w = w.BreakWeapon(w); /*Поломка оружия*/
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
			cout << endl << "Выберете действие:" << endl << "1) Создать броню" << endl << "2) Создать оружие" << endl << "3) Задать характеристики" << endl << "4) Создать персонажа" << endl;
			cin >> n;

			while (n != 4 && n != 3 && n != 2 && n != 1)
			{
				cout << "Введено некорректное значение" << endl;
				cin >> n;
			}
			if (n == 4)
			{
				Character ch;
				ch = ch.InputCharacter(a,w,s,r); /*Создание персонажа вручную*/
				exm = ch;
				break;
			}
			if (n == 1)
			{
				Armor arm;
				arm = arm.InputArmor(); /*Создание брони вручную*/
				system("cls");
				arm.PrintArmor(arm);
			}
			if (n == 2)
			{
				Weapon weap;
				weap = w.InputWeapon(); /*Создание оружия вручную*/
				system("cls");
				w.PrintWeapon(weap);
			}
			if (n == 3)
			{
				Resistance res = {};
				Stats stat;
				stat = stat.InputStats(res); /*Создание вручную*/
				system("cls");
				stat.PrintStats(stat, res);
			}
			cout << endl << "Нажмите любую клавишу, чтобы вернуться в главное меню";
			_getch();
		}
	}
}