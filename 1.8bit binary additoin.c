#include<stdio.h>

int* add(int*a,int*b){
int sum[8];
int c=0,s=0;
for(int i=8;i!=-1;i++){
  s=a[i]+b[i];
  c=s/2;
  s[i]=s%2;
}
return sum;
}
int main()
{
  int arrA[8]={0,0,0,0,1,0,1,0};
  int arrB[8]={0,0,0,0,1,0,1,0};
  int* sum=add(arrA,arrB);
  for(int i=0;i!=8;i++){
    printf("%d",sum(i)*);
  }
}
