#pragma once
//#include "Stats.h"
#include <string>
#include <windows.h>

using namespace std;

class Resistance //: //Stats
    //public Stats //!
{
private:
	int poison_res;  /*������������� ���*/
	int fire_res;    /*������������� ����*/
	int frost_res;   /*������������� ������*/
public:
	Resistance InitResistance(int resistancePoison, int resistanceFire, int resistanceFrost);   /*��������*/
	Resistance InputResistance();   /*�������� �������*/
	void PrintResistance(Resistance r);  /*��������� ����������*/
};

