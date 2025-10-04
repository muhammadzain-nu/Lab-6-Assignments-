#include <stdio.h>
#include <math.h>
int main(){
	double P, r, t, A, n;
		printf("Enter The rate of the Interest: ");
	scanf("%lf", &r);
		printf("Enter The years spent: ");
	scanf("%lf", &t);
		printf("Enter The Current value");
	scanf("%lf", &P);
	printf("Enter The Number of times it is compounded per year");
	scanf("%lf", &n);
	A=P*pow(1+r/n,n*t);
	printf("Your final value is: %lf", A);
	
	
	
}