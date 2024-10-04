//Simple interest calculation 
#include <stdio.h>

int main() {
 
 float principal, rate, time, interest;
    
 printf("Enter principal amount: ");
 scanf("%f", &principal);

 printf("Enter rate of interest: ");
 scanf("%f", &rate);

 printf("Enter time period in years: ");
 scanf("%f", &time);

 //formula for simple interest 
 interest = (principal * rate * time) / 100;

 // the final output 
 printf("Simple Interest = %.2f\n", interest); 
return 0; 
}