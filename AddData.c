#include "header.h"

FILE *databaseKTP;

int CheckDataValidity(infoDataKTP dataKTP){
    infoDataKTP dataKTP2;
    while(!feof(databaseKTP)){ 
        if(fread(&dataKTP2,sizeof(infoDataKTP), 1, databaseKTP)){
            if(!strcmp(dataKTP2.NIK, dataKTP.NIK)){
                printf("Data tidak valid, NIK tidak boleh sama\n");
                return 0;
            }
        }   
    }
    return 1;
}

void AddData(){
    system("cls");
    databaseKTP = fopen("data.dat", "ab+");
    
    if(databaseKTP == NULL){
        printf("Maaf, file yang Anda buka tidak dapat ditemukan.\n");
        fclose(databaseKTP);
    } else {
	    char response = 'n';
	    do {    	
		    infoDataKTP dataKTP = GetData();
            system("cls");
            printf("Rincian data KTP yang Anda masukkan:\n");
            DisplayData(dataKTP);
		    if(CheckDataValidity(dataKTP)){
				long long p = atoll(dataKTP.NIK); 
				fseek(databaseKTP, (p - 1) * sizeof(infoDataKTP), SEEK_SET);
				fwrite(&dataKTP, sizeof(infoDataKTP), 1, databaseKTP);
				printf("Data berhasil ditambahkan!\n");
			}
	        printf("\n\nApakah Anda ingin memasukkan data KTP lagi (y/n) ? ");
	        scanf("\n%c", &response);
			system("cls");
	    } while(response == 'y');
	    printf("Anda telah keluar dari menu Input Data, kembali ke menu utama...\n\n");
    	fclose(databaseKTP);
    }
}
