#include <stdio.h>
int main()
 {
    int cost, sell;
    printf("Enter cost price and selling price: ");
    scanf("%d %d", &cost, &sell);

    if (sell > cost)
        printf("Profit = %d\n", sell - cost);
    else if (sell < cost)
        printf("Loss = %d\n", cost - sell);
    else
        printf("No Profit No Loss\n");
    return 0;
}
