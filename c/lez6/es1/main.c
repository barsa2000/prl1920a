#include <stdio.h>

void diff_abs(float *a, float *b){
	float t = *a;
	*a -= *b;
	*b -= t; 
}


int main(){
	float a,b;

	scanf("%f %f", &a,&b);
	diff_abs(&a,&b);
	printf("%.2f\n%.2f\n", a,b);


	return 0;
}