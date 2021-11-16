#include <iostream>
#include <string>
#include <windows.h>
#include "Stats.h"
#include "Resistance.h"

using namespace std;

Stats Stats::InitStats(int statAtack, int statAgility, int statDurability, int statHP, int statEnergy, Resistance res) /*Содание*/
{
	Stats s;
	s.res = res; //InitResistance(a1, b1, c1);
	s.atack = statAtack;
	s.agility = statAgility;
	s.durability = statDurability;
	s.hp = statHP;
	s.energy = statEnergy;
	return s;
}

Stats Stats::InputStats(Resistance r) /*Создание вручную*/
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
	s.res = r.InputResistance();
	return s;
}

void Stats::PrintStats(Stats s, Resistance r) /*Вывод информации*/
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
	r.PrintResistance(s.res);
}