#include <iostream>
#include <string>
#include <windows.h>
#include "Resistance.h"

using namespace std;

Resistance Resistance::res_1(int a, int b, int c)   /*��������*/
{
	Resistance r;
	r.poison_res = a;
	r.fire_res = b;
	r.frost_res = c;
	return r;
}

Resistance Resistance::SetRes()  /*�������� �������*/
{
	Resistance a = {};
	cout << "������� ������������� ���" << endl;
	cin >> a.poison_res;
	cout << "������� ������������� ����" << endl;
	cin >> a.fire_res;
	cout << "������� ������������� ������" << endl;
	cin >> a.frost_res;
	return a;
}

void Resistance::GetRes(Resistance b)  /*����� ����������*/
{
	cout << "������������� ��� - ";
	cout << b.poison_res << "%" << endl;
	cout << "������������� ���� - ";
	cout << b.fire_res << "%" << endl;
	cout << "������������� ������ - ";
	cout << b.frost_res << "%" << endl;
}