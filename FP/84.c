#include	<stdio.h>
int
main(void)
{
	int	saldo,
		a,
		b,
		c,
		d;
	printf("Masukkan saldo awal anda > Rp");
	scanf("%d",&saldo);
	if(saldo>1000000)
	{
		a=saldo%10;
		b=saldo%100;
		b=b/10;
		c=saldo%1000;
		c=c/100;
		d=saldo%10000;
		d=d/1000;
		if(a*b*c*d==0 && a+b+c+d==8 || a*b*c*d>10 && a+b+c+d==8)
		{
			printf("Tipe akun anda adalah akun spesial hoki emas");
		}
		else if(a+b+c+d==8)
		{
			printf("Tipe akun anda adalah akun spesial hoki");
		}
		else if(a*b*c*d==0 || a*b*c*d>10)
		{
			printf("Tipe akun anda adalah akun spesial emas");
		}
		else
		{
			printf("Tipe akun anda adalah akun spesial normal");
		}
	}
	else if(saldo>500000 && saldo<=1000000)
	{
		printf("Tipe akun anda adalah akun mahasiswa");
	}
	else if(saldo>0 && saldo<=500000)
	{
		printf("Tipe akun anda adalah tipe akun bocah");
	}
	else
	{
		printf("Tipe akun anda adalah tipe kaum terpinggirkan");
	}
	return (0);
}
