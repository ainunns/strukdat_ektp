#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(){ 
	size = 0;
	LoadData();
	while (1){
	    ShowMenu();
	    printf("Silakan pilih menu yang Anda inginkan: ");
	    int selectedMenuByUser;
	    scanf("%d", &selectedMenuByUser);
	    switch (selectedMenuByUser){
	        case 1: {
	            AddData();
	            break;
	        }
	        case 2: {
	            ShowData();
	            break;
	        }
			case 3: {
				SearchData();
				break;
			}
	        case 4: {
	            ExitProgram();
	            break;
	        }
	        default: {
	        	system("cls");
	            printf("Menu yang Anda pilih tidak valid, silakan memilih menu kembali\n\n");
	        }
	    }
	}
    return 0;
}

