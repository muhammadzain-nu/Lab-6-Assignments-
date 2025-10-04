#include <stdio.h>
#include <math.h>
int main(){
	int number;
	printf("Enter a number");
	scanf("%d", &number);
	printf("The nunber multiplied by 2 is %d", number<<=1);
	printf("\nThe nunber multiplied by 4 is %d", number<<=1);
	printf("\nThe nunber multiplied by 8 is %d", number<<=1);
	
	return 0;
	
	
	
	
}