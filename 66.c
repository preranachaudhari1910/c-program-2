#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    if (n % 5 == 0 && n % 10 == 0)
        printf("Multiple of both 3 and 5\n");
    else
        printf("Not multiple of both\n");
    return 0;
}
