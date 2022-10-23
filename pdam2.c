#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BIAYA_ADM 50.000 //berguna agar mempermudah dalam perhitungan total


void header(){
	printf("\t\t\t=========================================================\n");
	printf("\t\t\t======         Program Menghitung Tagihan Air      ======\n");
	printf("\t\t\t---------------------------------------------------------\n");
	printf("\t\t\t|                     PILIH KLASTER                     |\n");
	printf("\t\t\t|                   1. RUMAH TANGGA                     |\n");
	printf("\t\t\t|                   2. USAHA                            |\n");
	printf("\t\t\t=========================================================\n\n");
}
void cover (){
	printf("\t\t\t------------------------------------------------------\n");
    printf("\t\t\t|---------------------NAMA KELOMPOK------------------|\n");
    printf("\t\t\t|====================================================|\n");
    printf("\t\t\t|      Anggota Kelompok:                 NIM:        |\n");
    printf("\t\t\t|>> I Gusti Ayu Esa Sidhi Aksarani    >> 2205551020  |\n");
    printf("\t\t\t|>> Ni Komang Dinda Mayori            >> 2205551034  |\n");
    printf("\t\t\t------------------------------------------------------\n");
}
void pilihan_kelas1(){
	printf("\t\t\t=========================================================\n");
	printf("\t\t\t|                     PILIH KELAS                     |\n");
	printf("\t\t\t|                   1. BERSUBSIDI                     |\n");
	printf("\t\t\t|                   2. TANPA BERSUBSIDI               |\n");
	printf("\t\t\t=========================================================\n\n");
}
void pilihan_kelas2(){
	printf("\t\t\t=========================================================\n");
	printf("\t\t\t|                     PILIH KELAS                     |\n");
	printf("\t\t\t|             1. NIAGA KECIL (lebar berm 0-6,99m)     |\n");
	printf("\t\t\t|             2. NIAGA SEDANG (lebar berm 7-10m)      |\n");
	printf("\t\t\t|             3. NIAGA BESAR (lebar berm > 10m)       |\n");
	printf("\t\t\t=========================================================\n\n");
}
void pilihan_golongan1(){
	printf("\t\t\t=========================================================\n");
	printf("\t\t\t|                     PILIH GOLONGAN                  |\n");
	printf("\t\t\t|                   1. D1 (lebar jalan 0-3,99m)       |\n");
	printf("\t\t\t|                   2. D2 (lebar jalan 4-6,99m)       |\n");
	printf("\t\t\t|                   3. D3 (lebar jalan 7-10m)         |\n");
	printf("\t\t\t|                   4. D4 (lebar jalan >10m)          |\n");
	printf("\t\t\t=========================================================\n\n");
}
void pilihan_golongan2(){
	printf("\t\t\t=========================================================\n");
	printf("\t\t\t|                     PILIH GOLONGAN                  |\n");
	printf("\t\t\t            1. D1 (lebar jalan 0-3,99m)               |\n");
	printf("\t\t\t|           2. D2 (lebar jalan 4-6,99m)               |\n");
	printf("\t\t\t|           3. D3 (lebar jalan 7-10m)                 |\n");
	printf("\t\t\t|           4. D4 (lebar jalan >10m)                  |\n");
	printf("\t\t\t|           5. D5 (rumah sekaligus tempat usaha)      |\n");
	printf("\t\t\t=========================================================\n\n");
}
void daya_listrik(){
printf("\t\t\t=========================================================\n");
	printf("\t\t\t======        		 DAYA LISTRIK 		   ======       \n");
	printf("\t\t\t---------------------------------------------------------\n");
	printf("\t\t\t|                    	 1. 450 VA                      |\n");
	printf("\t\t\t|                    	 2. 900 VA                      |\n");
	printf("\t\t\t=========================================================\n\n");
}
void daya_listrik1(){
	printf("\t\t\t=========================================================\n");
	printf("\t\t\t======        		 DAYA LISTRIK 		   ======       \n");
	printf("\t\t\t -----------KHUSUS UNTUK D5 TERSEDIA PILIHAN-----------\n");
	printf("\t\t\t|                 1. 450 VA                            |\n");
	printf("\t\t\t|                 2. 900 VA                            |\n");
	printf("\t\t\t---------------------------------------------------------\n");
	printf("\t\t\t|                 3. 1300 VA                           |\n");
	printf("\t\t\t|                 4. >1300 VA                          |\n");
	printf("\t\t\t=========================================================\n\n");
}
void daya_listrik2(){
	printf("\t\t\t=========================================================\n");
	printf("\t\t\t======        		 DAYA LISTRIK 		   ======       \n");
	printf("\t\t\t---------------------------------------------------------\n");
	printf("\t\t\t|                    1. 450 VA                            |\n");
	printf("\t\t\t|                    2. 900 VA                            |\n");
	printf("\t\t\t|                    3. 1300 VA                           |\n");
	printf("\t\t\t|                    4. >1300 VA                          |\n");
	printf("\t\t\t=========================================================\n\n");
}
void pemakaian_progresif(){
	printf("\t\t\t=========================================================\n");
	printf("\t\t\t======        	 TINGKAT PEMAKAIAN 		   ======   \n");
	printf("\t\t\t---------------------------------------------------------\n");
	printf("\t\t\t|                    0-10 m^3                            |\n");
	printf("\t\t\t|                    11-20 m^3                           |\n");
	printf("\t\t\t|                    >20 m^3                             |\n");
	printf("\t\t\t=========================================================\n\n");
}

void penutup(){
	printf("\t\t\t=========================================================\n");
	printf("\t\t\t|                     TERIMAKASIH                        |\n");
	printf("\t\t\t|                   SUDAH MENGGUNAKAN                    |\n");
	printf("\t\t\t|        PROGRAM MENGHITUNG TAGIHAN AIR KAMI             |\n");
	printf("\t\t\t=========================================================\n\n");
}

void pengulangan(){
	printf("=========================================================\n");
	printf("|         INGIN MENGGUNAKAN PROGRAM INI LAGI?            |\n");
	printf("|                       IYA (y)                          |\n");
	printf("|                      TIDAK (t)                         |\n");
	printf("=========================================================\n\n");
}



int validasi(){  //validasi untuk pilihan menu klaster dan kelas klaster 1
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka<=0 || angka > 2 || karakter != '\n'){
        fflush(stdin);
        printf("\t Input invalid! \n Masukkan menu yang benar : ");
        return validasi();
    } else {
        return angka;
    }
}

int validasi2(){  //validasi untuk pilihan menu golongan klaster 2
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka<=0 || angka > 3 || karakter != '\n'){
        fflush(stdin);
        printf("\t Input invalid! \n Masukkan menu yang benar : ");
        return validasi2();
    } else {
        return angka;
    }
}

int validasi3(){  //validasi unutk golongan 1 pada klaster 1
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka<=0 || angka > 4 || karakter != '\n'){
        fflush(stdin);
        printf("\t Input invalid! \n Masukkan menu yang benar : ");
        return validasi3();
    } else {
        return angka;
    }
}

int validasi4(){    //validasi untuk daya listrik kelas 2 klaster 1 dan klaster 2
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka < 1 || angka > 4 || karakter != '\n'){
        fflush(stdin);
        printf("\t Input invalid! \n Masukkan data yang benar : ");
        return validasi4();
    } else {
        return angka;
    }
}

int validasi5(){  //validasi untuk golongan 2 pada klaster 1
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka<=0 || angka > 5 || karakter != '\n'){
        fflush(stdin);
        printf("\t Input invalid! \n Masukkan menu yang benar : ");
        return validasi5();
    } else {
        return angka;
    }
}

int validasi6(){  //validasi untuk tingkat pemakaian progresif
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka< 0 || karakter != '\n'){
        fflush(stdin);
        printf("\t\tInput invalid! Masukkan menu yang benar : ");
        return validasi6();
    } else {
        return angka;
    }
}

int validasi_listrik_subsidi(){   //validasi untuk daya listrik kelas 1 klaster 1
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka < 1 || angka > 2 || karakter != '\n'){
        fflush(stdin);
        printf("\t Input invalid! \n Masukkan data yang benar : ");
        return validasi_listrik_subsidi();
    } else {
        return angka;
    }
}

int validasi_bulan(){   //validasi untuk bulan pada pengecekan denda
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka < 1 || angka > 12 || karakter != '\n'){
        fflush(stdin);
        printf("\t Input invalid! \n Masukkan data yang benar : ");
        return validasi_bulan();
    } else {
        return angka;
    }
}

int validasi_tanggal(){   //validasi untuk tanggal pada pengecekan denda
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka < 1 || angka > 31 || karakter != '\n'){
        fflush(stdin);
        printf("\t Input invalid! \n Masukkan data yang benar : ");
        return validasi_tanggal();
    } else {
        return angka;
    }
}

int validasi_tahun(){   //validasi untuk tahun pada pengecekan denda
	int angka;
    char karakter;
    if (scanf("%d%c",&angka,&karakter)!= 2 || angka < 2000 || angka > 2022 || karakter != '\n'){
        fflush(stdin);
        printf("\t Input invalid! \n Masukkan data yang benar : ");
        return validasi_tahun();
    } else {
        return angka;
    }
}




int main() {
	
	cover ();
	system("pause");
	system ("cls"); 

int klaster, kelas, golongan, listrik, pemakaian, bulan_b, bulan_s, tgl;
float tarif, bpm, denda, total_biaya, air_s, air_l;
int d1, d2, m1, m2, y1, y2, total;
char input;
char kode[5];
char bangunan[15];

pemakaian = air_s - air_l;

	do {

	header ();
	
	
	printf("Klaster : ");
    klaster = validasi ();
    
    system ("cls"); 
    
    if (klaster == 1) {
    	strcpy(bangunan, "Rumah Tangga");
        
        pilihan_kelas1 ();
        printf("Kelas :");
        kelas = validasi ();
        
        system ("cls");
        
        bpm = 10.00;
		 
        if(kelas == 1) {
        	pilihan_golongan1();
        	printf("Golongan : ");
        	golongan = validasi3();
        
        	system ("cls"); 
        	daya_listrik();
            printf("Masukan Daya Listrik : ");
            listrik = validasi_listrik_subsidi();
            
            system ("cls"); 
            
            if (golongan == 1) {
            	if (listrik == 1) {
            		strcpy(kode, "D1-1");
            		printf(" Rumah Tangga Kelas A1 dan Golongan D1-1\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();
                
                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 1.780;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 2.060;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 5.880;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
            	} 
				else if ( listrik == 2) {
					strcpy(kode, "D1-2");
                    printf("Golongan Rumah Tangga A1 dan Golongan D1-2\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 2.060;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 2.340;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 5.940;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
                }
    		} 
			else if (golongan == 2) {
            	if (listrik == 1) {
            		strcpy(kode, "D2-1");
            		printf(" Rumah Tangga Kelas A2 dan Golongan D2-1\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 2.340;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 2.620;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 6.000;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
            	} else if ( listrik == 2) {
            		strcpy(kode, "D2-2");
                    printf("Golongan Rumah Tangga A2 dan Golongan D2-2\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 2.060;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 2.340;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 5.940;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
                }
    		} 
			else if (golongan == 3) {
            	if (listrik == 1) {
            		strcpy(kode, "D3-1");
            		printf(" Rumah Tangga Kelas A3 dan Golongan D3-1\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 2.900;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 3.180;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 6.120;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
            	} else if ( listrik == 2) {
            		strcpy(kode, "D3-2");
                    printf("Golongan Rumah Tangga A3 dan Golongan D3-2\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 3.180;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 3.460;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 6.180;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
                }
    		} 
			else if (golongan == 4) {
            	if (listrik == 1) {
            		strcpy(kode, "D4-1");
            		printf(" Rumah Tangga Kelas A4 dan Golongan D4-1\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 3.460;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 3.740;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 6.240;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
            	} else if ( listrik == 2) {
            		strcpy(kode, "D4-2");
                    printf("Rumah Tangga A4 dan Golongan D4-2\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 3.740;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 4.020;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 6.300;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
                }
    		} 
			else {
    			printf("Pilihan Anda Tidak Tersedia");
			}
		} 
		else if(kelas == 2) {
        	pilihan_golongan2();
        	printf("Golongan : ");
        	golongan = validasi5();
        	
        	system ("cls");
        	daya_listrik1();
            printf("Masukan Daya Listrik : ");
            listrik = validasi4();
            
            system ("cls");
            
            if (golongan == 1) {
            	if (listrik == 3) {
            		strcpy(kode, "D1-3");
            		printf("Rumah Tangga Kelas A1 dan Golongan D1-3\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 6.340;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 9.200;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 9.600;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
            	} else if ( listrik = 4) {
            		strcpy(kode, "D1-4");
                    printf("Golongan Rumah Tangga A1 dan Golongan D1-4\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 6.420;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 9.350;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 9.650;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
                }
    		} 
			else if (golongan == 2) {
            	if (listrik == 3) {
            		strcpy(kode, "D2-3");
            		printf(" Rumah Tangga Kelas A2 dan Golongan D2-3\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 6.490;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 9.500;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 9.800;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
            	} else if ( listrik = 4) {
            		strcpy(kode, "D2-4");
                    printf("Golongan Rumah Tangga A2 dan Golongan D2-4\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 6.570;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 9.650;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 9.950;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
                }
    		} 
			else if (golongan == 3) {
            	if (listrik == 3) {
            		strcpy(kode, "D3-3");
            		printf(" Rumah Tangga Kelas A3 dan Golongan D3-3\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 6.640;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 9.800;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 10.100;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
            	} else if ( listrik = 4) {
            		strcpy(kode, "D3-4");
                    printf("Golongan Rumah Tangga A3 dan Golongan D3-4\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 6.720;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 9.950;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 10.250;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
                }
    		} 
			else if (golongan == 4) {
            	if (listrik == 3) {
            		strcpy(kode, "D4-1");
            		printf(" Rumah Tangga Kelas A4 dan Golongan D4-3\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 6.790;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 10.100;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 10.400;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
            	} else if ( listrik = 4) {
            		strcpy(kode, "D4-2");
                    printf("Golongan Rumah Tangga A4 dan Golongan D4-4\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 6.870;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 10.250;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 10.550;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
                }
    		} 
			else if (golongan == 5) {
            	if (listrik == 1) {
            		strcpy(kode, "D5-1");
            		printf(" Rumah Tangga Kelas B dan Golongan D5-1\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 6.940;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 10.400;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 10.700;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
            	} else if (listrik == 2 ) {
            		strcpy(kode, "D5-2");
                    printf("Golongan Rumah Tangga B dan Golongan D5-2\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 7.020;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 10.550;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 10.850;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
                } else if ( listrik == 3) {
                	strcpy(kode, "D5-3");
                    printf("Golongan Rumah Tangga B dan Golongan D5-3\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 7.090;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 10.700;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 11.000;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
                } else if ( listrik = 4) {
                	strcpy(kode, "D5-4");
                    printf("Golongan Rumah Tangga B dan Golongan D5-4\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if ( pemakaian <=10 && pemakaian > 0 ) {
                        tarif = pemakaian * 7.170;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if ( pemakaian <=20 && pemakaian > 11 ) {
                            tarif = pemakaian * 10.850;
                            printf("Tarif : %.3f\n", tarif);
                    } else if ( pemakaian > 20 ) {
                            tarif = pemakaian * 11.150;
                            printf("Tarif : %.3f\n", tarif);
                    }else {
                            printf("Input Salah");
                    }
                } else {
            		printf("Input yang anda masukan tidak ada\n");
        		}
    		} 
			else {
    			printf("Pilihan Anda Tidak Tersedia\n");
			}
		}
	} 
	else if (klaster == 2) {
		strcpy(bangunan, "Usaha");
		pilihan_kelas2();
        printf("Pilih Kelas :");
        golongan = validasi2();
        
        system ("cls");
        
           bpm = 20.00;
           
            if (golongan == 1){
            	daya_listrik2();
                printf("Masukan daya listrik :");
                listrik = validasi4();

                 if (listrik == 1){
                	strcpy(kode, "E1-1");
                    printf("Golongan E1-1\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 9.200;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 9.850;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 10.950;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else if (listrik == 2){
					strcpy(kode, "E1-2");
                    printf("Golongan E1-2 \n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 9.500;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 10.150;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 11.250;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else if (listrik == 3){
					strcpy(kode, "E1-3");
                    printf("Golongan E1-3 \n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 9.800;
                        printf("Tarif : %.3f", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 10.450;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 11.550;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else if (listrik = 4){
					strcpy(kode, "E1-4");
                    printf("Golongan E1-4 \n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 10.100;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 10.750;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 11.850;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else {
                    printf("Input yang anda masukan tidak ada");
                }
            } 
			else if (golongan == 2){
				daya_listrik2();
                printf("Masukan daya listrik :");
                listrik = validasi4();
                
                system ("cls");

                 if (listrik == 1){
                 	strcpy(kode, "E2-1");
                    printf("Golongan E2-1 \n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 10.400;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 11.050;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 12.150;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else if (listrik == 2){
					strcpy(kode, "E2-2");
                    printf("Golongan E2-2 \n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 10.700;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 11.350;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 12.550;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else if (listrik == 3){
					strcpy(kode, "E2-3");
                    printf("Golongan E2-3 \n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 11.000;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 11.650;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 13.150;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else if (listrik = 4){
					strcpy(kode, "E2-4");
                    printf("Golongan E2-4 \n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 11.300;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 11.950;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 13.950;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else {
                    printf("Input yang anda masukan tidak ada");
                }
            } 
			else if (golongan == 3){
				daya_listrik2();
                printf("Masukan daya listrik :");
                pemakaian = validasi6();

                 if (listrik == 1){
                 	strcpy(kode, "E3-1");
                    printf("Golongan E3-1\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Pemakaian Progresif : ");
                    pemakaian = validasi6();
                    
                    system ("cls");

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 11.600;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 12.250;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 14.750;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else if (listrik == 2){
					strcpy(kode, "E3-2");
                    printf("Golongan E3-2\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();
                    
                    system ("cls");

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 11.900;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 12.550;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 15.050;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else if (listrik == 3){
					strcpy(kode, "E3-3");
                    printf("Golongan E3-3\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();
                    
                    system ("cls");

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 12.200;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 12.850;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 15.850;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else if (listrik = 4){
					strcpy(kode, "E3-4");
                    printf("Golongan E3-4\n");
                    pemakaian_progresif();
                    printf("Masukan Tingkat Air Bulan Lalu :");
                    pemakaian = validasi6();
                    printf("Masukan Tingkat Air Bulan Ini :");
                    pemakaian = validasi6();
					
					system ("cls");                    

                    if (pemakaian <= 10 && pemakaian > 0) {
                        tarif = pemakaian * 12.500;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian <= 20 && pemakaian >11){
                        tarif = pemakaian * 13.150;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else if (pemakaian > 20){
                        tarif = pemakaian * 16.650;
                        printf("Tarif : %.3f\n", tarif);
                    }
                    else {
                        printf("Yang benar saja");
                    }
                } 
				else {
                    printf("Input yang anda masukan tidak ada");
                }
                
            } 
			else {
            	printf("Pilihan Anda Tidak Tersedia");
			}   
    } 
	else {
    	printf("Pilihan Anda Tidak Tersedia");
	}
	
	printf ("Masukan data pembayaran bulan lalu\n");	
	printf ("Masukan Tanggal : ");
	d1 = validasi_tanggal();
	printf ("Masukan Bulan : ");
	m1 = validasi_bulan();
	printf ("Masukan Tahun : ");
	y1 = validasi_tahun();
	printf ("Masukan data pembayaran bulan sekarang\n");	
	printf ("Masukan Tanggal : ");
	d2 = validasi_tanggal();
	printf ("Masukan Bulan : ");
	m2 = validasi_bulan();
	printf ("Masukan Tahun : ");
	y2 = validasi_tahun();
	total = ((y2-y1)*365 + (m2-m1)*30 + (d2-d1));
	system("cls");
	printf ("Selisih Hari = %d\n", total);

	
	
		if (total < 30){
			denda = 0.000;
			printf ("DENDA = %.3f\n", denda);
		}
		else{
			denda = 25.000;
			printf ("DENDA = %.3f\n", denda);
		}
		
		printf("KLIK ENTER \n UNTUK MASUK KE TOTAL BIAYA\n");
		system("pause");
		system("cls");
		
	
	printf ("|=============================================|\n");
	printf ("|Klaster : %s                       |\n", bangunan);
	printf ("|Golongan : %s                              |\n", kode);
	printf ("|=============================================|\n");
	printf ("|Denda : %.3f                               |\n", denda);
	printf ("|Tarif : Rp. %.3f                            |\n", tarif);
	printf ("|BPM : Rp. %.3f                             |\n", bpm);
	printf ("|Biaya Admin : Rp. %.3f                     |\n", BIAYA_ADM);
	printf ("|=============================================|\n");
	total_biaya = (BIAYA_ADM+bpm+tarif+denda);
	printf ("|Total Biaya : Rp. %.3f                     |\n", total_biaya);
	printf ("|=============================================|\n");
	
	
	pengulangan(); fflush (stdin);
    scanf ("%c", &input);
    system ("cls");
	
	} 
	while (input == 'y');
	system ("cls");
	penutup();
	
return 0;
}
