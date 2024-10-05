/* Name:  Wanjiku Ian Macharia
 * RegNo: CT101/G/23180/24
 * Date: 5/10/2024
 * An elecricity bill calculator program
 */
#include <stdio.h>
int main() {
int CustomerID,UnitConsumed;
 char CustomerName[100];
 float TotalBill,ChargesPerUnit,Surcharge;

//Prompting the user to enter customer ID
 printf("Enter the customer ID:  ");
 scanf("%d",&CustomerID);

//prompting the user to enter the units consumed
 printf("Enter the units consumed: ");
 scanf("%d",&UnitConsumed);

 //prompting the user to enter the customer name
 printf("Enter the customer name: ");
 scanf("%s",CustomerName);

 //Calculating the Total cost of the unit based on the units consumed
 if (UnitConsumed<=199) {
  ChargesPerUnit=1.20;
 }else if (UnitConsumed<400) {
  ChargesPerUnit=1.50;
 }else if (UnitConsumed<600) {
  ChargesPerUnit=1.80;
 }else  {
  ChargesPerUnit=2.00;
 }
//Calculating the total bill
 TotalBill=UnitConsumed*ChargesPerUnit;

 //Calculating the surcharge amount if the bill exceeds 400
 if (TotalBill>400) {
  Surcharge=TotalBill*0.15;
   TotalBill+=Surcharge;
 }

 //Minimum Bill
if(TotalBill<100) {
 TotalBill=100;
}
 //Displaying the output of the user;s Data
 printf("Customer ID is: %d\n",CustomerID);
 printf("Customer Name is: %s\n",CustomerName);
 printf("Units Consumed : %d\n",UnitConsumed);
 printf("Charges Per Unit: %.2f\n",ChargesPerUnit);
 printf("Total Amount to Pay %.2f\n",TotalBill);

 return 0;
}