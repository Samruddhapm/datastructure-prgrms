#include<stdio.h>
void main()
{
int arr1[20],arr2[25],arr3[45],i,l1,l2,l3,k,j,temp;
printf("Enter the limit of first array\n");
scanf("%d",&l1);
printf("Enter the limit of second array\n");
scanf("%d",&l2);
printf("Enter the elements of 1st array\n");
for(i=0;i<l1;i++)
{
scanf("%d",&arr1[i]);
arr3[i]=arr1[i];
}
k=l1;
printf("Enter the elements of 2nd array\n");
for(i=0;i<l2;i++)
{
scanf("%d",&arr2[i]);
arr3[k]=arr2[i];
k++;
}
l3=l1+l2;
printf("Merged array\n");
for(i=0;i<l3;i++)
{
printf("%d  ",arr3[i]);
}
for(i=0;i<l3-1;i++)
{
for(j=0;j<l3-i-1;j++)
{
if(arr3[j]>arr3[j+1])
{
temp=arr3[j];
arr3[j]=arr3[j+1];
arr3[j+1]=temp;
}
}
}
printf("sorted in ascending order\n");
for(i=0;i<l3;i++)
{
printf("%d  ",arr3[i]);
}
}

