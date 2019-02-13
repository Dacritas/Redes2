//============================================================================
// Name        : Ejercicio2FiboC++2.cpp
// Author      : Diego Alexander Chávez Ramírez
// Version     :1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <sys/time.h>
using namespace std;

int fib(int n)
{
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}

int main() {
		struct timeval stop, start;
		int term;
	    gettimeofday(&start, NULL);

	    cout << "Ingrese el número de operaciones!: \n" << endl; // prints Hello World
	   	cin>>term;

	    fib(term);

	    gettimeofday(&stop, NULL);
	    printf("time %d\n", stop.tv_usec - start.tv_usec);

	    return 0;
}
