#include <stdio.h>
int main()
 {
    int age;
    scanf("%d", &age);
    if (age >= 18)
        printf("Eligible for License\n");
    else
        printf("Not Eligible\n");
    return 0;
}
