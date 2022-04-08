#include <stdio.h>

int main()
{
    int array[3];
    int n;
    for (int i = 0; i < 3; i++)
    {
        int num = 0;
        printf("coloca la letra i ");
        
        scanf("%d", &num);
        
        array[i] = num;
    }
    for (int i = 0; i < 3; i++)
    {
        if (n < array[i])
        {
            n = array[i];
        }
    }
}