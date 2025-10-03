#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Divisible by 2\n");
    else
        printf("Not Divisible by 2\n");
    return 0;
}
