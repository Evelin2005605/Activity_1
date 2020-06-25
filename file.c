#include<stdio.h>
int main()
{
int a[10],sum=0,i,n;
int average,max=0; 
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
if(a[i]>max)
{
  max=a[i];
}
}
average=sum/n;
printf("Sum is %d and average is %d",sum,average);
printf("\nMaximum number is %d",max);
}
