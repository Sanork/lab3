#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Armor:
	public Character
{
private:
	string material;  /*�������� �����*/
	int weight;     /*��� �����*/
	string w_class;    /*����� �����*/
	int defense;   /*������ �����*/
public:
	Armor InitArmor(string armorMaterial, int armorWeight, string armorClass, int armorDefence); /*������� �������� �����*/
	Armor InputArmor(); /*������� �������� ����� ������� � �������*/
	void PrintArmor(Armor ar); /*������� ������ ���������� � �����*/
	Armor BreakArmor(Armor ar); /*������� ������� �����*/
};

