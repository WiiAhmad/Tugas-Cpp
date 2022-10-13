#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

main(){

   
	int daftar1, daftar2, daftar3, daftar4, jumlah, th1, th2, th3, th4, total;
   char awal, got;
   awal:
   cout << "pilih barang yang ingin kamu beli" << endl;
   cout << "1. buku , harga = 5000" << endl;
   cout << "2. pensil , harga = 1500" << endl;
   cout << "3. penghapus  , harga = 750"<< endl;
   cout << "4. spidol , harga = 10500" << endl;
   cout << "pilih nomor 1-4 = ";
   cin >> daftar1;


   switch(daftar1){
      case 1:
      cout << "anda memilih buku" << endl;
      cout << "masukan jumlah yang ingin anda beli = ";
      cin >> jumlah;
      th1 = 5000 * jumlah;
      cout << "total harga yang harus anda bayar = " << th1 << endl;
      cout << "apakah anda ingin membeli barang lagi?" << endl;
      cout << "(Y/N)";
      cout << "pilihan anda = ";
      cin >> got;

      if (got == 'Y' || got == 'y'){
      goto barang2;
      } else {
      exit (0);
      }
      break;

      case 2:
      cout << "anda memilih pensil" << endl;
      cout << "masukan jumlah yang ingin anda beli = ";
      cin >> jumlah;
      th2 = 1500 * jumlah;
      cout << "total harga yang harus anda bayar = " << th1 << endl;
      cout << "apakah anda ingin membeli barang lagi?" << endl;
      cout << "(Y/N)";
      cout << "pilihan anda = ";
      cin >> got;

      if (got == 'Y' || got == 'y'){
      goto barang2;
      } else {
      exit (0);
      }
      break;

      case 3:
      cout << "anda memilih penghapus" << endl;
      cout << "masukan jumlah yang ingin anda beli = ";
      cin >> jumlah;
      th1 = 750 * jumlah;
      cout << "total harga yang harus anda bayar = " << th1 << endl;
      cout << "apakah anda ingin membeli barang lagi?" << endl;
      cout << "(Y/N)";
      cout << "pilihan anda = ";
      cin >> got;

      if (got == 'Y' || got == 'y'){
      goto barang2;
      } else {
      exit (0);
      }
      break;

      case 4:
      cout << "anda memilih spidol" << endl;
      cout << "masukan jumlah yang ingin anda beli = ";
      cin >> jumlah;
      th1 = 10500 * jumlah;
      cout << "total harga yang harus anda bayar = " << th1 << endl;
      cout << "apakah anda ingin membeli barang lagi?" << endl;
      cout << "(Y/N)";
      cout << "pilihan anda = ";
      cin >> got;
      if (got == 'Y' || got == 'y'){
      goto barang2;
      } else {
      exit (0);
      }
      break;

      default:
      cout << "anda memasukan selain nomor dilist" << endl;
      goto awal;
      break;
   }

   //barang2 disini coi
   barang2:
   cout << "pilih barang yang ingin kamu beli" << endl;
   cout << "1. buku , harga = 5000" << endl;
   cout << "2. pensil , harga = 1500" << endl;
   cout << "3. penghapus  , harga = 750"<< endl;
   cout << "4. spidol , harga = 10500" << endl;
   cout << "pilih nomor 1-4 = ";
   cin >> daftar2;

   switch (daftar2){
   case 1:
   cout << "anda memilih buku" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th2 = 5000 * jumlah;
   total = th1 + th2;
   cout << "total harga yang harus anda bayar = " << total << endl;
   cout << "apakah anda ingin membeli barang lagi?" << endl;
   cout << "(Y/N)";
   cout << "pilihan anda = ";
   cin >> got;

   if (got == 'Y' || got == 'y'){
   goto barang3;
   } else {
   exit (0);
   }
   break;

   case 2:
   cout << "anda memilih pensil" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th2 = 1500 * jumlah;
   total = th1 + th2;
   cout << "total harga yang harus anda bayar = " << total << endl;
   cout << "apakah anda ingin membeli barang lagi?" << endl;
   cout << "(Y/N)";
   cout << "pilihan anda = ";
   cin >> got;

   if (got == 'Y' || got == 'y'){
   goto barang3;
   } else {
   exit (0);
   }
   break;

   case 3:
   cout << "anda memilih penghapus" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th2 = 750 * jumlah;
   total = th1 + th2;
   cout << "total harga yang harus anda bayar = " << total << endl;
   cout << "apakah anda ingin membeli barang lagi?" << endl;
   cout << "(Y/N)";
   cout << "pilihan anda = ";
   cin >> got;

   if (got == 'Y' || got == 'y'){
   goto barang3;
   } else {
   exit (0);
   }
   break;

   case 4:
   cout << "anda memilih spidol" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th2 = 10500 * jumlah;
   total = th1 + th2;
   cout << "total harga yang harus anda bayar = " << total << endl;
   cout << "apakah anda ingin membeli barang lagi?" << endl;
   cout << "(Y/N)";
   cout << "pilihan anda = ";
   cin >> got;

   if (got == 'Y' || got == 'y'){
   goto barang3;
   } else {
   exit (0);
   }
   break;

   default:
   cout << "anda memasukan selain nomor dilist" << endl;
   goto barang2;
   break;
   }

   // barang3 disini
   barang3:
   cout << "pilih barang yang ingin kamu beli" << endl;
   cout << "1. buku , harga = 5000" << endl;
   cout << "2. pensil , harga = 1500" << endl;
   cout << "3. penghapus  , harga = 750"<< endl;
   cout << "4. spidol , harga = 10500" << endl;
   cout << "pilih nomor 1-4 = ";
   cin >> daftar3;

   switch (daftar3){
   case 1:
   cout << "anda memilih buku" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th3 = 5000 * jumlah;
   total = th1 + th2 + th3;
   cout << "total harga yang harus anda bayar = " << total << endl;
   cout << "apakah anda ingin membeli barang lagi?" << endl;
   cout << "(Y/N)";
   cout << "pilihan anda = ";
   cin >> got;

   if (got == 'Y' || got == 'y'){
   goto barang4;
   } else {
   exit (0);
   }
   break;

   case 2:
   cout << "anda memilih pensil" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th3 = 5000 * jumlah;
   total = th1 + th2 + th3;
   cout << "total harga yang harus anda bayar = " << total << endl;
   cout << "apakah anda ingin membeli barang lagi?" << endl;
   cout << "(Y/N)";
   cout << "pilihan anda = ";
   cin >> got;

   if (got == 'Y' || got == 'y'){
   goto barang4;
   } else {
   exit (0);
   }
   break;

   case 3:
   cout << "anda memilih penghapus" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th3 = 5000 * jumlah;
   total = th1 + th2 + th3;
   cout << "total harga yang harus anda bayar = " << total << endl;
   cout << "apakah anda ingin membeli barang lagi?" << endl;
   cout << "(Y/N)";
   cout << "pilihan anda = ";
   cin >> got;

   if (got == 'Y' || got == 'y'){
   goto barang4;
   } else {
   exit (0);
   }
   break;

   case 4:
   cout << "anda memilih spidol" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th3 = 5000 * jumlah;
   total = th1 + th2 + th3;
   cout << "total harga yang harus anda bayar = " << total << endl;
   cout << "apakah anda ingin membeli barang lagi?" << endl;
   cout << "(Y/N)";
   cout << "pilihan anda = ";
   cin >> got;

   if (got == 'Y' || got == 'y'){
   goto barang4;
   } else {
   exit (0);
   }
   break;

   default:
   cout << "anda memasukan selain nomor dilist" << endl;
   goto barang3;
   break;
   }

   // barang4 disini
   barang4:
   cout << "pilih barang yang ingin kamu beli" << endl;
   cout << "1. buku , harga = 5000" << endl;
   cout << "2. pensil , harga = 1500" << endl;
   cout << "3. penghapus  , harga = 750"<< endl;
   cout << "4. spidol , harga = 10500" << endl;
   cout << "pilih nomor 1-4 = ";
   cin >> daftar4;

   switch (daftar4){
   case 1:
   cout << "anda memilih buku" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th4 = 5000 * jumlah;
   total = th1 + th2 + th3 + th4;
   cout << "total harga yang harus anda bayar = " << total << endl;
   break;

   case 2:
   cout << "anda memilih pensil" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th4 = 5000 * jumlah;
   total = th1 + th2 + th3 + th4;
   cout << "total harga yang harus anda bayar = " << total << endl;
   break;

   case 3:
   cout << "anda memilih penghapus" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th4 = 5000 * jumlah;
   total = th1 + th2 + th3 + th4;
   cout << "total harga yang harus anda bayar = " << total << endl;
   break;

   case 4:
   cout << "anda memilih spidol" << endl;
   cout << "masukan jumlah yang ingin anda beli = ";
   cin >> jumlah;
   th4 = 5000 * jumlah;
   total = th1 + th2 + th3 + th4;
   cout << "total harga yang harus anda bayar = " << total << endl;
   break;

   default:
   cout << "anda memasukan selain nomor dilist" << endl;
   goto barang3;
   break;
   }

   getch();
}