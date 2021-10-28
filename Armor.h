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
	Armor arm_1(string a, int b, string c, int d); /*������� �������� �����*/
	Armor SetArm(); /*������� �������� ����� ������� � �������*/
	void GetArm(Armor ar); /*������� ������ ���������� � �����*/
	Armor BreakArm(Armor ar); /*������� ������� �����*/
};

