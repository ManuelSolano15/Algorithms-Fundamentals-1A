#include <stdio.h>

int Area(int x, int y){
    return (x * y);
    }

int main()
{
    int x, y;// x=base    y=altura
    printf("valor de la base:\n");
    scanf("%d",&x);
    
    printf("valor de la altura:\n");
    scanf ("%d", &y);
    
    printf("El area es: ");
    printf("%d", Area(x, y));

    if (x == y)
    {
        printf(" Es un cuadrado ");
    }
    scanf("%d"); 
}