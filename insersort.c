#include<stdio.h>
int main()
{
int a[10];
int n;
int i,j,key;
printf("enter no:of elemnts in the array:\n");
scanf("%d",&n);
printf("enter elemnts of the array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
	key=a[i];
	j=i-1;
   
	while(j>=0&&a[j]>key)
	{
          a[j+1]=a[j];
		j=j-1;
	}
  a[j+1]=key;

}
printf("Array after sorting:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
}

