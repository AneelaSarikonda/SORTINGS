#include<stdio.h>
void merge(int *,int ,int,int);
void mergesort(int a[],int lb,int ub)
{
int mid;
//printf("%d%d",lb,ub);
//printf("hii");
if(lb<ub)
{
mid=(lb+ub)/2;
mergesort(a,lb,mid);
mergesort(a,mid+1,ub);
merge(a,lb,mid,ub);
//printf("This is merge function:\n");
}
}

void merge(int a[],int lb,int mid,int ub)
{
int i,j,k,b[20];
i=lb;j=mid+1;k=lb;
while(i<=mid && j<=ub)
{
if(a[i]<=a[j])
{
b[k]=a[i];
i++;
}
else
{
b[k]=a[j];
j++;
}
k++;
}

if(i>mid)
{
while(j<=ub)
{
b[k]=a[j];
j++;k++;
}
}

else
{
while(i<=mid)
{
b[k]=a[i];
i++;k++;
}
}
for(k=lb;k<=ub;k++)
{
a[k]=b[k];
}
/*for(k=lb;k<=ub;k++)
{
printf("%d\t",a[k]);
}*/
}
