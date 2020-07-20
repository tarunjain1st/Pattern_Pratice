/*
    0
   101
  21012
 3210123
432101234
*/
#include <stdio.h>
int main(){
  int i,j,n;
  printf("Enter n : ");
  scanf("%d",&n);
  for(i=0;i<=n;i++){
    for(j=1;j<=n-i;j++){
      printf(" ");
    }for(j=i;j>=0;j--){
      printf("%d",j);
    }for(j=1;j<=i;j++){
      printf("%d",j);
    }printf("\n");
  }
}
