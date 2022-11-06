#include <stdio.h>

int main(void){
	int item_number, purchase_day, purchase_month, purchase_year;
	float unit_price;

	printf("Enter item number:");
	scanf("%d", &item_number);	

	printf("Enter unit price:");
	scanf("%f", &unit_price);

	if(unit_price > 9999.99){
		printf("Max unit price is $9999.99");
		return 0;
	}

	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%d/%d/%d", &purchase_month, &purchase_day, &purchase_year);

	printf(
		"Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%7.2f\t%.2d/%.2d/%.4d", 
		item_number, 
		unit_price,
		purchase_month, 
		purchase_day, 
		purchase_year
	);
	
	return 0;
}
