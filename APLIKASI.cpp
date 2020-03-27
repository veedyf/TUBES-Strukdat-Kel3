#include "APLIKASI.h"

/* GILANG GUMELAR - 1302194089
   VIDI Fadil Akbar - 1302194048
*/

list_child Lc;
list_parent Lp;
list_relasi Lr;

void MENU(){
    int pilihan;
    createList_c(Lc);
    createList_p(Lp);
    createList_r(Lr);

    do{
        cout<<"  =============== M E N U ===============  "<<endl<<endl;
        cout<<"  [1]  Masukan Nama Kota (Parent)  "<<endl;
        cout<<"  [2]  Masukan Nama Jalan (Child)  "<<endl;
        cout<<"  [3]  Lihat List Parent  "<<endl;
        cout<<"  [4]  Lihat List Child  "<<endl;
        cout<<"  [5]  Cari Nama Kota (Parent)  "<<endl;
        cout<<"  [6]  Cari Nam Jalan (Child)  "<<endl;
        cout<<"  [7]  Relasikan Kota - Jalan  "<<endl;
        cout<<"  [8]  Lihat Data Relasi  "<<endl;
        cout<<"  [9]  Cari Data Relasi  "<<endl;
        cout<<"  [10] Hapus Data Relasi  "<<endl;
        cout<<"  [11] Hapus Nama Kota (Parent)  "<<endl;
        cout<<"  [12] Hapus Nama Jalan (Child)  "<<endl<<endl;
        cout<<"  [0]  EXIT PROGRAM  "<<endl;
        cout<<"  =======================================  "<<endl;
        cout<<"  Masukan Pilihan : ";
        cin>>pilihan;

        switch(pilihan){
            case 1: insert_parent();break;
            case 2: insert_child();break;
            case 3: view_parent();break;
            case 4: view_child();break;
            case 5: search_parent();break;
            case 6: search_child();break;
            case 7: relasikan();break;
            case 8: view_relasi();break;
            case 9: search_relasi();break;
            case 10: delete_relasi();break;
            case 11: delete_parent();break;
            case 12: delete_child();break;
            case 0: close();break;
            default :
                cout<<endl<<"  WRONG INPUT!  "<<endl;break;
                MENU();
        }
        cout<<"  Tekan Enter...  ";
        getch();
        cout<<endl;
        system("cls");
    }while(pilihan != 0);
};
void insert_parent(){
    system("cls");
};
void insert_child(){
    system("cls");
};
void view_parent(){
    system("cls");
};
void view_child(){
    system("cls");
};
void search_parent(){
    system("cls");
};
void search_child(){
    system("cls");
};
void relasikan(){
    system("cls");

    adr_c C;
    adr_p P;
    adr_r R;
    list_relasi LR;
    createList_r(LR);

    P = alokasi_p("Bandung");         //Di input
    C = alokasi_c("Jalan Kenangan", "Jalan Utama");  //Di input
    R = alokasi_r(P, C);
    insertFirst_r(LR, R);

    P = alokasi_p("Bekasi");       //Di input
    C = alokasi_c("Jalan Apaya", "Jalan TOL");  //Di input
    R = alokasi_r(P, C);
    insertLast_r(LR, R);

    printInfo_r(LR);
};
void view_relasi(){
    system("cls");
};
void search_relasi(){
    system("cls");
};
void delete_relasi(){
    system("cls");
};
void delete_parent(){
    system("cls");
};
void delete_child(){
    system("cls");
};
void close(){
    system("cls");
    cout<<endl<<"  =======================================  "<<endl;
    cout<<endl<<"  =        A N D A   K E L U A R        ="<<endl;
    cout<<endl<<"  =======================================  "<<endl;
    exit(0);
};

int main(){
    MENU();

    return 0;
}
