#include <stdio.h>
int main()
 {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible to visa\n");
    else
        printf("Not eligible to visa\n");

    return 0;
}
