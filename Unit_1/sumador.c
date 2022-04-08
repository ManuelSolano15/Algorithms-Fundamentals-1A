#include <stdio.h>

int num1,num2;

int main(){
    printf("Ingresa numero1");
    scanf("%d", &num1);
    printf("Ingresa numero2");
    scanf("%d", &num2);
    int sum= num1 + num2;

    printf("La suma es: %d\n", sum);
    return 0;
}
