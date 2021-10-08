#include <stdio.h>

int notNot(int a, int *x){
    printf("! (!%d) = ", a);
    *x = !(!a);
}

int notNand(int a, int b, int *x){
    printf("! (!(%d && %d)) = ", a, b);
    *x = !(!(a && b));
}

int notNor(int a, int b, int *x){
    printf("! (!(%d || %d)) = ", a, b);
    *x = !(!(a || b));
}

int notAnd(int a, int b, int *x){
    printf("! (%d && %d) = ", a, b);
    *x = !(a && b);
}

int notOr(int a, int b, int *x){
    printf("! (%d || %d) = ", a, b);
    *x = !(a || b);
}


int main(){
    int A = 0, B = 0, X;

    notNot(A, &X);
    printf("%d\n", X);

    notNot(B, &X);
    printf("%d\n", X);

    notOr(A, B, &X);
    printf("%d\n", X);

    notAnd(A, B, &X);
    printf("%d\n", X);

    notNor(A, B, &X);
    printf("%d\n", X);

    notNand(A, B, &X);
    printf("%d\n", X);
   
}