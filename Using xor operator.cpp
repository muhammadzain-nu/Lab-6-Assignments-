#include <stdio.h>
#include <math.h>
int main (){
	int num1, num2;
	printf("Enter the first number");
	scanf("%d", &num1);
	printf("Enter the second number");
	scanf("%d", &num2);
	num1=num1^num2;// using xor gate
	num2=num1^num2;
	num1=num1^num2;
	printf("Number 1 is now %d \n", num1);
	printf("Number 2 is now, %d", num2);
	
	return 0;
	
	
}