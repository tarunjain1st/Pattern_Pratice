/*

                      *
                     * *
                    * * *
                   * * * *
                  * * * * *
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

  for(i=1;i<=2*n;i++){
    k=1;
    for(j=1;j<=4*n-1;j++)
    {
      if((j>2*n-i && j<2*n+i) && i<=n && k==1){
        printf("*");
        k=0;
      }
      else if(((j>2*n-i && j<i) || (j>4*n-i && j<2*n+i)) && k==1){
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
