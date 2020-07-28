/*

                 *         *
                * *       * *
               * * *     * * *
              * * * *   * * * *
             * * * * * * * * * *
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n,k;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    k=1;
    for(j=1;j<=4*n-1;j++)
    {
      if(((j>n-i && j<n+i) || (j>3*n-i && j<3*n+i)) && k==1){
        printf("*");
        k=0;
      }
      else{
        printf(" ");
        k=1;
      }
    }printf("\n");
  }
}
