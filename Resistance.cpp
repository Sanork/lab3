#include <iostream>
#include <string>
#include <windows.h>
#include "Resistance.h"

using namespace std;

Resistance Resistance::res_1(int a, int b, int c)   /*Создание*/
{
	Resistance r;
	r.poison_res = a;
	r.fire_res = b;
	r.frost_res = c;
	return r;
}

Resistance Resistance::SetRes()  /*Создание вручную*/
{
	Resistance a = {};
	cout << "Введите сопротивление яду" << endl;
	cin >> a.poison_res;
	cout << "Введите сопротивление огню" << endl;
	cin >> a.fire_res;
	cout << "Введите сопротивление холоду" << endl;
	cin >> a.frost_res;
	return a;
}

void Resistance::GetRes(Resistance b)  /*Вывод информации*/
{
	cout << "Сопротивление яду - ";
	cout << b.poison_res << "%" << endl;
	cout << "Сопротивление огню - ";
	cout << b.fire_res << "%" << endl;
	cout << "Сопротивление холоду - ";
	cout << b.frost_res << "%" << endl;
}