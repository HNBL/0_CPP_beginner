#include <iostream>
using namespace std;

/*
��������� ��� ���������� ����� ������ ����� do-while
*/


int main()
{
	system("chcp 1251>nul");
	int n = 0, M,sum =0, y;
	cout << "������� ������ ����� ����� �����������?  ";
	cin >> M; 
	do
	{
		y = 2 * n; 
		sum += y;
		++n;

		cout << y <<"    "<< endl;

	} while (n<M);

	cout <<"����� ���� ������ �����   " << sum << endl;


		
	system("pause>nul");
	return 0;
}