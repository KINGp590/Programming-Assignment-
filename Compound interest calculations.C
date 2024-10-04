// Compound interest calculation
#include <stdio.h>
// adding maths library 
#include <math.h>

int main() {
double P, r, A;
int n, t;

printf("Enter the principal amount (P): ");
scanf("%lf", &P);

printf("Enter the annual interest rate (r) (as a percentage): ");
scanf("%lf", &r);

printf("Enter the number of times interest applied per time period (n): ");
scanf("%d", &n);

printf("Enter the number of time periods elapsed (t): ");
scanf("%d", &t);

// making r a percentage 
    
r = r / 100;
//the compound interest formula 
A = P * pow(1 + r / n, n * t);
    
printf("The final amount after compound interest is: %.2lf\n", A);

return 0;
}