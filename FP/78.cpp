#include <iostream>
#include<stdio.h>
#include<math.h>
float determinant(float [][25], float);
void cofactor(float [][25], float);
void transpose(float [][25], float [][25], float);
int main()
{
	float a[25][25], k, d;
	int i, j;
    printf("Masukkan Ordo Matriks : ");
    scanf("%f", &k);
    printf("Masukkan elemen dari Matriks %.0fX%.0f : \n", k, k);
    for (i = 0;i < k; i++)
    {
    	for (j = 0;j < k; j++)
     	{
     		scanf("%f", &a[i][j]);
     	}
    }
    d = determinant(a, k);
    printf("\n\nDeterminannya adalah : %f", d);
    if (d == 0) printf("\n\n\nTidak bisa di invers kan\n");
    else cofactor(a, k);
    return 0;
}

//UNTUK NYARI DETERMINAN
float determinant(float a[25][25], float k)
{
	float s = 1, det = 0, b[25][25];
    int i, j, m, n, c;
    if (k == 1)
    {
		return (a[0][0]);
    }
    else
    {
    	det = 0;
     	for (c = 0; c < k; c++)
     	{
     		m = 0;
     		n = 0;
     		for (i = 0;i < k; i++)
     		{
     			for (j = 0 ;j < k; j++)
     			{
     				b[i][j] = 0;
     				if (i != 0 && j != c)
     				{
     					b[m][n] = a[i][j];
     					if (n < (k - 2)) n++;
     					else
     					{
     						n = 0;
     						m++;
     					}
     				}
     			}
     		}
     		det = det + s * (a[0][c] * determinant(b, k - 1));
     		s = -1 * s;
     	}
	}
    return (det);
}

//UNTUK NYARI KOFAKTOR
void cofactor(float num[25][25], float f)
{
	float b[25][25], fac[25][25];
	int p, q, m, n, i, j;
    for (q = 0;q < f; q++)
    {
    	for (p = 0;p < f; p++)
     	{
     		m = 0;
     		n = 0;
     		for (i = 0;i < f; i++)
     		{
     			for (j = 0;j < f; j++)
     			{
     				if (i != q && j != p)
     				{
     					b[m][n] = num[i][j];
     					if (n < (f - 2)) n++;
     					else
     					{
     						n = 0;
     						m++;
     					}
     				}
     			}
     		}
     		fac[q][p] = pow(-1, q + p) * determinant(b, f - 1);
     	}
    }
    transpose(num, fac, f);
}

//UNTUK NYARI TRANSPOSE
void transpose(float num[25][25], float fac[25][25], float r)
{
	int i, j;
    float b[25][25], inverse[25][25], d;
    for (i = 0;i < r; i++)
    {
    	for (j = 0;j < r; j++)
     	{
     		b[i][j] = fac[j][i];
     	}
    }
    d = determinant(num, r);
    for (i = 0;i < r; i++)
    {
    	for (j = 0;j < r; j++)
     	{
     		inverse[i][j] = b[i][j] / d;
     	}
    }
    printf("\n\n\nKofaktornya adalah : \n\n");
    for (i = 0;i < r; i++)
    {
     	for (j = 0;j < r; j++)
     	{
     		printf("%f\t", fac[i][j]);
     	}
     	printf("\n");
    }
    printf("\n\n\nAdjointnya adalah : \n\n");
    for (i = 0;i < r; i++)
    {
     	for (j = 0;j < r; j++)
     	{
     		printf("%f\t", b[i][j]);
     	}
     	printf("\n");
    }
    printf("\n\n\nInversnya adalah : \n\n");
    for (i = 0;i < r; i++)
    {
     	for (j = 0;j < r; j++)
     	{
     		printf("%f\t", inverse[i][j]);
     	}
     	printf("\n");
    }
}
