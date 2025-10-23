#include <stdio.h>
int main(){
	int value,i,j;
	printf("enter a value:");
	scanf("%d", &value);
	for(i=1;i<=value;i++){
		printf("%d: ",i);
		for(j=1;j<=10;j++){
			printf("%4d ", i*j);
			
		}
		printf("\n");
    }
    return 0;
}
