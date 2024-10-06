// for loop for no 1-50 , their squares and sums
#include <stdio.h>

int main() {
    int sum = 0, sumOfSquares = 0;
    
    for (int i = 1; i <= 50; i++) {
        sum += i; 
        
        sumOfSquares += i * i;  
        printf("%d\t%d\n", i, i * i);  
    }
   
    printf("\nSum of numbers from 1 to 50: %d\n", sum);
    printf("Sum of squares of numbers from 1 to 50: %d\n", sumOfSquares);
    
    return 0;
}