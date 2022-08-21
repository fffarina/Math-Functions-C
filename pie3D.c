#include <stdio.h>
#include <stdlib.h>
#include <time.h>


double pie3D(int simul_n){

	extern void init_genrand64(unsigned long long seed);
	extern double genrand64_real1(void);
	extern double genrand64_real2(void);
	extern double genrand64_real3(void);
	extern double _pow_float(double x, int n);
	extern double _root(double x);
	extern unsigned int _seeder();
	
	double x, y, z, length;
	int in_sphere = 0;
	
	init_genrand64(_seeder());

	for (int i = 0; i < simul_n; i++){	
		x = genrand64_real1();
		y = genrand64_real2();
		z = genrand64_real3();
		length = _root((_pow_float(x, 2) + _pow_float(y, 2) + _pow_float(z, 2)));
		
		if (length <= 1) {++in_sphere;} 
	}
	
	double result = ((double) in_sphere / (double) simul_n)  * 6.0;
	return result;	
}

