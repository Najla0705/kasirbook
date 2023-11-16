#include <iostream>

using namespace std;

int main()
{ 
 // Deklarasi variabel
 int CP_Book, C_Hand, PBO, WEB, PEMDAS;
 float Disc, FixBook, Book;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t=== Daftar barang beserta harganya ==="<<endl;
 cout<<"\t\t| C Programming Book : Rp 105.000,00 |"<<endl;
 cout<<"\t\t| C Handbook         : Rp 188.000,00 |"<<endl;
 cout<<"\t\t| PBO                : Rp  55.000,00 |"<<endl;
 cout<<"\t\t| WEB                : Rp  10.000,00 |"<<endl;
 cout<<"\t\t| PEMDAS             : Rp  35.000,00 |"<<endl;
 cout<<"\t\t======================================\n"<<endl;
 
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah C Programming Book yang dibeli : "; cin>>CP_Book;
 cout<<"Masukkan jumlah C Handbook yang dibeli         : "; cin>>C_Hand;
 cout<<"Masukkan jumlah PBO        yang dibeli         : "; cin>>PBO;
 cout<<"Masukkan jumlah WEB        yang dibeli         : "; cin>>WEB;
 cout<<"Masukkan jumlah PEMBAS     yang dibeli         : "; cin>>PEMDAS;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<CP_Book<<"\t\tC Programming Book \t105000 \t\t"<<CP_Book*105000<<"\t    |"<<endl;
 cout<<"\t|   "<<C_Hand<<"\t\tC Handbook \t\t188000 \t\t"<<C_Hand*188000<<"\t    |"<<endl;
 cout<<"\t|   "<<PBO<<"\t\tPBO            \t\t55000 \t\t"<<PBO*55000<<"\t    |"<<endl;
 cout<<"\t|   "<<WEB<<"\t\tWEB                 \t10000 \t\t"<<WEB*10000<<"\t    |"<<endl;
 cout<<"\t|   "<<PEMDAS<<"\t\tPEMDAS   \t\t35000 \t\t"<<PEMDAS*35000<<"\t    |"<<endl;
 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 Book = CP_Book*105000+C_Hand*188000+PBO*55000+WEB*10000+PEMDAS*35000;
 Disc = 10.0/100*Book;
 cout<<"\t|\t\t\tHarga Total Buku \t: "<<Book<<"\t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Book-Disc<<"   \t    |"<<endl;
 FixBook = Book-Disc;
 cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<FixBook<<"\t    |"<<endl;
 cout<<"\t====================================================================="<<endl;
}
