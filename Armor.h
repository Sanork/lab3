#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Armor:
	public Character
{
private:
	string material;  /*Материал брони*/
	int weight;     /*Вес брони*/
	string w_class;    /*Класс брони*/
	int defense;   /*Защита брони*/
public:
	Armor InitArmor(string armorMaterial, int armorWeight, string armorClass, int armorDefence); /*Функция создания брони*/
	Armor InputArmor(); /*Функция создания брони вручную с консоли*/
	void PrintArmor(Armor ar); /*Функция вывода информации о броне*/
	Armor BreakArmor(Armor ar); /*Функция поломки брони*/
};

