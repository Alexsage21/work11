#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

#define N 10

int main()
{
	//Z1
	float temp;
	float A[N], s = 0;
	for (int i = 0; i < N; i++)
	{
		printf("a[%d]=", i+1);
		scanf("%f", &temp);
		A[i] = temp;
	}
	puts("_______________________");
	for (int i = 0; i < N; i++)
	{
		printf("|%3d|%11f|%5d|\n", i+1, A[i], (int)ceil(A[i]));
		A[i] = ceil(A[i]);
		s += A[i];
	}
	puts("-----------------------");
	printf("\n%f", s/10);
	//Z2
	float B[100], y, sp = 0, spo = 0;
	int k = 0, ko = 0;
	for (int x = 0; x < 100; x++)
	{
		y = x * x + 2 * 3.14 * cos(3.14 * x);
		B[x] = y;
		if (B[x] > 0)
		{
			sp += B[x];
			k++;
		}
		else
		{
			spo += B[x];
			ko++;
		}
	}
	printf("\nB, %f, %f, %d, %d, %f\n", sp, spo, k, ko, sp/k);
	//Z3
	float C[N];
	float minim = 100, suel = 0;
	int idx = 0;
	for (int i = 0; i < N; i++)
	{
		printf("C[%d]=", i + 1);
		scanf("%f", &temp);
		C[i] = temp;
		if (fabs(C[i]) < minim)
		{
			minim = fabs(C[i]);
			idx = i+1;
		}

	}
	for (int i = idx; i < N; i++)
	{
		suel += C[i];
	}
	printf("\n%f", suel);
}