#include<stdio.h>
#include<math.h>



void solution(double a, double b, double c, int *fl, float *x1, float *x2){
    float d;
	if ((a==0 && b==0) || (a==0 && c==0) || a==0 ){
        *fl = 0;
        return;
        }
        if (b == 0 && c == 0){
          *fl = 1;
          *x1 = 0;
          return;
         }
        if (c==0){
	  *fl = 2;
	  *x1=-b/a;
          *x2=0;
        return;
        }
	if (b==0){
 	 if (c<0){
	  *fl = 2;
          *x1 = sqrt(-c/a);
          *x2 = -sqrt(-c/a);
         }else{
          *fl = -1;
          } 
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
