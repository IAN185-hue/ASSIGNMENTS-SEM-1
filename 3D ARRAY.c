/* Name: Wanjiku Ian Macharia
RegNo:  CT101/G/23180/24
Date:  11/10/2024TOW
      THREE DIMENSIONAL ARRAY

 */
#include <stdio.h>
int main() {
    int i,j,k;
    int marks[2][2][3] = {{{67, 57, 45}, {57, 34, 78}},{{67, 57, 45}, {57, 34, 78}}};
    for (i=0;i<2;i++) {
        for (j=0;j<3;j++) {
            for (int k=0;k<3;k++) {
                printf("marks[%d][%d][%d]=%d\n ",i,j,k,marks[i][j][k]);
            }

        }
    }
    return 0;
}