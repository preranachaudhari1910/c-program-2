#include <stdio.h>
int main()
 {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 60)
        printf("Senior Citizen\n");
    else
        printf("Not a Senior Citizen\n");

    return 0;
}
