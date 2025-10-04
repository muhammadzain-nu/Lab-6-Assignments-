#include <stdio.h>
#include <math.h>
int main(){
	double total;
	int n;
	printf("Enter the number of members in each group ");
	scanf("%d", &n);
	double Total=n*250.50;
	printf("The total cost for your group is: %lf ", ceil(Total));
	
	
	
	
	return 0;
}