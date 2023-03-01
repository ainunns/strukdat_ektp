#include "header.h"

int CheckDataValidity(infoDataKTP dataKTP){
    int l = 1, r = size, mid;
    while(l <= r){
        mid = l + (r-l)/2;
        if(DataKTP[mid].NIK == dataKTP.NIK){
            return 1;
        } else if(DataKTP[mid].NIK > dataKTP.NIK)
            r = mid - 1;
        else 
            l = mid + 1;
    }
    return 0;
}
