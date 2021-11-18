#include <iostream>
#include <string>
#include <windows.h>
#include "Stats.h"
#include "Resistance.h"

using namespace std;

void Stats::InitStats(int statAtack, int statAgility, int statDurability, int statHP, int statEnergy, Resistance res) /*Содание*/
{
	this->res = res; 
	this->atack = statAtack;
	this->agility = statAgility;
	this->durability = statDurability;
	this->hp = statHP;
	this->energy = statEnergy;
}

void Stats::InputStats() /*Создание вручную*/
{
	cout << "Введите показатель атаки" << endl;
	cin >> this->atack;
	cout << "Введите показатель ловкости" << endl;
	cin >> this->agility;
	cout << "Введите показатель стойкости" << endl;
	cin >> this->durability;
	cout << "Введите количество очков здоровья" << endl;
	cin >> this->hp;
	cout << "Введите количество очков энергии" << endl;
	cin >> this->energy;
	this->res.InputResistance();
}

void Stats::PrintStats() /*Вывод информации*/
{
	cout << endl << "Характеристики:" << endl;
	cout << "Атака - ";
	cout << this->atack << endl;
	cout << "Ловкость - ";
	cout << this->agility << endl;
	cout << "Стойкость - ";
	cout << this->durability << endl;
	cout << "Здоровье - ";
	cout << this->hp << endl;
	cout << "Энергия - ";
	cout << this->energy << endl;
	this->res.PrintResistance();
}