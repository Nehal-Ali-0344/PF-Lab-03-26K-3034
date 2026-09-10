#include <stdio.h>
int main() {
    int people_count,total_weight;
    printf("Enter number of people: ");
    scanf("%d", &people_count);
    printf("Enter total weight (in kg): ");
    scanf("%d", &total_weight);
    if (total_weight > 1000.0 && people_count > 10) {
        printf("Deny Entry: Elevator exceeds BOTH weight and people capacity limits!");
    } else if (total_weight > 1000.0) {
        printf("Deny Entry: Overweight limit exceeded (Max: 1000 kg).");
    } else if (people_count > 10) {
        printf("Deny Entry: Exceeds people capacity limit (Max: 10 people).");
    } else {
        printf("Elevator can operate normally.");
    }
    return 0;
}
