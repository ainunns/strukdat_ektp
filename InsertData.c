#include "header.h"

void InsertData(){
    system("cls");
    FILE *databaseKTP;
    databaseKTP = fopen("database2.dat", "ab+");

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
	
	        long long p = atoll(dataKTP.NIK);       
	        
	        fseek(databaseKTP, (p - 1) * sizeof(infoDataKTP), SEEK_SET);
	        fwrite(&dataKTP, sizeof(infoDataKTP), 1, databaseKTP);
	        
            printf("\n\nApakah Anda ingin memasukkan data KTP lagi (y/n) ? ");
            scanf("\n%c", &response);
			system("cls");
        } while(response == 'y');
        printf("Anda telah keluar dari menu Input Data, kembali ke menu utama...\n\n");
    	fclose(databaseKTP);
    }
}

