#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

main(){

   
	int daftar, jumlah, totalharga;
   char got;

awal:
   cout << "pilih barang yang ingin kamu beli" << endl;
   cout << "1. buku , harga = 5000" << endl;
   cout << "2. pensil , harga = 1500" << endl;
   cout << "3. penghapus  , harga = 750"<< endl;
   cout << "4. spidol , harga = 10500" << endl;
   cout << "pilih nomor 1-4 = ";
   cin >> daftar;


   switch(daftar){
      case 1:
      cout << "anda memilih buku" << endl;
      cout << "masukan jumlah yang ingin anda beli" << endl;
      cin >> jumlah;
      totalharga = 5000 * jumlah;
      cout << "total harga yang harus anda bayar = " << totalharga << endl;
      break;


      case 2:
      cout << "anda memilih pensil" << endl;
      cout << "masukan jumlah yang ingin anda beli" << endl;
      cin >> jumlah;
      totalharga = 1500 * jumlah;
      cout << "total harga yang harus anda bayar = " << totalharga << endl;
      break;


      case 3:
      cout << "anda memilih penghapus" << endl;
      cout << "masukan jumlah yang ingin anda beli" << endl;
      cin >> jumlah;
      totalharga = 750 * jumlah;
      cout << "total harga yang harus anda bayar = " << totalharga << endl;
      break;


      case 4:
      cout << "anda memilih spidol" << endl;
      cout << "masukan jumlah yang ingin anda beli" << endl;
      cin >> jumlah;
      totalharga = 10500 * jumlah;
      cout << "total harga yang harus anda bayar = " << totalharga << endl;
      break;

      default:
      cout << "anda memasukan selain nomor dilist" << endl;
      break;
   }

   cout << "Ingin Belanja Lagi?" << endl;
   cout << "[Y/N]" << endl;
   cin >> got;

   if (got == 'Y' || got == 'y'){
      goto awal;
   }else {
      exit (0);
   }
   getch();
}