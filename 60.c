#include <stdio.h>
int main()
 {
    int n;
    scanf("%d", &n);
    if (n % 7 == 0)
        printf("Divisible by 7\n");
    else
        printf("Not Divisible by 7\n");
    return 0;
}
