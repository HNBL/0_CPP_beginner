#include <iostream>
using namespace std;

/*
Программа для вычесления суммы четных числе do-while
*/


int main()
{
	system("chcp 1251>nul");
	int n = 0, M,sum =0, y;
	cout << "сколько четных чисел будем суммировать?  ";
	cin >> M; 
	do
	{
		y = 2 * n; 
		sum += y;
		++n;

		cout << y <<"    "<< endl;

	} while (n<M);

	cout <<"сумму всех четных чисел   " << sum << endl;


		
	system("pause>nul");
	return 0;
}