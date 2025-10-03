#include <stdio.h>
int main()
 {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 99)
        printf("Two-digit number\n");
    else
        printf("Not a two-digit number\n");

    return 0;
}
