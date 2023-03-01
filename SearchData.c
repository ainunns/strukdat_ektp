#include "header.h"

int SequentialSearch(long long data){
	int i = 1;
	for(i = 1; i <= size; i++){
		if(DataKTP[i].NIK == data){
			return i;
		}
	}
	return 0;
}

int BinarySearch(long long data){
	int l = 1, r = size, pos, bs = 0;
	while(l <= r){
		bs++;
		pos = l + (r-l)/2;
		if(DataKTP[pos].NIK == data){
			return bs;
	    }
	    if(DataKTP[pos].NIK > data)
	        r = pos - 1;
	    else 
	        l = pos + 1;
	}
	return 0;
}

int InterpolationSearch(long long data){
	int l = 1, r = size, pos, is = 0;
	while(l <= r){
		is++;
		pos = ((data - DataKTP[l].NIK)/(DataKTP[r].NIK - DataKTP[l].NIK))*(r - l) + l;
		if(DataKTP[pos].NIK == data){
			return is;
		}
		if(DataKTP[pos].NIK > data)
		    r = pos - 1;
		else 
		    l = pos + 1;
	}
	return 0;
}

void SearchData(){
	system("cls");
	char response = 'n';
	do {
		printf("================ Cari Data KTP ================\n");
		printf("Silakan masukkan NIK yang ingin Anda cari : ");
		long long data;
		scanf("%lld", &data);
		int ls=-1, bs=-1, is=-1;
		if(size == 1 && data == DataKTP[1].NIK){
			ls = bs = is = 1;
		} else {
			ls = SequentialSearch(data);
			bs = BinarySearch(data);
			is = InterpolationSearch(data);
		}
	    if(ls != -1){
	    	printf("Data yang Anda cari dapat ditemukan!\n");
	    	DisplayData(DataKTP[ls]);
	    	printf("Banyaknya langkah pencarian dengan algoritma sequential search: %d\n", ls);
	    	printf("Banyaknya langkah pencarian dengan algoritma binary search: %d\n", bs);
	    	printf("Banyaknya langkah pencarian dengan algoritma interpolation search: %d\n", is);
		} else {
			printf("Data yang Anda cari tidak dapat ditemukan :(\n");
		}
	    printf("\n\nApakah Anda ingin mencari data KTP lagi (y/n) ? ");
	    scanf("\n%c", &response);
		system("cls");
	} while(response == 'y');
	printf("Anda telah keluar dari menu Cari Data, kembali ke menu utama...\n\n");
	
}
