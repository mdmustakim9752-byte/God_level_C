#include  <stdio.h>

int main() {
        // 1. FOR LOOP: jab pata ho kitni baar chalna hai 
        printf("---_ printing 1 to 5 using FOR Loop ---\n");
        for (int i = 1; i <=5; i++) {
                printf("Number: %d\n", i);
        }

printf("\n");

        //2. WHILE LOOP: JAB CONDITION KE BASIS PAR CHALANA HO 
        printf("--- Printin 6 to 1 using WHILE loop ---\n");
        int count =5;
        while (count >= 1) {
                printf("Countdown: %d\n", count);
                count--; // count ko 1 kam kar raha hai 
}
        return 0;
}
