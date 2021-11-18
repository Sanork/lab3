#pragma once
#include <string>
#include <windows.h>
#include "Resistance.h"

using namespace std;

class Stats
{
private:
	int atack; /*Атака*/
	int agility; /*Ловкость*/
	int durability; /*Стойкость*/
	int hp; /*Очки здоровья*/
	int energy; /*Очки энергии*/
public:
    Resistance res; /*Класс сопротивлений*/
	void InitStats(int statAtack, int statAgility, int statDurability, int statHP, int statEnergy, Resistance res); /*Создание*/
	void InputStats(); /*Создание вручную*/
	void PrintStats(); /*Вывод информации*/
};

