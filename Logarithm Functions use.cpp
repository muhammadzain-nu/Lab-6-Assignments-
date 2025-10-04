#include <stdio.h>
#include <math.h>
int main(){
	//calculating magnitude of Earthquake 
	double I, S;
	printf("Enter The Internsity of the quake ");
	scanf("%lf", &I);
	printf("/nEnter the Standard reference Value");
	scanf("%lf", &S);
	//Using math library
    double Magnitude=log10(I/S);
	printf("/nThe magnitude of EarthQuake is %lf", Magnitude);	
	
	
	
	
}