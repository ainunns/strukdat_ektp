#include "header.h"

void DisplayData(infoDataKTP Data_KTP){	
	printf("NIK: %s\n", Data_KTP.NIK);
	printf("Nama: %s\n", Data_KTP.name);
	printf("Tempat Lahir: %s\n", Data_KTP.tempatLahir);
	printf("Tanggal Lahir: %d - %d - %d\n", Data_KTP.birthday.day, Data_KTP.birthday.month, Data_KTP.birthday.year);
	printf("Alamat: %s\n", Data_KTP.address);
	
	printf("Jenis Kelamin: ");
	if(Data_KTP.gender==0) printf("Perempuan\n");
	else if (Data_KTP.gender==1) printf("Laki-laki\n");
	
	printf("Kewarganegaraan: ");
	if(Data_KTP.nationality==0) printf("WNI\n");
	else if (Data_KTP.nationality==1) printf("WNA\n");
}

