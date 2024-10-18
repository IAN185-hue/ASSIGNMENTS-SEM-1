/* Name: Wanjiku Ian Macharia
 * RegNo: CT101/G/23180/24
 * Date: 18/10/2024
 */

//Electrict Bill Calculator Using function
#include <stdio.h>

float calculateCharges(int units);
float calculateSurcharge(float totalBill);
getCustomerDetails(int *id, int *units, char name[]);
displayCustomerDetails(int id, char name[], int units, float chargesPerUnit, float totalBill);

int main() {
    int customerID, unitsConsumed;
    char customerName[100];
    float totalBill, chargesPerUnit, surcharge;

    getCustomerDetails(&customerID, &unitsConsumed, customerName);
    chargesPerUnit = calculateCharges(unitsConsumed);
    totalBill = unitsConsumed * chargesPerUnit;

    if (totalBill > 400) {
        surcharge = calculateSurcharge(totalBill);
        totalBill += surcharge;
    }

    if (totalBill < 100) {
        totalBill = 100;
    }

    displayCustomerDetails(customerID, customerName, unitsConsumed, chargesPerUnit, totalBill);

    return 0;
}

float calculateCharges(int units) {
    if (units <= 199) {
        return 1.20;
    } else if (units < 400) {
        return 1.50;
    } else if (units < 600) {
        return 1.80;
    } else {
        return 2.00;
    }
}

float calculateSurcharge(float totalBill) {
    return totalBill * 0.15;
}

    getCustomerDetails(int *id, int *units, char name[]) {
    printf("Enter the customer ID: ");
    scanf("%d", id);
    printf("Enter the units consumed: ");
    scanf("%d", units);
    printf("Enter the customer name: ");
    scanf("%s", name);
}

    displayCustomerDetails(int id, char name[], int units, float chargesPerUnit, float totalBill) {
    printf("Customer ID is: %d\n", id);
    printf("Customer Name is: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Charges Per Unit: %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f\n", totalBill);
}
