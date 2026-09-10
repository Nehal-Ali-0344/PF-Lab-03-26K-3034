#include <stdio.h>

int main() {
    int policy_status, vehicle_age,claim_amount, approved_amount;
    printf("Is the policy active? (1 = Active, 0 = Inactive): ");
    scanf("%d", &policy_status);
    printf("Enter vehicle age (in years): ");
    scanf("%d", &vehicle_age);
    printf("Enter claim amount (Rs.): ");
    scanf("%d", &claim_amount);
    if (policy_status == 1 && claim_amount <= 500000.0) {
        if (vehicle_age < 10) {
            approved_amount = claim_amount;
            printf("Claim Approved (100%%): Rs. %d", approved_amount);
        } else if (vehicle_age >= 10 && vehicle_age <= 15) {
            approved_amount = claim_amount * 0.50;
            printf("Claim Approved (50%% due to vehicle age): Rs. %d", approved_amount);
        } else {
            printf("Claim Rejected: Vehicle is older than 15 years.");
        }
    } else {
        printf("Claim Rejected: Policy inactive or claim amount exceeds maximum limit of Rs. 500,000.");
    }
    return 0;
}
