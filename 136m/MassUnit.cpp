#include "MassUnit.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;
///
void rando(vector<int>& posl, unsigned int n, int a, int b)
{
	posl.resize(n);
	for (unsigned int i = 0; i < n; i++)
	{
		posl[i] = rand() % (2*b) + a;
	}
}

void rando(vector<float>& posl, unsigned int n, int a, int b)

{
	posl.resize(n);
	for (unsigned int i = 0; i < n; i++)
	{
		posl[i] = (float)rand()/RAND_MAX*(a-b)-a;
	}
}

void rando(float *posl, unsigned int n, int a, int b)
{
	posl = new float[n];
	for (unsigned int i = 0; i < n; i++)
	{
		posl[i] = (float)rand() / RAND_MAX * (a - b) - a;
	}
}

void rando(int* posl, unsigned int n, int a, int b)
{
	posl = new int[n];
	for (unsigned int i = 0; i < n; i++)
	{
		posl[i] = (rand() % (2 * b * 10) + a * 10);
	}
}

void FiWritee(string Fnamee, float* posl, unsigned int n)
{
	ofstream file;
	file.open(Fnamee);
	for (unsigned int i = 0; i < n; i++)
		file << posl[i] << endl;
	file.close();
}

void FiWritee(string Fnamee, vector<float> &posl, unsigned int n)
{
	ofstream file;
	file.open(Fnamee);
	for (unsigned int i = 0; i < n; i++)
		file << posl[i] << endl;
	file.close();
}

void FiWritee(string Fnamee, int* posl, unsigned int n)
{
	ofstream file;
	file.open(Fnamee);
	for (unsigned int i = 0; i < n; i++)
		file << posl[i] << endl;
	file.close();
}

void FiWritee(string Fnamee, vector<int>& posl, unsigned int n)
{
	ofstream file;
	file.open(Fnamee);
	for (unsigned int i = 0; i < n; i++)
		file << posl[i] << endl;
	file.close();
}

//void FiRead(string Fnamee, vector<int>& posl)
//{
//	unsigned n = 1;
//	ifstream file;
//	int numb;
//	char ch;
//	file.open(Fnamee);
//	while (EOF != true)
//	{
//		for (unsigned int i = 0; i < n; i++)
//		{
//			posl.resize(n);
//			file >> ch;
//			numb = stoi(ch) >> posl[i];
//		}
//	}
//
//}