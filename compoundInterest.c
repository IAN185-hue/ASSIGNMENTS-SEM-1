//compound interest program
//Name: Wanjiku Ian Macharia
// Reg: CT101/G/23180/24

#include<stdio.h>
//math function
#include<math.h>
int main(void) {
   double principal,rate;
    int n,t;

    //prompt the user to enter the principal
    printf("Enter Principal: \n");
    scanf("%lf",&principal);

    //prompt the user to enter the rate
    printf( "Enter the rate: \n");
    scanf("%lf",&rate);

    //prompt the user to enter the number of terms
    printf("Enter the number of terms(n):  \n");
    scanf("%d",&n);

    //prompt the user to enter the periods elapsed
    printf("Enter number of times periods elapsed: \n");
    scanf("%d",&t);

    double finalAmount=pow(principal*(1+rate/n),(n*t));

    printf("Your total finalAmount in compound Interest is:%.2f\n",finalAmount);

    return 0;
}
