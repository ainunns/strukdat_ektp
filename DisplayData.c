#include "header.h"

void DisplayData(infoDataKTP Data_KTP){
	printf("==============================================\n");
	printf("NIK: %lld\n", Data_KTP.NIK);
	printf("Nama: %s\n", Data_KTP.name);
	printf("Tempat Lahir: %s\n", Data_KTP.tempatLahir);
	printf("Tanggal Lahir: %d - %d - %d\n", Data_KTP.birthday.day, Data_KTP.birthday.month, Data_KTP.birthday.year);
	printf("Alamat: %s\n", Data_KTP.address);
	printf(Data_KTP.gender == 0 ? "Jenis Kelamin: Perempuan\n" : "Jenis Kelamin: Laki-laki\n");
	printf("Agama: ");
	switch(Data_KTP.religion){
		case 0: {
			printf("Islam\n");
			break;
		}
		case 1: {
			printf("Kristen\n");
			break;
		}
		case 2: {
			printf("Katolik\n");
			break;
		}
		case 3: {
			printf("Hindu\n");
			break;
		}
		case 4: {
			printf("Buddha\n");
			break;
		}
		case 5: {
			printf("Konghucu\n");
			break;
		}
	}
	printf(Data_KTP.nationality == 0 ? "Kewarganegaraan: WNI\n" : "Kewarganegaraan: WNA\n");
	printf("==============================================\n");
}
