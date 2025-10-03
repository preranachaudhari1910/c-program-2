#include <stdio.h>
int main() {
    int m1, m2, m3, total;
    float per;
    printf("Enter marks of 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    per = total / 3.0;

    if (m1 < 40 || m2 < 40 || m3 < 40)
        printf("Fail\n");
    else {
        if (per >= 60)
            printf("First Division\n");
        else if (per >= 45)
            printf("Second Division\n");
        else
            printf("Third Division\n");
    }

    return 0;
}
