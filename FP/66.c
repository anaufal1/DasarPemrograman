#include<stdio.h>
#include<stdlib.h>

void menu_awal(void);
void menu_1(void);
void menu_1_1(void);
void menu_1_2(void);
void menu_1_3(void);
void menu_1_4(void);
void menu_2(void);
void menu_2_1(void);
void menu_2_2(void);
void menu_2_3(void);
void menu_2_4(void);
void menu_2_5(void);
void menu_2_6(void);
void menu_2_7(void);
void menu_2_8(void);
void menu_2_9(void);
void menu_2_10(void);
void menu_3(void);

int main(void){
	char choice,yes_no,inside;
	do{
		system("CLS");
		menu_awal();
		choice=getche();
		if(choice=='1'){
			system("CLS");
			menu_1();
			inside=getche();
			if(inside=='1'){
				system("CLS");
				menu_1_1();
			}
			else if(inside=='2'){
				system("CLS");
				menu_1_2();
			}
			else if(inside=='3'){
				system("CLS");
				menu_1_3();
			}
			else if(inside=='4'){
				system("CLS");
				menu_1_4();
			}
			else{
				system("CLS");
				printf("\nGo Home Kid, You're Drunk\n");
			}
		}
		else if(choice=='2'){
			system("CLS");
			menu_2();
			inside=getche();
			if(inside=='1'){
				system("CLS");
				menu_2_1();
			}
			else if(inside=='2'){
				system("CLS");
				menu_2_2();
			}
			else if(inside=='3'){
				system("CLS");
				menu_2_3();
			}
			else if(inside=='4'){
				system("CLS");
				menu_2_4();
			}
			else if(inside=='5'){
				system("CLS");
				menu_2_5();
			}
			else if(inside=='6'){
				system("CLS");
				menu_2_6();
			}
			else if(inside=='7'){
				system("CLS");
				menu_2_7();
			}
			else if(inside=='8'){
				system("CLS");
				menu_2_8();
			}
			else if(inside=='9'){
				system("CLS");
				menu_2_9();
			}
			else if(inside=='0'){
				system("CLS");
				menu_2_10();
			}
			else{
				system("CLS");
				printf("\nGo Home Kid, You're Drunk\n");
			}
		}
		else if(choice=='3'){
			system("CLS");
			menu_3();
		}
		else{
			system("CLS");
			printf("\nGo Home Kid, You're Drunk\n");
		}
		printf("\nIngin Kembali Ke Menu Awal? (y/n) : ");
		scanf("%c",&yes_no);getchar();
	}while(yes_no=='y');
	return 69;
}
void menu_awal(){
	printf("\nMENU AWAL\n\n");
	printf("1. Life Plan yang rutin dilakukan\n");
	printf("2. Life Plan yang sekali tujuan\n");
	printf("3. Biodata Diri\n");
	printf("\nPilih Menu Yang Anda Inginkan : ");
}
void menu_1(){
	printf("\nSILAHKAN MEMILIH MENU YANG ANDA INGINKAN\n\n");
	printf("1. Harian\n");
	printf("2. Mingguan\n");
	printf("3. Bulanan\n");
	printf("4. Tahunan\n");
	printf("\nPilih Menu Yang Anda Inginkan : ");
}
void menu_1_1(){
	printf("\nKegiatan Yang Ingin Dilakukan Perhari\n\n");
	printf("1.  Belajar pelajaran umum 1 jam perhari\n");
	printf("2.  Belajar Game Developing 1 jam perhari\n");
	printf("3.  Sholat wajib 5 waktu (diusahakan tepat waktu)\n");
	printf("4.  Sholat sunnah (diusahakan)\n");
	printf("5.  Menyapu kamar kos\n");
	printf("6.  Menyuci pakaian kotor\n");
	printf("7.  Mengabari orang tua\n");
}
void menu_1_2(){
	printf("\nKegiatan Yang Ingin Dilakukan Perminggu\n\n");
	printf("1.  Membersihkan dan merapikan kamar kos\n");
	printf("2.  Sholat Jum'at (Wajib!)\n");
	printf("3.  Mencari info-info tentang lomba-lomba\n");
	printf("4.  Mencari info-info tentang beasiswa keluar negeri\n");
	printf("5.  Menabung\n");
}
void menu_1_3(){
	printf("\nKegiatan Yang Ingin Dilakukan Perbulan\n\n");
	printf("1.  Pulang ke Probolinggo\n");
	printf("2.  Belanja kebutuhan bulanan\n");
	printf("3.  Mengganti bedcover 2 bulan sekali\n");
}
void menu_1_4(){
	printf("\nKegiatan Yang Ingin Dilakukan Pertahun\n\n");
	printf("1.  Puasa dibulan Ramadhan\n");
	printf("2.  Mengikuti kegiatan event apapun minimal 2 kali setahun\n");
}
void menu_2(){
	printf("\nSILAHKAN MEMILIH MENU YANG ANDA INGINKAN\n\n");
	printf("1.  1 Tahun Kedepan\n");
	printf("2.  2 Tahun Kedepan\n");
	printf("3.  3 Tahun Kedepan\n");
	printf("4.  4 Tahun Kedepan\n");
	printf("5.  5 Tahun Kedepan\n");
	printf("6.  6 Tahun Kedepan\n");
	printf("7.  7 Tahun Kedepan\n");
	printf("8.  8 Tahun Kedepan\n");
	printf("9.  9 Tahun Kedepan\n");
	printf("0.  10 Tahun Kedepan\n");
	printf("\nPilih Menu Yang Anda Inginkan : ");
}
void menu_2_1(){
	printf("\nTujuan dalam 1 Tahun Kedepan\n\n");
	printf("1.  Mengikuti Compfest\n");
	printf("2.  Mengikuti Gemastik\n");
	printf("3.  Mengikuti Imagine Cup\n");
	printf("4.  Mengikuti Perkumpulan Game Developer\n");
	printf("5.  Bertahan di ITS\n");
	printf("6.  Mengikuti event-event tentang Game Dev\n");
	printf("7.  Menjadi panitia Schematics\n");
	printf("8.  Mendapatkan teman-teman untuk membuat game bersama\n");
	printf("9.  Membuat minimal 1 game\n");
}
void menu_2_2(){
	printf("\nTujuan dalam 2 Tahun Kedepan\n\n");
	printf("1.  Memenangkan Compfest\n");
	printf("2.  Memenangkan Gemastik\n");
	printf("3.  Memenangkan lebih dari 2 lomba\n");
	printf("4.  Mendapatkan lebih dari 5 Sertifikasi\n");
	printf("5.  Mengambil RMK IGS\n");
	printf("6.  Memulai Startup Game Developing\n");
	printf("7.  Mendapat beasiswa keluar negeri\n");
	printf("8.  Membeli Smartphone dengan uang sendiri\n");
	printf("9.  Memiliki minimal 3 game\n");
	printf("10. Membuatkan website untuk startup game");
}
void menu_2_3(){
	printf("\nTujuan dalam 3 Tahun Kedepan\n\n");
	printf("1.  Mencari teman-teman untuk mengembangkan startup game\n");
	printf("2.  Mewakili Indonesia dalam Imagine Cup\n");
	printf("3.  Membeli Laptop High-End dengan uang sendiri\n");
	printf("4.  Mengerjakan proyek-proyek game developing\n");
	printf("5.  Mendapat pekerjaan sampingan\n");
	printf("6.  Memiliki minimal 5 game\n");
}
void menu_2_4(){
	printf("\nTujuan dalam 4 Tahun Kedepan\n\n");
	printf("1.  Mendapat beasiswa ke luar negeri lagi\n");
	printf("2.  Memiliki minimal 8 game\n");
	printf("3.  Memenangkan Imagine Cup\n");
	printf("4.  Memiliki pekerjaan dengan gaji minimal Rp 3 juta perbulan\n");
	printf("5.  Lulus kuliah dengan IPK diatas 3.50\n");
	printf("6.  Startup harus memberi keuntungan\n");
}
void menu_2_5(){
	printf("\nTujuan dalam 5 Tahun Kedepan\n\n");
	printf("1.  Memiliki banyak teman dan channel dalam bekerja\n");
	printf("2.  Menabung untuk melanjutkan kuliah di luar negeri\n");
	printf("3.  Mendapat tempat tinggal sementara\n");
	printf("4.  Mencari info-info tentang kuliah di luar negeri\n");
	printf("5.  Mencari kerjasama untuk memperluas startup\n");
}
void menu_2_6(){
	printf("\nTujuan dalam 6 Tahun Kedepan\n\n");
	printf("1.  Memiliki tabungan yang cukup untuk kuliah ke luar negeri\n");
	printf("2.  Kuliah diluar negeri jurusan Game Developing\n");
	printf("3.  Melakukan kerja sampingan di perusahaan game developer di luar negeri\n");
	printf("4.  Memiliki penghasilan minimal Rp 8 juta sebulan\n");
}
void menu_2_7(){
	printf("\nTujuan dalam 7 Tahun Kedepan\n\n");
	printf("1.  Mengembangkan startup menjadi sebuah perusahaan tingkat menengah\n");
	printf("2.  Mengembangkan minimal 10 Game\n");
	printf("3.  Memiliki minimal 2 prestasi dalam kuliah di luar negeri\n");
	printf("4.  Bertahan dalam perkuliahan di luar negeri\n");
}
void menu_2_8(){
	printf("\nTujuan dalam 8 Tahun Kedepan\n\n");
	printf("1.  Lulus kuliah dengan IPK 3.50 keatas\n");
	printf("2.  Memperbesar perusahaan game developerku\n");
	printf("3.  Memiliki penghasilan minimal Rp 10 juta sebulan\n");
	printf("4.  Menambah teman kerja untuk memperluas perusahaan\n");
	printf("5.  Menjalin kerjasama dengan perusahaan-perusahaan lain untuk memperbesar perusahaan\n");
	printf("6.  Mendapatkan kawan kerja yang cukup untuk membuat proyek besar\n");
	printf("7.  Membuat proyek game besar\n");
}
void menu_2_9(){
	printf("\nTujuan dalam 9 Tahun Kedepan\n\n");
	printf("1.  Proyek game besar selesai\n");
	printf("2.  Launching Game\n");
	printf("3.  Memantau dan terus memperbaiki kesalahan pada game\n");
	printf("4.  Mencari beasiswa untuk melanjutkan kuliah di luar negeri\n");
}
void menu_2_10(){
	printf("\nTujuan dalam 10 Tahun Kedepan\n\n");
	printf("1.  Memulai proyek game besar lagi\n");
	printf("2.  Melanjutkan kuliah di luar negeri\n");
	printf("3.  Lebih memperbesar perusahaan dan koneksinya\n");
	printf("4.  Memiliki penghasilan diatas Rp 20 juta\n");
	printf("5.  Menikah\n");
}
void menu_3(){
	printf("\nBIODATA\n\n");
	printf("Nama\t\t: Nur Muhammad Husnul Habib Yahya\n");
	printf("TTL\t\t: Probolinggo, 03 Maret 1999\n");
	printf("Departemen\t: S-1 Informatika ITS\n");
	printf("NRP\t\t: 05111740000094\n");
	printf("Motto\t\t: Your Imaginations are Your Future\n");
}
