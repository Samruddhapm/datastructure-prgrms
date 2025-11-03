#include<stdio.h>
int main()
{
 int arr[50],i,l,pos;
printf("Enter the array limit\n");
scanf("%d",&l);
printf("Enter the array elements\n");
for(i=0;i<l;i++)
{
scanf("%d",&arr[i]);
}
printf("inserted array\n");
for(i=0;i<l;i++)
{
printf(" %d ",arr[i]);
}
printf("\n");
printf("Enter the position to delete\n");
scanf("%d",&pos);
for(i=pos;i<l-1;i++)
{
arr[i]=arr[i+1];
}
l--;
printf("Deleted array\n");
for(i=0;i<l;i++)
{
printf(" %d ",arr[i]);
}
return(0);
}

