#include <stdio.h>
float chuvi(float a, float b);
float dientich(float a, float b);
void main (){
	float num1,num2;
	printf(" tinh chu vi va dien tich");
	printf("\n chieu dai : ");
	scanf("%f", &num1);
	printf("\n chieu rong : ");
	scanf("%f", &num2);
	
	float result1 = chuvi(num1 , num2);
	printf("%f", result1);
	float result2 = dientich(num1 , num2);
	printf("%f", result2);
	
}
float chuvi(float a, float b){
	printf("\n chu vi hcn lan: ");
	return (a+b)*2;
	
}
float dientich(float a, float b){
	printf("\n dien tich hcn la : ");
	return a*b;
}
