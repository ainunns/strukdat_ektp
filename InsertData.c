#include "header.h"

void InsertData(infoDataKTP dataKTP){
	if(size == 0){
		DataKTP[++size] = dataKTP;
		return;
	}
    int l = 1, r = size, mid, idx = size+1, i;
    while(l <= r){
        mid = l + (r-l)/2;
        if(DataKTP[mid].NIK > dataKTP.NIK){
            idx = mid;
            r = mid - 1; 
        } else {
            l = mid + 1;
        }
    }
    size++;
    for(i = size; i > idx; i--){
        DataKTP[i] = DataKTP[i-1];
	}
    DataKTP[idx] = dataKTP;
}
