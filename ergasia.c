#include <stdio.h>
// 1o COMMIT
// Collaborator: MICHALIS PACHOUNTIS
int main() {
    // 2o COMMIT
    int num1, num2, sum = 0; // den exei arxikopoihthei to sum

    // Prompting user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2); // Leipei to erotimatiko ; sto telos tis entolis

    // Calculating summary of numbers
    sum = num1 + num2; // Edo den exei sintaktiko lathos alla lathos stin praxi. Pollaplasiasmos anti gia diairesi

    // Printing the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum); // to %s einai lathos giati to num1 einai akeraios. Prepei na einai %d

    return 0; // Den exei ; sto telos tou tis entolis return
}
