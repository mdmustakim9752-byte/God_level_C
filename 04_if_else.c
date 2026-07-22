#include <stdio.h>

	int main() {
		int age;

	// 1. user se age input maango
	printf("Mustakim, apni age enter karo: ");
	scanf("%d", &age);

	// 2. Condition check karo 
	if (age >= 18) {
		printf("Sahi hai boss! tum 18+ ho, Vote de sakte ho! \n");
	}else{
		printf("Abhi tum chote ho! Vote nahi de sakte. \n");
	}

		
	return 0;
}
