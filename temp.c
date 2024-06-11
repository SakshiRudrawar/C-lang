#include<stdio.h>
float temp(float*,float*);
void main()
{
	float celsius,fahrenheit;
	 printf("Enter the  tempeture in clesius:");
	 scanf("%f",&celsius);
	 	printf("Before celsius=%f\n",celsius); 
	 	temp(&fahrenheit,&celsius);
	 	printf("After fahrenheit=%f",fahrenheit); 
}
float temp(float*x,float *y)
{
*x= (*y * 9/5) + 32;
}