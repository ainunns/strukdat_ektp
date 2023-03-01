#include "header.h"

void LoadData(){
	FILE *databaseKTP = fopen("data.dat", "ab+");
	infoDataKTP dataa;
	if(databaseKTP == NULL){
	    printf("Maaf, file yang Anda buka tidak dapat ditemukan.\n");
	    fclose(databaseKTP);
	} else {
		while(!feof(databaseKTP)){
			if(fread(&dataa, sizeof(infoDataKTP), 1, databaseKTP) && !CheckDataValidity(dataa)){
				DataKTP[++size] = dataa;
			}
		}
		fclose(databaseKTP);
    }
}
