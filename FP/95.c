/*Program ini berfungsi untuk menghitung Biaya Rekening PDAM
 */
 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int cari_pemakaian(char kode[],int meter);
int cari_ukuran_meter(double sewa_meter);
int cari_pajak(int nilai_sewa_meter);


//Main
int main(void){
	system("cls");
	char kode_tarif[100];
	int hasil_pemakaian,nilai_pemakaian,hasil_sewa_meter,hasil_pajak,jumlah;
	double ukuran_meter,pemakaian,sebelum,sesudah;	
	
	printf("Kode Tarif:\n-1\t-2A\t-2B\t-3A\n-3B\t-3C\t-4A\t-4B\n-4C\t-4D\t-5\n");
	printf("Ukuran Meter:\n-0.5\t-0.75\t-1\t-1.5\n-2\t-3\t-4\t-6\n-8\t-10\t-12\t-16\n\n");
	printf("Masukkan Kode Tarif\t\t: ");
	scanf("%s",kode_tarif);getchar();
	if(strcmp(kode_tarif,"1")==0||strcmp(kode_tarif,"2A")==0||strcmp(kode_tarif,"2B")==0||strcmp(kode_tarif,"3A")==0||strcmp(kode_tarif,"3B")==0||strcmp(kode_tarif,"3C")==0||strcmp(kode_tarif,"4A")==0||strcmp(kode_tarif,"4B")==0||strcmp(kode_tarif,"4C")==0||strcmp(kode_tarif,"4D")==0||strcmp(kode_tarif,"5")==0){
		printf("Meteran Pada Bulan Sebelumnya\t: " );
		scanf("%lf",&sebelum);getchar();
		printf("Meteran Pada Bulan Sekarang\t: ");
		scanf("%lf",&sesudah);getchar();
		pemakaian=sesudah-sebelum;
		if(pemakaian>=0){
			printf("Masukkan Ukuran Meter\t\t: " );
			scanf("%lf",&ukuran_meter); getchar();
			if(ukuran_meter==0.5||ukuran_meter==0.75||ukuran_meter==1||ukuran_meter==1.5||ukuran_meter==1||ukuran_meter==2||ukuran_meter==3||ukuran_meter==4||ukuran_meter==6||ukuran_meter==8||ukuran_meter==10||ukuran_meter==12||ukuran_meter==16){
				nilai_pemakaian=round(pemakaian);
				hasil_pemakaian=cari_pemakaian(kode_tarif,pemakaian);
				printf("\nBiaya Pemakaian\t\t= Rp %d\n",hasil_pemakaian);
				hasil_sewa_meter=cari_ukuran_meter(ukuran_meter);
				printf("Biaya Sewa Meter\t= Rp %d\n",hasil_sewa_meter);
				hasil_pajak=cari_pajak(hasil_sewa_meter);
				printf("PPN Sewa Meter\t\t= Rp %d\n",hasil_pajak);
				jumlah=hasil_pemakaian+hasil_sewa_meter+hasil_pajak;
				printf("Jumlah Tagihan\t\t= Rp %d\n",jumlah);
				printf("\nPERINGATAN\n");
				printf("Jika terlambat membayar maka akan dikenakan denda\n");
				
			}
			else{
				printf("WRONG\n");
			}
		}
		else{
				printf("WRONG\n");
		}
	}
	else{
		printf("WRONG\n");
	}
}

//Hitung Biaya Air
int cari_pemakaian(char kode[],int meter){
	int jumlah_pemakaian;
	if(strcmp(kode,"1")==0){
		jumlah_pemakaian=0;
		if(meter>=0&&meter<=10){
			jumlah_pemakaian=600*10;
		}
		else if(meter>=11){
			jumlah_pemakaian=meter*600;
		}
	}
	else if(strcmp(kode,"2A")==0){
		jumlah_pemakaian=0;
		if(meter>=0){
			if(meter<=10){jumlah_pemakaian=350*10;}
			else{jumlah_pemakaian=jumlah_pemakaian+350*10;}
		}
		if(meter>=11){
			if(meter<=20){jumlah_pemakaian=jumlah_pemakaian+((meter-10)*600);}
			else{jumlah_pemakaian=jumlah_pemakaian+600*10;}
		}
		if(meter>=21){
			if(meter<=30){jumlah_pemakaian=jumlah_pemakaian+((meter-20)*900);}
			else{jumlah_pemakaian=jumlah_pemakaian+900*10;}
		}
		if(meter>=31){
			jumlah_pemakaian=jumlah_pemakaian+((meter-30)*1800);
		}
	}
	else if(strcmp(kode,"2B")==0){
		jumlah_pemakaian=0;
		if(meter>=0){
			if(meter<=10){jumlah_pemakaian=500*10;}
			else{jumlah_pemakaian=jumlah_pemakaian+500*10;}
		}
		if(meter>=11){
			if(meter<=20){jumlah_pemakaian=jumlah_pemakaian+((meter-10)*1000);}
			else{jumlah_pemakaian=jumlah_pemakaian+1000*10;}
		}
		if(meter>=21){
			jumlah_pemakaian=jumlah_pemakaian+((meter-20)*2250);
		}
	}
	else if(strcmp(kode,"3B")==0){
		jumlah_pemakaian=0;
		if(meter>=0){
			if(meter<=10){jumlah_pemakaian=1500*10;}
			else{jumlah_pemakaian=jumlah_pemakaian+1500*10;}
		}
		if(meter>=11){
			if(meter<=20){jumlah_pemakaian=jumlah_pemakaian+((meter-10)*3500);}
			else{jumlah_pemakaian=jumlah_pemakaian+3500*10;}
		}
		if(meter>=21){
			jumlah_pemakaian=jumlah_pemakaian+((meter-20)*6000);
		}
	}
	else if(strcmp(kode,"3C")==0){
		jumlah_pemakaian=0;
		if(meter>=0){
			if(meter<=10){jumlah_pemakaian=2300*10;}
			else{jumlah_pemakaian=jumlah_pemakaian+2300*10;}
		}
		if(meter>=11){
			if(meter<=20){jumlah_pemakaian=jumlah_pemakaian+((meter-10)*4000);}
			else{jumlah_pemakaian=jumlah_pemakaian+4000*10;}
		}
		if(meter>=21){
			jumlah_pemakaian=jumlah_pemakaian+((meter-20)*5500);
		}
	}
	else if(strcmp(kode,"4A")==0){
		jumlah_pemakaian=0;
		if(meter>=0){
			if(meter<=10){jumlah_pemakaian=1000*10;}
			else{jumlah_pemakaian=jumlah_pemakaian+1000*10;}
		}
		if(meter>=11){
			if(meter<=20){jumlah_pemakaian=jumlah_pemakaian+((meter-10)*1500);}
			else{jumlah_pemakaian=jumlah_pemakaian+1500*10;}
		}
		if(meter>=21){
			jumlah_pemakaian=jumlah_pemakaian+((meter-20)*2500);
		}
	}
	else if(strcmp(kode,"4B")==0){
		jumlah_pemakaian=0;
		if(meter>=0){
			if(meter<=10){jumlah_pemakaian=1500*10;}
			else{jumlah_pemakaian=jumlah_pemakaian+1500*10;}
		}
		if(meter>=11){
			if(meter<=20){jumlah_pemakaian=jumlah_pemakaian+((meter-10)*2200);}
			else{jumlah_pemakaian=jumlah_pemakaian+2200*10;}
		}
		if(meter>=21){
			jumlah_pemakaian=jumlah_pemakaian+((meter-20)*3500);
		}
	}
	else if(strcmp(kode,"4C")==0){
		jumlah_pemakaian=0;
		if(meter>=0){
			if(meter<=10){jumlah_pemakaian=4000*10;}
			else{jumlah_pemakaian=jumlah_pemakaian+4000*10;}
		}
		if(meter>=11){
			if(meter<=20){jumlah_pemakaian=jumlah_pemakaian+((meter-10)*6000);}
			else{jumlah_pemakaian=jumlah_pemakaian+6000*10;}
		}
		if(meter>=21){
			jumlah_pemakaian=jumlah_pemakaian+((meter-20)*7500);
		}
	}
	else if(strcmp(kode,"4D")==0){
		jumlah_pemakaian=0;
		if(meter>=0){
			if(meter<=10){jumlah_pemakaian=6000*10;}
			else{jumlah_pemakaian=jumlah_pemakaian+6000*10;}
		}
		if(meter>=11){
			if(meter<=20){jumlah_pemakaian=jumlah_pemakaian+((meter-10)*8000);}
			else{jumlah_pemakaian=jumlah_pemakaian+8000*10;}
		}
		if(meter>=21){
			jumlah_pemakaian=jumlah_pemakaian+((meter-20)*9500);
		}
	}
	else if(strcmp(kode,"5")==0){	
		jumlah_pemakaian=0;
		if(meter>=0){
			if(meter<=10){jumlah_pemakaian=10000*10;}
			else{jumlah_pemakaian=jumlah_pemakaian+10000*10;}
		}
		if(meter>=11){
			jumlah_pemakaian=jumlah_pemakaian+((meter-10)*10000);
		}
	}
	return jumlah_pemakaian;	
}

//Hitung Biaya Ukuran Meter
int cari_ukuran_meter(double sewa_meter){
	if(sewa_meter==0.5){
		return 2400;
	}
	else if(sewa_meter==0.75){
		return 2400;
	}
    else if(sewa_meter==1){
		return 8000;
	}
    else if(sewa_meter==1.5){
		return 14000;
	}
    else if(sewa_meter==2){
		return 19000;
	}
    else if(sewa_meter==3){
		return 26500;
	}
    else if(sewa_meter==4){
		return 40000;
	}
    else if(sewa_meter==6){
		return 60000;
	}
    else if(sewa_meter==8){
		return 75000;
	}
    else if(sewa_meter==10){
		return 100000;
	}
    else if(sewa_meter==12){
		return 125000;
	}
    else if(sewa_meter==16){
		return 175000;
	}
}

//Hitung PPN
int cari_pajak(int nilai_sewa_meter){
	return nilai_sewa_meter/10;
}
