#include <stdio.h>
int main()
{
	int membership_type,time_slot,student = 2000,regular = 3500,senior_citizen = 3000;
	printf("Enter time_slot (1 = Morning, 2 = Evening): ");
    scanf("%d", &time_slot);
	printf("Select membersip_Type (1 = Student, 2 = Regular, 3 = Senior citizen): ");
    scanf("%d", &membership_type);
    switch (time_slot) {
    	case 1:
    		switch (membership_type) {
    			case 1:
    				printf("Monthly fees is :%f",student*0.15);
    				break;
    			case 2:
    				printf("Monthly fees is :%f",regular*0.15);
    				break;
    			case 3:
    				printf("Monthly fees is :%f",senior_citizen*0.15);
					break;	
    			default:
    				printf("Invalid time slot selected!\n");
			}
			break;
		case 2:	
			switch (membership_type){
			    case 1:
    				printf("Monthly fees is :%d",student);
    				break;
    			case 2:
    				printf("Monthly fees is :%d",regular);
    				break;
    			case 3:
    				printf("Monthly fees is :%d",senior_citizen);
    				break;
    			default:
    				printf("Invalid time slot selected!\n");
	}
	break;
}
	return 0;
}
