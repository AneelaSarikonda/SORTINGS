#include<stdio.h>
#include"main.h"
int main()
{
int i,j,n;
printf("enter size of array:\n");
scanf("%d",&n);
int a[n],opt;
char ch;
printf("Enter y or n:\n");
scanf("\n%c",&ch);
printf("enter elements into array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
while(ch=='y' || ch=='n')
{
printf("enter an option for sorting: 1.insertion sort\n 2.selection sort\n 3.bubble sort\n 4.merge sort\n 5.quick sort\n");
scanf("%d\n",&opt);
switch(opt)
{
case 1:insertionsort(a,n);break;
case 2:selectionsort(a,n);break;
case 3:bubblesort(a,n);break;
case 4:mergesort(a,0,n-1);break;
case 5:quicksort(a,0,n-1);break;
}
printf("enter y or n:\n");
scanf("\n%c",&ch);
}
}
