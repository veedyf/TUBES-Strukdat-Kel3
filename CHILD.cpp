#include "CHILD.h"

/* GILANG GUMELAR - 1302194089
   VIDI Fadil Akbar - 1302194048
*/

void createList_c(list_child &L){
    first(L) = NULL;
    last(L) = NULL;
};
adr_c alokasi_c(string nama, string tipe){
    adr_c C = new elm_child;
    info(C).nama = nama;
    info(C).tipe = tipe;
    next(C) = NULL;
    prev(C) = NULL;

    return C;
};
void insertFirst_c(list_child &L, adr_c C);
void insertLast_c(list_child &L, adr_c C);
void deleteFirst_c(list_child &L, adr_c &C);
void deleteLast_c(list_child &L, adr_c &C);
void deleteAfter_c(list_child &L, adr_c Prec, adr_c &C);
adr_c searchElmn_c(list_child L, string nama);
void printInfo_c(list_child L);
