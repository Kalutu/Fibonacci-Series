#include <stdio.h>

int main()
{
    int number;
    printf("Enter number of terms to be printed(n>2): ");
    scanf("%d", &number);
    int fibanocci;
    int a = 0, b = 1;

    printf("Fibanocci Series: 0 1 ");
    for (int i = 0; i < number - 2; i++)
    {
        fibanocci = a + b;
        a = b;
        b = fibanocci;
        printf("%d ",fibanocci);
    }
    
    return 0;
}