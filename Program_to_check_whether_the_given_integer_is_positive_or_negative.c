#include <stdio.h>

int main() {

    double num;
    scanf("%lf", &num);
    if (num <= 0.0) 
        printf("Negative Number");
    else
        printf("Positive Number");

    return 0;
}