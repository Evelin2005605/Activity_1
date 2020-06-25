#include<stdio.h>
int main()
{
int a[10],sum=0,i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("Sum is %d",sum);
}
