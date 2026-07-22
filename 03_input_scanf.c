#include <stdio.h>

int main () {
	int userAge;

	// 1. User ko screen par ek message dikhao
	printf ("Mustakim, apni sahi age type karo aur Enter dabao: ");

	// 2. keyboard se input lo aur use 'userAge' ke address (&) Par store karo 
	scanf ("%d", &userAge);

	//.3. jo user ne type kiya, use wapas print karke confirm karo
	printf("Wah! tumne enter kiya ki tumhari age %d saal hai!\n", userAge);

	return 0;
	
}
