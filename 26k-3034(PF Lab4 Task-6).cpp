#include <stdio.h>
int main() {
    int plan_choice,minutes_used;
    float total_bill;
    printf("Select Telecom Plan (1, 2, 3, or 4): ");
    scanf("%d",&plan_choice);
    switch (plan_choice) {
        case 1:
            printf("Enter total minutes used: ");
            scanf("%d",&minutes_used);
            total_bill = 500.0;
            if (minutes_used > 1000) {
                total_bill += (minutes_used - 1000) * 2.0;
            }
            break;
        case 2:
            printf("Enter total minutes used: ");
            scanf("%d",&minutes_used);
            total_bill = 800.0;
            if (minutes_used > 2000) {
                total_bill += (minutes_used - 2000) * 2.0;
            }
            break;
        case 3:
            total_bill = 1200.0;
            break;
        case 4:
            printf("Enter total minutes used: ");
            scanf("%d",&minutes_used);
            total_bill = minutes_used * 1.0;
            break;
        default:
            printf("Invalid plan selection!");
    }
    printf("Total Bill Amount: Rs. %.2f", total_bill);
    return 0;
}
