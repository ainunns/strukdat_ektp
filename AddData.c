#include "header.h"

void AddData(){
	system("cls");
	char response = 'n';
	do {
	    infoDataKTP dataKTP = GetData();
        system("cls");
        printf("Rincian data KTP yang Anda masukkan:\n");
        DisplayData(dataKTP);
		if(!CheckDataValidity(dataKTP)){
			InsertData(dataKTP);
			printf("Data berhasil ditambahkan!\n");
		} else {
            printf("Data tidak berhasil ditambahkan, NIK tidak boleh sama\n");
		}
	    printf("\n\nApakah Anda ingin memasukkan data KTP lagi (y/n) ? ");
	    scanf("\n%c", &response);
		system("cls");
	} while(response == 'y');
	printf("Anda telah keluar dari menu Input Data, kembali ke menu utama...\n\n");
}
