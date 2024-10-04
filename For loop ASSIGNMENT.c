/*Name: Wanjiku Ian Macharia
 *RegNo: CT101/G/23180/24
 *Date: 4/10/2024
program of For Loops
*/
#include <stdio.h>
int main() {
    int i,sum=0,start,stop;

     printf("Enter the value when to start: ");
     scanf("%d",&start);

    printf("Enter the value when to stop: ");
    scanf("%d",&stop);

    for(i=start;i<=stop;i++) {
        printf("%d\n",i*i);
        sum=sum+i;


    }
    printf("The sum is %d\n",sum);

    return 0;

}