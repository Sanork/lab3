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
	Armor arm_1(string a, int b, string c, int d); /*Функция создания брони*/
	Armor SetArm(); /*Функция создания брони вручную с консоли*/
	void GetArm(Armor ar); /*Функция вывода информации о броне*/
	Armor BreakArm(Armor ar); /*Функция поломки брони*/
};

