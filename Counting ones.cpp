#include <stdio.h>
#include <math.h>
int main(){
	int number, i, count=0, ones=0;
	printf("Enter a number");
	scanf("%d", &number);
	while(number>0){
		if(number==0){
			number--;
			printf("Enter a non zero value");
		}
		else{
			if((number&1)==1){
			ones++;
			number>>=1;	
			}		
			else{
			number>>=1;
			}
		}
		
		

	}
	printf(" there are %d one in this number", ones);
 return 0;	
	
	
	
}