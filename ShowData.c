#include "header.h"

void ShowData(){
    system("cls");
    FILE *databaseKTP;
    databaseKTP = fopen("database2.dat", "ab+");

    if(databaseKTP == NULL){
        printf("Maaf, file yang Anda buka tidak dapat ditemukan.\n");
        fclose(databaseKTP);
    } else {
    	int ketemu = 0;
    	infoDataKTP dataKTP;
		
		printf("================ Database KTP ================\n");
        while(!feof(databaseKTP)){ 
            if(fread(&dataKTP, sizeof(infoDataKTP), 1, databaseKTP)){
				DisplayData(dataKTP);
				printf("==============================================\n");
                ketemu = 1;
            }   
        }
        if (ketemu == 0){
        	printf("Belum ada data yang dimasukkan!\n");
		}
		char response = 'y';
		do{
        	printf("Apakah Anda ingin keluar dari menu Lihat Data (y/n)? \n");
			scanf("\n%c", &response);
		} while(response == 'n');
		system("cls");
        printf("Anda telah keluar dari menu Input Data, kembali ke menu utama...\n\n");
        fclose(databaseKTP);
    }
    
}

