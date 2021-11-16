#include <stdio.h>
#include <math.h>

void songuyento(int A[], int n);
int max(int A[], int n);
int min(int A[], int n); 

int main()
{
	int A[100],n;
	do
	{
	printf("Nhap n phan tu mang(0<n<100): ");
	scanf("%d",&n);
	if(n<=0, n>=100) printf("Nhap sai gia tri n, moi nhap lai.\n");	
	}
	while (n<=0, n>=100);
	for(int i=0;i<n;i++)
	{
		printf("A[%d]= ",i);
		scanf("%d", &A[i]);
	}
	songuyento(A, n);
	return 0;  
}

void songuyento(int A[], int n)
{
		int B[100],i,j,nt=0,Max,Min,uocso;
		int x=0,y=0;
	for(i=0;i<n;i++)
	{
		for(uocso=0,j=1;j<=A[i];j++)
		{
		if(A[i]%j==0) uocso++;
		}
		if(uocso==2) //neu la so nguyen to
		{
			B[nt]=A[i];
			nt++;
		}
	}
		nt=nt-1;
		if(nt >=0)
		{
			
		Max= max(B,nt);
		Min= min(B,nt);
		for (int i=0; i<=nt; i++)
		{
			if (B[i]== Max) x++ ;
			if (B[i]== Min) y++ ;
		}
		printf ("%d, %d \n", Max, Min);
		printf ("x=%d \n", x);
		printf ("y=%d", y);
		}
		else 
		{
			printf ("ko co so nguyen to"); 
		}
}
int max(int A[], int n)
{
	int Max, i;
	Max= A[0];
	for (int i=0; i<=n; i++)
	{
		if (Max<A[i]) Max= A[i];
	}
	return Max;
}
int min(int A[], int n)
{
	int Min, i;
	Min= A[0];
	for (int i=0; i<=n; i++)
	{
		if (Min>A[i]) Min= A[i];
	}
	return Min;
}
