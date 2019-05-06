#include <iostream.h>
#include <conio.h>

int main ()
{
   char nama [20], Kode;
   int pil,jumlahbelanja,totalbelanja,totalbayar,kembalian,harga,diskon,bayar;
       cout<<"Nama : ";
       cin>>nama;
       cout<<endl;
       cout<<"A. Kursi  Rp.1.000.000\n";
		 cout<<"B. Meja   Rp.2.000.000\n";
		 cout<<"C. Lemari Rp.2.500.000\n";
		 cout<<"D.KELUAR\n";
		 cout<<"Pilihan yang akan dibeli (A-D)         : "; cin>>Kode;
       cout<<"Masukkan jumlah barang yang diinginkan : ";cin>>jumlahbelanja;
	switch (Kode)
{
	case 'A':
   	harga=1000000;
   	cout<<"Barang yang dibeli : Kursi\n";
   	cout<<"Harga satuan : Rp "<<harga<<endl;
   	break;
	case 'B':
 		harga=2000000;
   	cout<<"Barang yang dibeli : Meja\n";
   	cout<<"Harga satuan : Rp "<<harga<<endl;
  	   break;
	case 'C':
 		harga=2500000;
   	cout<<"Barang yang dibeli : Kursi\n";
   	cout<<"Harga satuan : Rp "<<harga<<endl;
  		 break;
	}
totalbelanja = jumlahbelanja * harga;
cout<<"Masukkan kode barang     : "<<Kode<<endl;
cout<<"Total yang harus dibayar : Rp. " <<totalbelanja<<endl;
 if (totalbelanja >= 10000000)
  {diskon = totalbelanja * 20/100;}
     else
  {diskon = 0;}
 cout<<"Diskon                  : Rp. "<<diskon<<endl;
totalbayar= totalbelanja - diskon;
cout<<"Total yang harus dibayar : Rp. "<<totalbayar<<endl;
cout<<"Masukkan uang pembayaran : Rp. "; cin>>bayar;
kembalian = bayar - totalbayar;
cout<<"Kembalian                : Rp. "<<kembalian<<endl;
cout<<"----------------------------------------------"<<endl;
cout<<"      Terima Kasih         "<<endl;
getch () ;
}

