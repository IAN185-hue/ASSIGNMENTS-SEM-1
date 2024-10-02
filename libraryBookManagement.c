#include <stdio.h>
int main() {
//Library fine calculation
int bokID,dueDate,returnDate,daysOverdue,fineRate,fineAmount;

printf("\nEnter the book ID: ");
scanf("%d", &bokID);

printf("Enter the dueDate(day): ");
scanf("%d", &dueDate);

printf("Enter the returnDate(day): ");
scanf("%d", &returnDate);

daysOverdue = returnDate - dueDate;

if(daysOverdue<=7) {
    fineRate=20;

}else if(daysOverdue<=14) {
    fineRate=50;
}else {
    fineRate=100;
}

fineAmount=daysOverdue + fineRate;
printf("\nBook ID: %d\n", bokID);
printf("Due Date: %d\n",dueDate);
printf("Return Date: %d\n",returnDate);
printf("Days Overdue %d\n",daysOverdue);
printf("Fine Rate: Ksh.%d per day\n",fineAmount);
printf("Fine Amount: %d\n",fineAmount);

return 0;
}