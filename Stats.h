#pragma once
#include "Character.h"
#include <string>
#include <windows.h>
//#include "Resistance.h"

using namespace std;

class Stats :
    private Character
{
private:
	int atack; /*Атака*/
	int agility; /*Ловкость*/
	int durability; /*Стойкость*/
	int hp; /*Очки здоровья*/
	int energy; /*Очки энергии*/
	//resistance res; /*Структура сопротивлений*/
public:
	Stats stat_1(int a, int b, int c, int d, int e, int a1, int b1, int c1); /*Создание*/
	Stats SetStats(); /*Создание вручную*/
	void GetStats(Stats s); /*Вывод информации*/
};

