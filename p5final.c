#include<stdio.h>
int input_size()
{
  int n;
  printf("enter the size of array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
 
  for (i=0;i<n;i++){
    printf("enter the elements of array");
    scanf("%d",&a[i]);
  }
}
int find_largest(int n,int a[n])
{
  int i , largest=0;
  for(i=0;i<n;i++){
    if(a[i]>a[largest])
    {
      largest =i;
    }
  }
        }
    
  void output(int n,int a[n],int largest)
  {
    printf("index of largest element is %d",largest,a[largest]);
  }
  int main()
  {
    int n,largest;
    n=input_size();
    int a[n];
  input_array(n,a);
   largest=find_largest(n,a);
    output(n,a,largest);
    return 0;
    }
  

  