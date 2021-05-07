#define _CRT_SECURE_NO_WARNINGS
#include <iostream>             
#include <ctime>  
using namespace std;

int main() {
	int N, sum = 0;
	cout << "N: ";
	cin >> N;
	time_t t;
	time(&t);
	int k = (localtime(&t)->tm_mday) % N;
	cout << "Size massiv: ";
	cin >> N;
	int ** a = new int*[N];
	for (int i = 0; i < N; i++)
		a[i] = new int[N];
	cout << "Elements massiv:\n";
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			cin >> a[i][j];
			if (i == k) sum += a[i][j];
		}
	cout << "The amount elements" << k << " = " << sum;
	for (int i = 0; i < N; i++)
		delete[]a[i];
	delete[] a;
	return 0;
}
