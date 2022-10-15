#include<stdio.h>
int main()
{
	int n,i,found=0,index;
	float a[20],key;
	printf("ENTER THE NO OF ELEMENTS YOU WANT IN AN ARRAY=");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS =");
	for(i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("ENTER THE ELEMENT TO BE SERACHED=");
	scanf("%f",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			found=1;
			index=i;
			break;
		}
		else
		{
			found=0;
		}
		
	}
	if(found==1)
	{
		index=i;
		printf("%f IS FOUND AT INDEX %d",key,index);
	}
	else
	{
	   printf("ELEMENT IS NOT FOUND");
	}
	return 0;
	
}