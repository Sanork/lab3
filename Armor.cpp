#include <iostream>
#include <string>
#include <windows.h>
#include "Resistance.h"
#include "Weapon.h"
#include "Armor.h"

using namespace std;

Armor Armor::InitArmor(string armorMaterial, int armorWeight, string armorClass, int armorDefence) /*Функция создания брони*/
{
	Armor ar = {};
	ar.material = armorMaterial;
	ar.weight = armorWeight;
	ar.w_class = armorClass;
	ar.defense = armorDefence;
	return ar;
}

Armor Armor::InputArmor() /*Функция создания брони вручную с консоли*/
{
	//setlocale(LC_ALL, "Russian");
	Armor ar = {};
	cout << "Введите материал брони" << endl;
	cin >> ar.material;
	cout << "Введите вес брони" << endl;
	cin >> ar.weight;
	cout << "Введите класс брони" << endl;
	cin >> ar.w_class;
	cout << "Введите показатель защиты брони" << endl;
	cin >> ar.defense;
	return ar;
}

void Armor::PrintArmor(Armor ar) /*Функция вывода информации о броне*/
{
	cout << endl << "Броня: " << endl;
	cout << "Материал брони - ";
	cout << ar.material << endl;
	cout << "Вес брони - ";
	cout << ar.weight << endl;
	cout << "Класс брони - ";
	cout << ar.w_class << endl;
	cout << "Показатель защиты брони - ";
	cout << ar.defense << endl;
}

Armor Armor::BreakArmor(Armor ar)  /*Функция поломки брони*/
{
	ar.defense = ar.defense / 10;
	return (ar);
}
