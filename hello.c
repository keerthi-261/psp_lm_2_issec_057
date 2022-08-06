// i will write my code here
#include<stdio.h>
void main()
{
  printf("hello world");
  }
#include<stdio.h>
void main()
{int a,b,c;
 printf("enter the value of a,b\n")
   scanf("%d%d",&a,&b);
 c= a+b;
 printf("the sum is %d\n",c);
 }
  #include<stdio.h>
void main()
{
    int a,b,add;
    
 printf("enter the value of a,b\n");
   scanf("%d%d",&a,&b);
 add= a+b;
 printf("the sum of %d and %d is %d\n",a,b,add);
}
#include<stdio.h>
int add(int c,int d)
{ 
    int add =c+ d;
   return add;
}

 int main()
{
    int a,b,sum;
    printf("Enter the values of a,b\n");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("the sum of %d and %d is %d",a,b,sum);
    
}
