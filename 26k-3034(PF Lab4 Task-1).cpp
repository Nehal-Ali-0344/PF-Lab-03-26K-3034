#include <stdio.h>
int main()
{
	int income,repayment,age;
	
	printf("Enter monthly income (Rs.) :");
	scanf("%d",&income);
	
	printf("Enter age:");
	scanf("%d",&age);
	
	printf("Enter repayment:");
	scanf("%d",&repayment);
	
	if(income>30000){
		if(age>21 && age<60){
			if(repayment < income * 0.40){
				printf("Loan approved");
			}else{
			 printf("Rejected due to high debt ratio");
			 }
		}else{
			 printf("Rejected due to Age");
			 }
	}else{
			 printf("Rejected due to Income");
			 }
	return 0;
}
