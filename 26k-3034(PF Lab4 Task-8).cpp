#include <stdio.h>
int main() {
    int zone_type;
    float speed,speed_limit,fine;
    printf("Enter Zone Type (1 = School Zone, 2 = Highway, 3 = Residential Area): ");
    scanf("%d", &zone_type);
    printf("Enter Driver's Speed (km/h): ");
    scanf("%d",&speed);
    switch (zone_type) {
        case 1:
            speed_limit = 30.0;
            break;
        case 2:
            speed_limit = 100.0;
            break;
        case 3:
            speed_limit = 50.0;
            break;
        default:
            printf("Invalid Zone Type!");
    }
    if (speed > speed_limit) {
        fine = 1000.0;
        if (speed - speed_limit > 20.0) {
            fine *= 2;
        }
        printf("Speed limit exceeded! Final Fine: Rs. %d", fine);
    } else {
        printf("Speed within limit. No fine imposed.\n");
    }
    return 0;
}
