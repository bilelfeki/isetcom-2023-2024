// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int premier=1,i=2,n;
    char toPrint[]  ="";
    do{
        printf("\nplease enter a positive number\n"); 
        scanf("%d",&n);
    }while(n<=0);

    while(premier==1 && i<=(n/2)){
        if(n%i==0){
            premier=0;
        }
        i++;
    }
    if(premier==0){
        strcpy(toPrint,"not premier");
    }else{
        strcpy(toPrint,"premier");
    }
    printf("the number is %s",toPrint);
    return 0;
}