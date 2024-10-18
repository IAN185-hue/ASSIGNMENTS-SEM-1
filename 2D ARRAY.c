/* Name: Wanjiku Ian Macharia
RegNo:  CT101/G/23180/24
Date:  11/10/2024TOW
      TOW DIMENSIONS ARRAY

 */
#include <stdio.h>
int main() {
    int i,j;
    int marks[2][3] = {{67, 57, 45}, {57, 34, 78}};
    for (i=0;i<2;i++) {
        for (j=0;j<3;j++) {
            printf("marks[%d][%d]=%d\n ",i,j,marks[i][j]);
        }
    }
    return 0;
}