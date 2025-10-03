#include <stdio.h>
int main() 
{
    int held, attended;
    float per;
    printf("Enter total classes held and attended: ");
    scanf("%d %d", &held, &attended);

    per = (attended * 100.0) / held;

    if (per >= 75)
        printf("Eligible (%.2f%% attendance)\n", per);
    else
        printf("Not Eligible (%.2f%% attendance)\n", per);

    return 0;
}
