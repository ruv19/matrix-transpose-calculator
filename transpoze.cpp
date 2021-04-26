#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
	printf("kare matrisin tipini giriniz:\n");
	int n,i,j,top=0;
	scanf("%d",&n);
	int a[n][n],b[n][n];
	printf("\n matrisin elemanlarini giriniz:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" a[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n matrisin transpozesi:\n");
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
