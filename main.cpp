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
	cout << "Пример созданного персонажа" << endl;

	Character *exm = new Character;                                                               /*Динамический объект*/
	exm->arm.InitArmor("Кожа", 8, "Легкая", 32);
	exm->weap.InitWeapon("Лук", 2, 44);
	exm->stat.InitStats(15, 72, 21, 1000, 500, exm->stat.res);
	exm->stat.res.InitResistance(20, 10, 10);
	exm->InitCharacter("Леголас", 52, "Лесной эльф", exm->arm, exm->weap, exm->stat, exm->stat.res); /*Создание персонажа для примера*/
	exm->PrintCharacter();                                                                           /*Вывод*/
	delete exm;
	int n, i;
	cout << endl << "Введите количество персонажей, которых хотите создать:";
	cin >> n;
	system("cls");
	Character* list = new Character[n];                                                              /*Массив жинамических объектов*/
	for (i = 0; i < n; i++)
	{
		cout << "Заполнение полей персонажа " << i+1 << endl;
		list[i].InputCharacter();                                                                    /*Создание персонажа вручную*/
	}
	system("cls");
	for (i = 0; i < n; i++)
	{
		cout << "№" << i+1 << ":" << endl;
		list[i].PrintCharacter();                                                                     /*Вывод*/
		cout << endl;
	}
	delete[] list;
}