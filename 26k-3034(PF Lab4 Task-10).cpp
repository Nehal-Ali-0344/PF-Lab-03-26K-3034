#include <stdio.h>
int main()
{
	int heart_rate;
	float temperature;
	printf("Enter heart rate: ");
	scanf("%d", &heart_rate);
	printf("Enter temperature:");
	scanf("%.2f", &temperature);
	if(heart_rate>120 or temperature>39){
		printf("Critical-Immediate Attention.\n");
	}
		if (heart_rate>=100 or temperature>=37.5)
			{printf("Urgent.\n");
	}else {
		printf("Normal - Wait in Queue.");
	}
	return 0;
}
