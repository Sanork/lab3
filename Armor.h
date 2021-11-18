#pragma once
#include <string>
#include <windows.h>


using namespace std;

class Armor
{
private:
	string material;  /*Материал брони*/
	int weight;     /*Вес брони*/
	string w_class;    /*Класс брони*/
	int defense;   /*Защита брони*/
public:
	void InitArmor(string armorMaterial, int armorWeight, string armorClass, int armorDefence); /*Функция создания брони*/
	void InputArmor(); /*Функция создания брони вручную с консоли*/
	void PrintArmor(); /*Функция вывода информации о броне*/
};

