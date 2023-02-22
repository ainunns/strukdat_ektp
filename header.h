#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date_t {
    int day, month, year;
} date;

typedef struct InfoDataKTP {
    char NIK[20], name[100], tempatLahir[20], address[100];
    date birthday;
    int gender, religion, nationality;
} infoDataKTP;

infoDataKTP GetData();
void DisplayData(infoDataKTP);
void ShowData();
void AddData();
void ExitProgram();
void ShowMenu();
