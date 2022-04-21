#include<stdio.h>
float r,p,s;
#define pi 3.14
void main(){
	printf("donner la valeur du rayon\n");
	
	scanf("%f",& r);
	p=2*3.14*r;
	s=3.14*r*r;
	printf("la valeur de p et s\n");
	printf("%f\n",s);
	printf("%f\n",p);
	
}
