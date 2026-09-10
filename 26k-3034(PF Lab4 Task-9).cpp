#include <stdio.h>
int main() {
    float bill, final_discount , total_payable;
    int hour_of_visit, is_member;
    printf("Enter Bill Amount (Rs.): ");
    scanf("%f", &bill);
    printf("Enter Hour of Visit (0-23 in 24-hr format): ");
    scanf("%d", &hour_of_visit);
    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &is_member);
    if (hour_of_visit >= 15 && hour_of_visit <= 17) {
        final_discount += 20.0;
    }
    if (is_member == 1) {
        final_discount += 10.0;
    }
    if (final_discount > 25.0) {
        final_discount = 25.0;
    }
    total_payable = bill - (bill *final_discount*0.01);
    printf("Total Applied Discount: %.2f", final_discount);
    printf("Final Payable Bill: Rs. %.2f", total_payable);
    return 0;
}
