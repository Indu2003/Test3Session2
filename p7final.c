#include <stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction fraction;
int find_gcd(int a,int b){
  int min=a;
  if(b<min)
    min=b;
  for(int i=1;i<=min;i--){
    if(a%i==0 && b%i==0)
      return i;
  }
}
fraction input_fraction(fraction *f1,fraction *f2){
  printf("enter the numerator and denomintor\n");
  scanf("%d%d%d%d",&f1->num,&f1->den,&f2->num,&f2->den);  f3->den=f1.den*f2.den);
  f3->num=f1.num*f2.den+f2.num*f1.den;
  int gcd=find_gcd(f3->num,f3->den);
  f3->num=f3->num/gcd;
  f3->den=f3->den/gcd;
}
void output(fraction f1,fraction f2,fraction f3){
  printf("the sum of %d/%d and %d/%d is %d/%d ",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den);
}
int main(){
  fraction f1,f2,f3;
  input_fraction(&f1,&f2);
  add_fraction(f1,f2,&f3);
  output(f1,f2,f3);
  return 0;
}