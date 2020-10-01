#include <stdio.h>
int main(){
	int i,sum;
	printf("The sum of all the even numbers from 0 to 20 is: \n");
	for(i=0;i<=20;i++){
		if(i%2==0){
			sum=sum+i;
			continue;
		}
	}
		printf("%d\n", sum);
		

	
	
}