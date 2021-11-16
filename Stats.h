#pragma once
//#include "Character.h"
#include <string>
#include <windows.h>
#include "Resistance.h"

using namespace std;

class Stats //:
    //protected 
	//Character
{
private:
	int atack; /*Атака*/
	int agility; /*Ловкость*/
	int durability; /*Стойкость*/
	int hp; /*Очки здоровья*/
	int energy; /*Очки энергии*/
	Resistance res; /*Структура сопротивлений*/
public:
	Stats InitStats(int statAtack, int statAgility, int statDurability, int statHP, int statEnergy, Resistance res); /*Создание*/
	Stats InputStats(Resistance r); /*Создание вручную*/
	void PrintStats(Stats s, Resistance r); /*Вывод информации*/
};

