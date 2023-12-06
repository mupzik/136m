#pragma once
#include <vector>
#include <string>
using namespace std;
///

void rando(vector<int>& posl, unsigned int n, int a = -100, int b = 100);
void rando(vector<float>& posl, unsigned int n, int a= -10, int b = 10);
void rando(float* posl, unsigned int n, int a, int b);
void rando(int* posl, unsigned int n, int a, int b);
void FiWritee(string Fnamee, float* posl, unsigned int n);
void FiWritee(string Fnamee, vector<float>& posl, unsigned int n);
void FiWritee(string Fnamee, int* posl, unsigned int n);
void FiWritee(string Fnamee, vector<int>& posl, unsigned int n);
