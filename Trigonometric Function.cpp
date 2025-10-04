#include <stdio.h>
#include <math.h>
int main(){
	const double PI = 3.14159265359;
	double H, Angle, L;
		printf("Enter The Height ");
	scanf("%lf", &H);
		printf("Enter The Elevation Angle");
	scanf("%lf", &Angle);
	double rad=Angle*(PI/180);
	L=H/tan(rad);
	printf("\nThe lenght of the Shadow is %lf units", L);
	
	
	return 0;
	
	
	
	
}
