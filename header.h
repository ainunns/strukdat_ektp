#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date_t {
    int day, month, year;
} date;

typedef struct InfoDataKTP {
    char name[100], tempatLahir[20], address[100];
    date birthday;
    int gender, religion, nationality;
	long long NIK;
} infoDataKTP;

infoDataKTP GetData();
void AddData();
void DisplayData(infoDataKTP);
void ExitProgram(); 
void InsertData(infoDataKTP);
void LoadData();
void SaveData();
void SearchData();
void ShowData();
void ShowMenu();
int CheckDataValidity(infoDataKTP);

infoDataKTP DataKTP[200];
int size;
