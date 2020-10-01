#include <stdio.h>
int main(){
	int p,e,i;
	printf("Prime numbers between 2 to 200 are: \n");
	for (e=2;e<=200;e++){
		i=0;
		for(p=2;p<=e/2;p++){
			if(e%p==0){
				i++;
				break;
			}
		}
		if(i==0&&e!=1){
			printf("%d\n", e);
		}
	}
	return 0;
}