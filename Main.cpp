#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const int END = 10000000;
const int POWER_NUM = 3;
const int TABLE_WIDTH = 10;


double log_b(double x, double base)
{
	return log(x) / log(base);
}

int main()
{
	cout << left
		<< setw(TABLE_WIDTH)
		<< "Dec"
		<< setw(TABLE_WIDTH)
		<< "Hex"
		<< endl;

	cout << setfill('-')
		<< setw(TABLE_WIDTH * 2)
		<< "-"
		<< endl;

	for (int number = 1; number < END; number *= POWER_NUM)
	{
		cout << left
			<< setfill(' ')
			<< setbase(TABLE_WIDTH)
			<< setw(TABLE_WIDTH)
			<< number
			<< setw(TABLE_WIDTH)
			<< setbase(TABLE_WIDTH)
			<< number
			<< endl;
	}

	system("pause");
	return 0;
}