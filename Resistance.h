#pragma once
#include "Stats.h"
#include <string>
#include <windows.h>

using namespace std;

class Resistance :
    private Stats
{
private:
	int poison_res;  /*Сопротивление яду*/
	int fire_res;    /*Сопротивление огню*/
	int frost_res;   /*Сопротивление холоду*/
public:
	Resistance res_1(int a, int b, int c);   /*Создание*/
	Resistance SetRes();   /*Создание вручную*/
	void GetRes(Resistance b);  /*Получение информации*/
};

