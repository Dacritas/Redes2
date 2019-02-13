//============================================================================
// Name        : Ejercicio1FiboC++.cpp
// Author      : Diego Alexander Chávez Ramírez
// Version     :1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <sys/time.h>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
	float term;
	double x, y, z, cont;
	x = 0;
	y = 1;

	cout << "Ingrese número de términos v1: \n" << endl;
	cin >> term;

	int start_s = clock();
	for (cont = 1; cont < term; cont = cont + 1) {
		z = x + y;
		x = y;
		y = z;
		cout << z << endl;
	}
	int stop_s = clock();
	cout << "tiempo de ejecución en milisegundos: "
			<< (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000 << endl;

	return 0;
}
