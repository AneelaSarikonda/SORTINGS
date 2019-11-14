#include<stdio.h>
int main()
{
int a[10];
int n;
int i,j,temp,min;
printf("enter no:of elemnts in the array:\n");
scanf("%d",&n);
printf("enter elemnts of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d\t",a[i]);
for(i=0;i<n-1;i++)
{
  min=i;
	for(j=i+1;j<n;j++)
	{
	   if(a[min]>a[j])
		min=j;
	}
    if(min!=i)
	{
	  temp=a[i];
	  a[i]=a[min];
	  a[min]=temp;
	}
}
printf("\n");
printf("Array after sorting:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}

