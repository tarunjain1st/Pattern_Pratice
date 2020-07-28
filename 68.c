/*
              5       1
                4   2
                  3
                4   2
              5       1
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j==i || j==n-i+1)
        printf("%d ",n-j+1);
      else
        printf("  ");
    }printf("\n");
  }
}
