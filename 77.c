#include <stdio.h>
int main()
 {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 13)
        printf("Child\n");
    else if (age >= 13 && age < 20)
        printf("Teenager\n");
    else
        printf("Adult\n");

    return 0;
}
