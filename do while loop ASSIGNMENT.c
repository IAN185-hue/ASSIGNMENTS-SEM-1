/*Name: Wanjiku Ian Macharia
*RegNo: CT101/G/23180/24
*Date: 4/10/2024
*do wile loops
*/
#include <stdio.h>
int main(){
    int i,sum,start;
    printf("Enter the value when to start:  ");
    scanf("%d",&start);


    do {
        printf("%d\n",i*i);
        i++;
        sum+=i;
    }while(i<=start);    //stop
    printf("The sum is %d",sum);
    return 0;
}