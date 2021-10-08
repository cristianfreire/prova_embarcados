#include <stdio.h>


int notAnd(int a, int b, int *x){
    printf("! (%d && %d) = ", a, b);
    *x = !(a && b);
}


int main(){
    int A = 0, B = 0, X;

    notAnd(A, B, &X);
    printf("%d\n", X);

    B = 1;
    notAnd(A, B, &X);
    printf("%d\n", X);

    A = 1;
    notAnd(A, B, &X);
    printf("%d\n", X);

    A = 1;
    B = 0;
    notAnd(A, B, &X);
    printf("%d\n", X);

   
}