#pragma once
#include <string>
#include <windows.h>


using namespace std;

class Armor
{
private:
	string material;  /*�������� �����*/
	int weight;     /*��� �����*/
	string w_class;    /*����� �����*/
	int defense;   /*������ �����*/
public:
	void InitArmor(string armorMaterial, int armorWeight, string armorClass, int armorDefence); /*������� �������� �����*/
	void InputArmor(); /*������� �������� ����� ������� � �������*/
	void PrintArmor(); /*������� ������ ���������� � �����*/
};

