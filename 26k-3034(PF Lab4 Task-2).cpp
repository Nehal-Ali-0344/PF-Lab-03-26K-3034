#include <stdio.h>
int main()
{
	int entry_test,fsc_perc,combined_score;
	printf("Enter entry_test score(out of 100): ");
	scanf("%d", &entry_test);
	printf("Enter FSc_Percentage:");
	scanf("%d", &fsc_perc);
	combined_score = (0.50*entry_test)+(0.50*fsc_perc);
	if(combined_score>=80){
		printf("You got admission in Computer Science.\n");
	}else if (combined_score>=65){
			printf("You got admission in Software Engineering.\n");
		}else if (combined_score>=50)
		{
			printf("You got admission in Information Technology.\n");
		}else {
			printf("You got rejected\n");
}
}
