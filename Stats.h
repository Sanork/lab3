#pragma once
#include "Character.h"
#include <string>
#include <windows.h>
//#include "Resistance.h"

using namespace std;

class Stats :
    private Character
{
private:
	int atack; /*�����*/
	int agility; /*��������*/
	int durability; /*���������*/
	int hp; /*���� ��������*/
	int energy; /*���� �������*/
	//resistance res; /*��������� �������������*/
public:
	Stats stat_1(int a, int b, int c, int d, int e, int a1, int b1, int c1); /*��������*/
	Stats SetStats(); /*�������� �������*/
	void GetStats(Stats s); /*����� ����������*/
};

