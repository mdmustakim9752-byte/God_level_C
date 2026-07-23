#include <stdio.h>


int main() {
        int marks;

        printf("Enter your marks (0-100):");
        scanf("%d", &marks);

        if (marks >= 90) {
                printf("Result: Grade A (Outstanding!)\n");
        }
        else if (marks >= 75){
                printf("Result: Grade B (Good job!)\n");
        }
        else if (marks >= 50) {
                printf("Result: Grade C(Satisfaing)\n");
        }
        else {
                printf("Result: Failed (Needs Improvement)\n");
                
        }
        
        return 0;
}
