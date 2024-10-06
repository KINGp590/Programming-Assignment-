//    Eletricity Bill Calculator
#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float chargePerUnit, totalBill, surcharge = 0.0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // first conditions
    if (unitsConsumed <= 199) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    //  total bill formula
    totalBill = unitsConsumed * chargePerUnit;
    //the surcharge condition: if the units are more than 400 then the surcharge of 0.15 of the total bill should be added tothe total bill
    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
    }

    // second conditions
    if (totalBill < 100) {
        totalBill = 100;
    } else {
        totalBill += surcharge;// the surcharge added to the total bill but if only the units are more than 400
    }

    // final output
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charge Per Unit: %.2f Kshs\n", chargePerUnit);
    printf("Total Amount to Pay: %.2f Kshs\n", totalBill);

return 0;
}