#include <stdio.h>
int main()
{
	int account_type,balance,interest;
	printf("Select Account Type (1 = Savings, 2 = Current, 3 = Fixed Deposit): ");
    scanf("%d", &account_type);
    printf("Enter Account Balance (Rs.): ");
    scanf("%d", &balance);
    switch (account_type) {
        case 1: 
            if (balance > 100000.0) {
                printf("your interest value is %d",interest = balance *0.04);
            } else {
                printf("your interest value is %d",interest = balance * 0.02);
            }
            break;
        case 2: 
            interest = 0.0;
            break;
        case 3:
            printf("your new earnings are %d",interest = balance * 0.08);
            break;
        default:
            printf("Invalid Account Type selected!\n");
    }
    return 0;
}
