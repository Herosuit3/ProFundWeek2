#include<stdio.h>
int main() {
  int x,y,z;
  printf("Enter three numbers: ");
  scanf("%d %d %d",&x,&y,&z);
  printf("Max Number is ");
  if (x >= y && x >= z){
  	 printf("%d", x);
  }
  else if (y >= x && y >= z){
  	printf("%d", y);
  }
  else{
  	printf("%d", z);
  }
  return 0;
}