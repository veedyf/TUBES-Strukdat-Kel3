#include "PARENT.h"

/* GILANG GUMELAR - 1302194089
   VIDI Fadil Akbar - 1302194048
*/

void createList_p(list_parent &L){
    first(L) = NULL;
    last(L) = NULL;
};
adr_p alokasi_p(infotype x){
    adr_p P = new elm_parent;
    info(P) = x;
    next(P) = NULL;

    return P;
};
void insertFirst_p(list_parent &L, adr_p P) {
    if(first(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }
}
void insertLast_p(list_parent &L, adr_p P) {
    if(first(L) == NULL && last(L) == NULL) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = last(L);
        last(L) = P;
    }
}

void deleteFirst_p(list_parent &L, adr_p &P) {
    if(first(L) == NULL) {
        cout << "   LIST KOSONG     " << endl;
        P = NULL;
    } else if(next(first(L)) == NULL) {
        first(L) = NULL;
    } else {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}
void deleteLast_p(list_parent &L, adr_p &P) {
    adr_p Q;
    if(first(L) == NULL && last(L) == NULL) {
        cout << "   LIST KOSONG     " << endl;
        P = NULL;
    } else if(next(first(L)) == NULL) {
        P = first(L);
        first(L) = NULL;
    } else {
        P = first(L);
        while(next(P) != NULL) {
            Q = P;
            P = next(P);
        }
        next(Q) = NULL;
    }
}
void deleteAfter_p(list_parent &L, adr_p Prec, adr_p &P) {
    if(Prec == NULL) {
        cout << "   PREC TIDAK DITEMUKAN     " << endl;
        P = NULL;
    } else if(Prec == last(L)) {
        cout << "   TIDAK ADA ELEMENT SETELAH PREC      " << endl;
    } else if(next(Prec) == last(L)) {
         deleteLast_p(L,P);
    } else {
        P = next(Prec);
        next(Prec) = next(P);
        next(P) = NULL;
    }
}

adr_p searchElmn_p(list_parent L, infotype x) {
    adr_p P = first(L);
    while(info(P) != x) {
        P = next(P);
    }

    if(info(P) == x) {
        return P;
    } else {
        return NULL;
    }
}
void printInfo_p(list_parent L) {
    adr_p P = first(L);
    cout << "   Parent  " << ": " << endl;
    while(P != NULL) {
        cout << info(P) << " | ";
        P = next(P);
    }
    cout << endl;
}
