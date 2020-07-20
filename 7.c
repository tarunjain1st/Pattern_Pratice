/*
              1
            2 3 2
          3 4 5 4 3
        4 5 6 7 6 5 4
      5 6 7 8 9 8 7 6 5
*/
#include <stdio.h>

int main(){

  int n,i,j;
  printf("enter n : ");
  scanf("%d", &n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      printf("  ");
    }for(j=0;j<i;j++){
      printf("%d ",i+j);
    }for(j=i;j>1;j--){
      printf("%d ",i+j-2);
    }printf("\n");
  }
}
