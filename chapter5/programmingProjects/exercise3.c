#include <stdio.h>

int main(void){
	float price_per_share, value_of_trade, commission_rate, rival_broker_commision;
	int shares_amount;

	printf("Enter amount of shares: ");
	scanf("%d", &shares_amount);
	printf("Enter value of share: ");
	scanf("%f", &price_per_share);
	
	value_of_trade = shares_amount * price_per_share;

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

	if(shares_amount < 2000){
		rival_broker_commision = 33 + 0.3 * shares_amount;
	} else {
		rival_broker_commision = 33 + 0.2 * shares_amount;
	}


	printf("Commission: $%.2f\nRivals commission: $%.2f\n", commission_rate, rival_broker_commision);
	return 0;
}
