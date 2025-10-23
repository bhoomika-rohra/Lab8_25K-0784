#include <stdio.h>
int main(){
    int i,j;
    int empty=0;
    int occupied=0;
    int matrix[5][5];
    for(int i=1;i<=5;i++){
        
        for (int j=1;j<=5;j++){
            if ((i+j)%2==0){
                printf("o");
                empty++;
            }
            else{
                printf("x");
                occupied++;
            }
                
           
        }
        printf("\n"); 
    }
    printf("\nSummary\n");
    printf("Total desks: 25\n");
    printf("Students seated: %d\n", occupied);
    printf("seats empty: %d\n", empty);
    return 0;
}
