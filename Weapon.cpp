#include "Weapon.h"
#include <string>
#include <windows.h>
#include <iostream>

using namespace std;

Weapon Weapon::weap_1(string a, int b, int c) /*Функция создания оружия*/
{
	Weapon w;
	w.type = a;
	w.weight = b;
	w.damage = c;
	return w;
}

Weapon Weapon::SetWeap()   /*Функция создания оружия вручную с консоли*/
{
	Weapon w = {};
	cout << "Введите тип оружия" << endl;
	cin >> type;
	cout << "Введите вес оружия" << endl;
	cin >> weight;
	cout << "Введите урон оружия" << endl;
	cin >> damage;
	return w;
}

void Weapon::GetWeap()   /*Функция вывода информации об орижии*/
{
	cout << endl << "Оружие: " << endl;
	cout << "Тип оружия - ";
	cout << type << endl;
	cout << "Вес оружия - ";
	cout << weight << endl;
	cout << "Урон оружия - ";
	cout << damage << endl;
}

Weapon Weapon::BreakWeap(Weapon w)   /*Функция поломки оружия*/
{
	damage = damage / 10;
	return (w);
}