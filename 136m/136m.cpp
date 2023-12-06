#include <iostream>
#include <vector>
#include <string>
#include "MassUnit.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	unsigned int n;
	string Fname;
	cout << "Длина последовательности: ";
	cin >> n;
	vector<float> posl1;
	rando(posl1, n);

	cout << "В какой файл записать: ";
	cin >> Fname;
	FiWritee(Fname, posl1, n);

	cout << "С какого файла считать: ";
	cin >> Fname;
	//FiRead(Fname, posl1);

}