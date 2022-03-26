#include<stdio.h>
#include<math.h>



void solution(double a, double b, double c, int *fl, float *x1, float *x2){
    float d;
	if (a==0 || b==0 || c==0){
        *fl = 0;
        return;
    }
        d=b*b-4*a*c;
	if (d==0){
		*x1 = (-b/(2*a));
		*fl = 1;
	}
	if (d>0){
		*x1=(((-1)*b-sqrt(d))/(2*a));
		*x2=(((-1)*b+sqrt(d))/(2*a));
		*fl = 2;
	}
    if(d<0){
		*fl = -1;
	} 
}	
