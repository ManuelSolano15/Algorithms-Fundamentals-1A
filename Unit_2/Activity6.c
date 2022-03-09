#include <stdio.h>

//prototipo//
int sumaNumbers (int number1, int number2); 

void modificarVariables(a,b){
    a=a*2;
    b=b*2;
    printf ("LocalVariables Arguments:::: a: &d, b=%d\n", a,b);
    return ;


} 

int a=10;
int b=20;

int main (int argc, char**argv){
    //Llmando a la funcion 
    int mySum = sumaNumbers(2, 4);
    printf("sume 10 + 20 = %d\n", sumanumbers(10, 20));
    //modificar variables
    printf()

   
}

//definir la función 
sumaNumbers(int number1, int number2){
    //variables locales 
    int suma=0;
    suma = number1 + number2;
    return suma;

} 
