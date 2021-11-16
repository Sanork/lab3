#pragma once
//#include "Stats.h"
#include <string>
#include <windows.h>

using namespace std;

class Resistance //: //Stats
    //public Stats //!
{
private:
	int poison_res;  /*Сопротивление яду*/
	int fire_res;    /*Сопротивление огню*/
	int frost_res;   /*Сопротивление холоду*/
public:
	Resistance InitResistance(int resistancePoison, int resistanceFire, int resistanceFrost);   /*Создание*/
	Resistance InputResistance();   /*Создание вручную*/
	void PrintResistance(Resistance r);  /*Получение информации*/
};

