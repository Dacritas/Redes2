//============================================================================
// Name        : Ejercicio1FiboC++.cpp
// Author      : Diego Alexander Chávez Ramírez
// Version     :1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <iostream>
using namespace std;

int main() {
	int term;
	double x, y, z, cont;
	    x = 0;
	    y = 1;

	    struct timeval stop, start;
	    gettimeofday(&start, NULL);

	    cout << "Ingrese el número de operaciones: \n" << endl; // prints Hello World
	    cin>>term;


	    for (cont = 1; cont < term; cont = cont + 1)
	    {
	        z = x + y;
	        x = y;
	        y = z;
	    }

	    gettimeofday(&stop, NULL);
	    printf("time %d\n", stop.tv_usec - start.tv_usec);


	return 0;
}
