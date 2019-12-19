#include<stdio.h>

int sum[9];

//finds binary sum of 2 binary no in array
int* add(int* a,int* b,int c){  //2 modes (3rd argument which is for carry  can be 0 or 1) 
  int s;
  for(int i=7;i!=-1;i--){
    s=a[i]+b[i]+c;
    sum[i+1]=s%2;
    c=s/2;
  }
  return sum;
}
int*sub (int*a,int*b){
  int comp[8];
  for(int i=0 ;i!=8;i++){
    comp[i]=!b[i];         //finding complement
  }
  int* ptr= add(comp,a,1);//passing 1 as carry for 2's complement
  return ptr;

}
//displays the result of sum
void disp(int*a){
  for(int i=0;i!=9;i++){
   printf("%d",a[i]);
  }
}
int main()
{
  int arrA[8]={0,0,0,0,1,1,0,1};
  int arrB[8]={0,0,0,0,1,0,1,0};
  
  int* ptr=sub(arrA,arrB);
  disp(ptr);


  }
