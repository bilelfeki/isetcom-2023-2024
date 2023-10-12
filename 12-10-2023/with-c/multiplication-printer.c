#include <stdio.h>

int main() {
    int N,m,i;
    printf("Entrez un nombre \n");
    scanf("%d",&N);
    for(i=1;i<=10;i++){
        m=i*N;
        printf("%d*%d=%d\n",N,i,m);
    }

    return 0;
}
