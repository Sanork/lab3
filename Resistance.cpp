#include <iostream>
#include <string>
#include <windows.h>
#include "Resistance.h"

using namespace std;

Resistance Resistance::InitResistance(int resistancePoison, int resistanceFire, int resistanceFrost)   /*Создание*/
{
	Resistance r;
	r.poison_res = resistancePoison;
	r.fire_res = resistancePoison;
	r.frost_res = resistanceFrost;
	return r;
}

Resistance Resistance::InputResistance()   /*Создание вручную*/
{
	Resistance r = {};
	cout << "Введите сопротивление яду" << endl;
	cin >> r.poison_res;
	cout << "Введите сопротивление огню" << endl;
	cin >> r.fire_res;
	cout << "Введите сопротивление холоду" << endl;
	cin >> r.frost_res;
	return r;
}

void Resistance::PrintResistance(Resistance r)  /*Вывод информации*/
{
	cout << "Сопротивление яду - ";
	cout << r.poison_res << "%" << endl;
	cout << "Сопротивление огню - ";
	cout << r.fire_res << "%" << endl;
	cout << "Сопротивление холоду - ";
	cout << r.frost_res << "%" << endl;
}