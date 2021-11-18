#include <iostream>
#include <string>
#include <windows.h>
#include "Resistance.h"

using namespace std;

void Resistance::InitResistance(int resistancePoison, int resistanceFire, int resistanceFrost)   /*Создание*/
{
	this->poison_res = resistancePoison;
	this->fire_res = resistancePoison;
	this->frost_res = resistanceFrost;
}

void Resistance::InputResistance()   /*Создание вручную*/
{
	cout << "Введите сопротивление яду" << endl;
	cin >> this->poison_res;
	cout << "Введите сопротивление огню" << endl;
	cin >> this->fire_res;
	cout << "Введите сопротивление холоду" << endl;
	cin >> this->frost_res;
}

void Resistance::PrintResistance()  /*Вывод информации*/
{
	cout << "Сопротивление яду - ";
	cout << this->poison_res << "%" << endl;
	cout << "Сопротивление огню - ";
	cout << this->fire_res << "%" << endl;
	cout << "Сопротивление холоду - ";
	cout << this->frost_res << "%" << endl;
}