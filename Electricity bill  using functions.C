#include <stdio.h>
#include <string.h>
#include <math.h>  

float calculateElectricBill(int units) {
    float rate, bill;
    if (units <= 199) {
        rate = 1.20;
    } else if (units >= 200 && units < 400) {
        rate = 1.50;
    } else if (units >= 400 && units < 600) {
        rate = 1.80;
    } else {
        rate = 2.00;
    }

    bill = units * rate;
    
    if (bill > 400) {
        bill += bill * 0.15; 
    }

    if (bill < 100) {
        bill = 100;
    }

    return bill;
}

int main() {
    int customerID, unitsConsumed;
    char customerName[50], copiedCustomerName[50];  
    float bill, rate;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);  
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    strcpy(copiedCustomerName, customerName); 
   
    bill = calculateElectricBill(unitsConsumed);
    
    bill = ceil(bill);

    printf("\n   Electricity Bill \n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", copiedCustomerName); 
    printf("Units Consumed: %d\n", unitsConsumed);
    
    if (unitsConsumed <= 199) {
        rate = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        rate = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        rate = 1.80;
    } else {
        rate = 2.00;
    }

    printf("Charge per Unit: %.2f\n", rate);
    printf("Total Amount to Pay: Ksh %.2f\n", bill);

    return 0;
}