
/*
    A
   BAB
  CBABC
 DCBABCD
EDCBABCDE
*/
#include <stdio.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=1;j<=n-i;j++){
      printf(" ");
    }for(j=i;j>=0;j--){
      printf("%c",65+j);
    }for(j=1;j<=i;j++){
      printf("%c",65+j);
    }printf("\n");
  }
}
