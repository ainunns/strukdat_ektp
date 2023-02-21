#include "header.h"

void DisplayData(infoDataKTP Data_KTP){
	char Nationality[2][4] = { "WNI", "WNA" };
	char Gender[2][10] = { "Perempuan", "Laki-laki" };
	
	printf("NIK: %s\n", Data_KTP.NIK);
	printf("Nama: %s\n", Data_KTP.name);
	printf("Tempat Lahir: %s\n", Data_KTP.tempatLahir);
	printf("Tanggal Lahir: %d - %d - %d\n", Data_KTP.birthday.day, Data_KTP.birthday.month, Data_KTP.birthday.year);
	printf("Alamat: %s\n", Data_KTP.address);
	printf("Jenis Kelamin: %s\n", Gender[Data_KTP.gender]);
	printf("Kewarganegaraan: %s\n", Nationality[Data_KTP.nationality]);
}
