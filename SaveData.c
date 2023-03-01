#include "header.h"

void SaveData(){
	FILE *databaseKTP = fopen("data.dat", "ab+");
	if(databaseKTP == NULL){
	    printf("Maaf, file yang Anda buka tidak dapat ditemukan.\n");
	    fclose(databaseKTP);
	} else {
		int i = 1;
		fseek(databaseKTP, 0, SEEK_SET);
		for(i = 1; i <= size; i++){
			fwrite(&DataKTP[i], sizeof(infoDataKTP), 1, databaseKTP);
		}
    }
}
