#pragma once
#include "Stats.h"
#include <string>
#include <windows.h>

using namespace std;

class Resistance :
    private Stats
{
private:
	int poison_res;  /*������������� ���*/
	int fire_res;    /*������������� ����*/
	int frost_res;   /*������������� ������*/
public:
	Resistance res_1(int a, int b, int c);   /*��������*/
	Resistance SetRes();   /*�������� �������*/
	void GetRes(Resistance b);  /*��������� ����������*/
};

