#include<stdio.h>
#include "product.h"
int main(){
	double a,b,p;
	printf("enter the numbers 1  and 2 :");
	scanf("%lf %lf",&a , &b);
	p = product(a,b);
	printf("the product is : %lf\n",p);
}
