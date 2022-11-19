#include <stdio.h>

int main(void){
	float value_of_trade, commission_rate;

	printf("Enter value of trade: ");
	scanf("%f", &value_of_trade);

	if(value_of_trade >= 39.00f && value_of_trade < 2500.00f)
		commission_rate = 30.00f + (value_of_trade * .017f);
	else if (value_of_trade >= 2500.00f && value_of_trade < 6250.00f)
		commission_rate = 56.00f + (value_of_trade * .0066f);
	else if (value_of_trade >= 6250.00f && value_of_trade < 20000.00f)
		commission_rate = 76.00f + (value_of_trade * .0034f);
	else if (value_of_trade >= 20000.00f && value_of_trade < 50000.00f)
		commission_rate = 100.00f + (value_of_trade * .0022f);
	else if (value_of_trade >= 50000.00f && value_of_trade <= 500000.00f)
		commission_rate = 155.00f + (value_of_trade * .0011f);
	else if (value_of_trade > 500000.00f)
		commission_rate = 255.00f + (value_of_trade * 0.0009f);


	printf("Commission: $%.2f\n", commission_rate);

	return 0;
}
