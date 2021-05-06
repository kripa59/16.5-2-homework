#define _CRT_SECURE_NO_WARNINGS
#include <iostream>             
#include <ctime>  
using namespace std;

int main() {
	int n, m, N, sum = 0;
	cout << "N: ";
	cin >> N;
	time_t t;
	time(&t);
	int k = (localtime(&t)->tm_mday) % N;
	cout << "Size massiv: ";
	cin >> n >> m;
	int ** a = new int*[n];
	for (int i = 0; i < n; i++)
		a[i] = new int[m];
	cout << "Elements massiv:\n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (i == k) sum += a[i][j];
		}
	cout << "The amount elements" << k << " = " << sum;
	for (int i = 0; i < n; i++)
		delete[]a[i];
	delete[] a;
	return 0;
}
