#include <sys/time.h>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
	int n, c, first = 0, second = 1, next;

	cout << "Ingrese número de términos v2:" << endl;
	cin >> n;

//	cout << "First " << n << " terms of Fibonacci series are :- " << endl;


	int start_s=clock();
	for (c = 0; c < n; c++) {
		if (c <= 1)
			next = c;
		else {
			next = first + second;
			first = second;
			second = next;
		}
		cout << next << endl;
	}
	int stop_s = clock();
	cout << "tiempo de ejecución en milisegundos: "
			<< (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << endl;

	return 0;
}
