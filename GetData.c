#include "header.h"

infoDataKTP GetData(){
	infoDataKTP dataKTP;
    printf("================ Input Data KTP ================\n");
    printf("NIK (16 digit): ");
    scanf("%s", dataKTP.NIK);
    printf("Nama: ");
    scanf("\n%[^\n]s", dataKTP.name);
    printf("Tempat Lahir: ");
    scanf("\n%[^\n]s", dataKTP.tempatLahir);
    printf("Tanggal Lahir (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dataKTP.birthday.day, &dataKTP.birthday.month, &dataKTP.birthday.year);
    printf("Alamat: ");
    scanf("\n%[^\n]s", dataKTP.address);
    printf("Jenis Kelamin:\n0. Perempuan\n1. Laki-laki\n\nSilakan pilih jenis kelamin Anda: ");
    scanf("%d", &dataKTP.gender);
    printf("Agama:\n0. Islam\n1. Kristen\n2. Katolik\n3. Hindu\n4. Buddha\n5. Konghucu\n\nSilakan pilih agama Anda: ");
    scanf("%d", &dataKTP.religion);
    printf("Kewarganegaraan:\n0. WNI\n1. WNA\n\nSilakan pilih kewarganegaraan Anda: ");
    scanf("%d", &dataKTP.nationality);
	return dataKTP;
}

