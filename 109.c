#include <stdio.h>
int main()
 {
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        printf("Right Angled Triangle\n");
    else
        printf("Not Right Angled\n");

    return 0;
}
