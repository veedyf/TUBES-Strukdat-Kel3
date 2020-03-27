#Judul : DATA JALAN PERKOTAAN

#Descripsi :implementasikan multi linked-list yang memodelkan data kota dan data
            jalan (nama, tipe jalan (jalan utama, satuarah, by-pass, toll, fly-over, dll)) beserta relasi
            keduanya. Suatu kota memiliki banyak nama jalan yang digunakan di kota tersebut. Dan juga
            suatu nama jalan biasanya banyak digunakan di banyak kota.

#Fungsionalitas :
	a.Penambahan data kota.
	b.Penambahan data jalan.
	c.Penentuan relasi kota dan jalan (dan sebalikknya).
	d.Menghapus data kota.
	e.Manghapus data jalan.
	f.Menampilkan data keseluruhan kota beserta jalan yang terdapat di kota tersebut.
	g.Menampilkan data kota yang memiliki nama jalan tertentu.
	h.Menampilkan data jalan yang dimiliki suatu kota tertentu.
	i.Menampilkan data kota dan nama jalan yang memiliki tipe jalan tertentu.


#PROGRAM

1. Menggunakan Model MultiList 1 (satu)
2. PARENT -> Menggunakan Single Linked list
3. CHILD  -> Menggunakan Double Linked List Circular
4. RELASI -> Menggunakan Double Linked List

#List PARENT -> PARENT.h
             -> PARENT.cpp

#List CHILD  -> CHILD.h
             -> CHILD.cpp

#List RELASI -> RELASI.h
             -> RELASI.cpp

#Program Utama -> APLIKASI.h
               -> APLIKASI.cpp

# Fungsi dan Prosedur Pada PARENT
    void createList_p(list_parent &L);
    adr_p alokasi_p(infotype x);
    void insertFirst_p(list_parent &L, adr_p P);
    void insertLast_p(list_parent &L, adr_p P);
    void deleteFirst_p(list_parent &L, adr_p &P);
    void deleteLast_p(list_parent &L, adr_p &P);
    void deleteAfter_p(list_parent &L, adr_p Prec, adr_p &P);
    adr_p searchElmn_p(list_parent L, infotype x);
    void printInfo_p(list_parent L);

# Fungsi dan Prosedur Pada CHILD
    void createList_c(list_child &L);
    adr_c alokasi_c(string nama, string tipe);
    void insertFirst_c(list_child &L, adr_c C);
    void insertLast_c(list_child &L, adr_c C);
    void deleteFirst_c(list_child &L, adr_c &C);
    void deleteLast_c(list_child &L, adr_c &C);
    void deleteAfter_c(list_child &L, adr_c Prec, adr_c &C);
    adr_c searchElmn_c(list_child L, string nama);
    void printInfo_c(list_child L);

# Fungsi dan Prosedur Pada RELASI
    void createList_r(list_relasi &L);
    adr_r alokasi_r(adr_p P, adr_c C);
    void insertFirst_r(list_relasi &L, adr_r R);
    void insertLast_r(list_relasi &L, adr_r R);
    void deleteFirst_r(list_relasi &L, adr_r &R);
    void deleteLast_r(list_relasi &L, adr_r &R);
    void deleteAfter_r(list_relasi &L, adr_r Prec, adr_r &R);
    adr_r searchElmn_r(list_relasi L, adr_p P, adr_c C);
    void printInfo_r(list_relasi L);

#Prosedur Pada APLIKASI
    void MENU();
    void insert_parent();
    void insert_child();
    void view_parent();
    void view_child();
    void search_parent();
    void search_child();
    void relasikan();
    void view_relasi();
    void search_relasi();
    void delete_relasi();
    void delete_parent();
    void delete_child();
    void close();



/* GILANG GUMELAR - 1302194089
   MUHAMMAD VIDI FADILAKBAR - 1302194048
   SE-43-02 / 2020
*/
