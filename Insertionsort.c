/*insertion sort*/
#include<stdio.h>
int main()
{
	int i,j,n,t,a[10];
	printf("enter the size of array :");
    scanf("%d",&n);
    printf("enter array elements :");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    	t=a[i];
    	j=i;
	    while(j>0&&t<a[j-1])
	    {
		   a[j]=a[j-1];
		   j=j-1;
	    }
	    a[j]=t;
    }
	printf("elements after sorting are :\n ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}