#include<stdio.h>
int main()
{
	int a[5],sum=0,i;	float avg;
	printf("Enter array elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	//	sum=sum+a[i];
	}
//	printf("sum=%d",sum);
//	avg=(sum)/5;
//	printf("\nAverage=%.1f",avg);
	for(i=0;i<5;i++)
	{
	
		sum=sum+a[i];
	}
		printf("sum=%d",sum);
		
		
		
	return 0;
}
