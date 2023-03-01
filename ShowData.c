#include "header.h"

void ShowData(){
	system("cls");
	char response = 'y';
	do {
		FILE *databaseKTP = fopen("data.dat", "ab+");
		if(databaseKTP == NULL){
	        printf("Maaf, file yang Anda buka tidak dapat ditemukan.\n");
	        fclose(databaseKTP);
	    } else {
	    	int ketemu = 0, idData = 0;
	    	infoDataKTP dataKTP;
			printf("================ Database KTP ================\n");
			while(!feof(databaseKTP)){ 
				if(fread(&dataKTP, sizeof(infoDataKTP), 1, databaseKTP)){
					printf("\nData ke-%d\n", ++idData);
					DisplayData(dataKTP);
					ketemu = 1;
				}   
			}
			if (ketemu == 0){
				printf("Belum ada data yang dimasukkan!\n");
			}
	    }
	    printf("\nApakah Anda ingin keluar dari menu Lihat Data (y/n)? ");
	    scanf("\n%c", &response);
	    system("cls");
	    fclose(databaseKTP);
	} while(response == 'n');
	printf("Anda telah keluar dari menu Lihat Data, kembali ke menu utama...\n\n");
}
