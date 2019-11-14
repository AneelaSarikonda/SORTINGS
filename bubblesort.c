#include<stdio.h>
int main()
{
int array[10];
int i,j,n,temp;
printf("enter no:of elemnts in the array:\n");
scanf("%d",&n);
printf("enter elements into the array:\n");
for(i=0;i<n;i++)
scanf("%d",&array[i]);
for(i = 0 ; i < n - 1; i++)
{
for(j = 0 ; j < n-i-1; j++)
{
if(array[j] > array[j+1]) 
{
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
} 
printf("Array after sorting:\n");
for(i=0;i<n;i++)
printf("%d\t",array[i]);
printf("\n");
}

