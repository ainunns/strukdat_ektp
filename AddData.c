#include "header.h"

int CheckDataValidity(infoDataKTP dataKTP){
    infoDataKTP dataKTP2;
    FILE *databaseKTP = fopen("data.dat", "ab+");
    if(databaseKTP == NULL){
        printf("File database tidak dapat ditemukan.\n");
        fclose(databaseKTP);
        return 0;    	
	}
    while(!feof(databaseKTP)){ 
        if(fread(&dataKTP2,sizeof(infoDataKTP), 1, databaseKTP)){
            if(dataKTP2.NIK == dataKTP.NIK){
                printf("Data tidak valid, NIK tidak boleh sama\n");
        		fclose(databaseKTP);
                return 0;
            }
        }   
    }
    fclose(databaseKTP);
    return 1;
}

void AddData(){
	system("cls");
	char response = 'n';
	do {
	    infoDataKTP dataKTP = GetData();
        system("cls");
        printf("Rincian data KTP yang Anda masukkan:\n");
        DisplayData(dataKTP);
		if(CheckDataValidity(dataKTP)){
			long long p = atoll(dataKTP.NIK); 
			FILE *databaseKTP = fopen("data.dat", "ab+");
		    if(databaseKTP == NULL){
		        printf("File database tidak dapat ditemukan sehingga data gagal dimasukkan.\n");
		        fclose(databaseKTP);
			} else {
				fseek(databaseKTP, sizeof(infoDataKTP), SEEK_SET);
				fwrite(&dataKTP, sizeof(infoDataKTP), 1, databaseKTP);
				printf("Data berhasil ditambahkan!\n");
		    	fclose(databaseKTP);	
			}
		}
	    printf("\n\nApakah Anda ingin memasukkan data KTP lagi (y/n) ? ");
	    scanf("\n%c", &response);
		system("cls");
	} while(response == 'y');
	printf("Anda telah keluar dari menu Input Data, kembali ke menu utama...\n\n");
}
