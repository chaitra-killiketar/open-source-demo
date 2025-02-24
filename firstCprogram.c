#include<stdio.h>
int main()
{
	
int arr[20],duplicate[20],n,i,j;
	printf("how many elements ?");
	scanf("%d",&n);
	printf(" enter %d elements",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
			duplicate[i]=0;
		}
printf("\n the original elements are :");
for(i=0;i<n;i++);

{
   printf("%d\t",arr[i]);
} 
for(i=0;i<n;i++)
{
	for(j=j+1;j<n;j++)
	{
		if(arr[i]== arr[j])
		duplicate[j]=1;
	}
}
printf("\n the elements after removing duplicates :");
	for(i=0;i<n;i++)
	{
		if(duplicate[i]==0)
		printf("%d\t",arr[i]);
	}
2

 return 0;
}






