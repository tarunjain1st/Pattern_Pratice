/*
      A
     A B
    A B C
   A B C D
  A B C D E
   B C D E
    C D E
     D E
      E
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);

  for(i=1;i<=2*n-1;i++){
    for(j=0;j<abs(n-i);j++){
      printf(" ");
    }for(j=n;j>abs(n-i);j--){
      if(i<=n)
        printf("%c ",64+n-j+1);
      else
      printf("%c ",64+i-j+1);
    }printf("\n");
  }
}
