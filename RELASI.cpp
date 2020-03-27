#include "RELASI.h"

/* GILANG GUMELAR - 1302194089
   VIDI Fadil Akbar - 1302194048
*/

void createList_r(list_relasi &L){
    first(L) = NULL;
    last(L) = NULL;
};
adr_r alokasi_r(adr_p P, adr_c C){
    adr_r R = new elm_relasi;
    parent(R) = P;
    child(R) = C;
    next(R) = NULL;

    return R;
};
void insertFirst_r(list_relasi &L, adr_r R){
    if(first(L) == NULL){
        first(L) = R;
        last(L) = R;
    } else {
        next(R) = first(L);
        prev(first(L)) = R;
        first(L) = R;
    }
};
void insertLast_r(list_relasi &L, adr_r R){
    if(first(L) == NULL){
        first(L) = R;
        last(L) = R;
    } else {
        next(last(L)) = R;
        prev(R) = last(L);
        last(L) = R;
    }
};
void deleteFirst_r(list_relasi &L, adr_r &R){
    if(first(L) == NULL){
        cout<<"  TIDAK ADA RELASI!  "<<endl;
    } else if(next(first(L)) == NULL){
        first(L) = NULL;
        last(L) = NULL;
    } else {
        R = first(L);
        first(L) = next(R);
        prev(next(R)) = first(L);
        next(R) = NULL;
    }
};
void deleteLast_r(list_relasi &L, adr_r &R){
    if(first(L) == NULL){
        cout<<"  TIDAK ADA RELASI!  "<<endl;
    } else if(next(first(L)) == NULL){
        first(L) = NULL;
        last(L) = NULL;
    } else {
        R = prev(last(L));
        next(R) = NULL;
        prev(R) = NULL;
        last(L) = R;
    }
};
void deleteAfter_r(list_relasi &L, adr_r Prec, adr_r &R){
    if(Prec == NULL){
        cout<<"  PREC TIDAK DITEMUKAN!  "<<endl;
    } else if(Prec == last(L)){
        cout<<"  TIDAK ADA ELEMEN SETELAH PREC  "<<endl;
    } else if(Prec == prev(last(L))){
        deleteLast_r(L, R);
    } else {
        R = first(L);
        while(R != Prec){
            R = next(R);
        }
        adr_r P = next(R);
        next(R) = next(P);
        prev(next(P)) = R;
        next(P) = NULL;
        prev(P) = NULL;
    }
};
adr_r searchElmn_r(list_relasi L, adr_p P, adr_c C){
    adr_r R = first(L);
    while(info(parent(R)) != info(P) && info(child(R)).nama != info(C).nama){
        R = next(R);
    }

    if(info(parent(R)) == info(P) && info(child(R)).nama == info(C).nama){
        return R;
    } else {
        return NULL;
    }
};
void printInfo_r(list_relasi L){
    int i = 1;
    adr_r R = first(L);

    cout<<endl<<"  Relasi "<< i <<" : "<<endl;
    while(R != NULL){
        cout<<"    "<< i <<". Kota "<< info(parent(R)) <<endl<<
        "       Jalan  "<< info(child(R)).nama <<" - "<< info(child(R)).tipe <<endl;
        i++;
        R = next(R);
    }
    cout<<endl;
};
