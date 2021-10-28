#include <iostream>
#include <string>
#include <windows.h>
#include "Stats.h"

using namespace std;

Stats Stats::stat_1(int a, int b, int c, int d, int e, int a1, int b1, int c1) /*Содание*/
{
	Stats s;
	s.res = res_1(a1, b1, c1);
	s.atack = a;
	s.agility = b;
	s.durability = c;
	s.hp = d;
	s.energy = e;
	return s;
}

Stats Stats::SetStats() /*Создание вручную*/
{
	Stats s = {};
	cout << "Введите показатель атаки" << endl;
	cin >> s.atack;
	cout << "Введите показатель ловкости" << endl;
	cin >> s.agility;
	cout << "Введите показатель стойкости" << endl;
	cin >> s.durability;
	cout << "Введите количество очков здоровья" << endl;
	cin >> s.hp;
	cout << "Введите количество очков энергии" << endl;
	cin >> s.energy;
	s.res = SetRes();
	return s;
}

void Stats::GetStats(Stats s) /*Вывод информации*/
{
	cout << endl << "Характеристики:" << endl;
	cout << "Атака - ";
	cout << s.atack << endl;
	cout << "Ловкость - ";
	cout << s.agility << endl;
	cout << "Стойкость - ";
	cout << s.durability << endl;
	cout << "Здоровье - ";
	cout << s.hp << endl;
	cout << "Энергия - ";
	cout << s.energy << endl;
	GetRes(s.res);
}