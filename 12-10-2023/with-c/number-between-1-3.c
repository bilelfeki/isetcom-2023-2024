#include <stdio.h>

int main() {
    int N=0;
    printf("Entrez un nombre entre 1 et 3\n");
    while (N<1 || N>3){
        scanf("%d", &N);
        if ( N < 1 || N > 3){
            printf("Saisie erronée. Recommencez\n");
        }
    }
    return 0;
}