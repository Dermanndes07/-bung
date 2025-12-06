#include <stdio.h>
//Zahlen 1 bis 100 in Rechteckform
int quadrat(void){
    int a[1000];
    for (int i = 1; i <= 100; i= i + 1) {
        a[i] = i +1;
        printf("%d ", i);

        if ( a[i] == 20) {
            printf("\n");
        }
        if ( a[i] == 36) {
            printf("\n");
        }
        if ( a[i] == 52) {
            printf("\n");
        }
        if ( a[i] == 68) {
            printf("\n");
        }
        if ( a[i] == 84) {
            printf("\n");
        }
    }
    return 0;

}