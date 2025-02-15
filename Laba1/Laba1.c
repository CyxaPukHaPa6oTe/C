#include <stdio.h>
#include <math.h>

int main(int argc, char** argv) {
	double a,b,c;
	double x1,x2,d;
	
	a = 1.2;
	b = 10;
	c = 3.3;
	
	d = pow(b,2) - 4*a*c;
	printf("d - %1f \n",d);
	
	if (d>0){
	    x1 = -b + sqrt(d)/(2*a);
	    x2 = -b - sqrt(d)/(2*a);
	    printf("x1 - %1f \n", x1);
	    printf("x2 - %1f \n", x2);
	}
	
	if (d==0){
	    x1 = -b + sqrt(d)/(2*a);
	    printf("x - %1f \n", x1);
	}
	
	if (d<0) printf("Korney net");
	
	return 0;
}
