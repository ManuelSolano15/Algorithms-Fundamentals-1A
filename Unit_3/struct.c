#include <stdio.h>

struct student{
    //propiedades dentro de la estructura, como una plantilla
    int math;
    int english;
    float promedio;
    char* name;
    char* group;
};

struct transport{
    int tires;
    char* color;
    char* name;
};

int main(){
    struct student yahir = {10, 10, 10, "Sonia", "A"};
    struct student luis = {5, 7, 6.5, "Diego", "A"};

    struct transport car = {4, "black", "Honda Civic"};
    struct transport bus = {8, "purple", "Ruta 17"};
    struct transport moto = {2, "white", "Honda"};

    //mostrar información
    printf("%s: %f\n", yahir.name, yahir.promedio);

    return 0;
