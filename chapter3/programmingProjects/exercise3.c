#include <stdio.h>

int main(void){
	int gci, group_id, pub_code, item_num, check_dig;
 
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gci, &group_id, &pub_code, &item_num, &check_dig);
	printf(
		"GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",
		gci, 
		group_id, 
		pub_code, 
		item_num, 
		check_dig
	);
	return 0;
}
