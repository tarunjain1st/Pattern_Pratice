/*
  E E E E E
   D D D D
    C C C
     B B
      A
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<i;j++){
      printf(" ");
    }for(j=n;j>=i;j--){
      printf("%C ",64+n-i+1);
    }printf("\n");
  }
}
