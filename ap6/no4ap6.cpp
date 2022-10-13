#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

main(){
    int merek;
    char ukuran, got;
awal:
    cout << "Pilihlah merek baju dibawah ini (1-4)" << endl;
    cout << "[1] Prada" << endl;
    cout << "[3] Gucci" << endl;
    cout << "[5] Louis Vuitton" << endl;
    cout << "pilihan anda = ";
    cin >> merek;

    switch (merek){
        case 1:
        cout << "anda memilih merek baju prada" << endl;
        cout << "silahan pilih ukuran anda (S/M/XL)" << endl;
        cout << "pilihan anda = ";
        cin >> ukuran;
         if (ukuran == 's' || 'S'){
            cout << "anda memilih baju prada dengan ukuran S" << endl;
            cout << "harga baju anda adalah 150.000";
         } else if (ukuran == 'm' || 'M'){
            cout << "anda memilih baju prada dengan ukuran M" << endl;
            cout << "harga baju anda adalah 160.000";
         } else {
            cout << "anda memilih baju prada dengan ukuran lainnya" << endl;
            cout << "harga baju anda adalah 160.000";
         }
         break;

         case 3:
        cout << "anda memilih merek baju Gucci" << endl;
        cout << "silahan pilih ukuran anda (S/M/XL)" << endl;
        cout << "pilihan anda = ";
        cin >> ukuran;
         if (ukuran == 's' || 'S'){
            cout << "anda memilih baju Gucci dengan ukuran S" << endl;
            cout << "harga baju anda adalah 200.000";
         } else if (ukuran == 'm' || 'M'){
            cout << "anda memilih baju Gucci dengan ukuran M" << endl;
            cout << "harga baju anda adalah 200.000";
         } else {
            cout << "anda memilih baju Gucci dengan ukuran lainnya" << endl;
            cout << "harga baju anda adalah 200.000";
         }
        break;

         case 5:
        cout << "anda memilih merek baju prada" << endl;
        cout << "silahan pilih ukuran anda (S/M/XL)" << endl;
        cout << "pilihan anda = ";
        cin >> ukuran;
         if (ukuran == 's' || 'S'){
            cout << "anda memilih baju prada dengan ukuran S" << endl;
            cout << "harga baju anda adalah 300.000";
         } else if (ukuran == 'm' || 'M'){
            cout << "anda memilih baju prada dengan ukuran M" << endl;
            cout << "harga baju anda adalah 300.000";
         } else {
            cout << "anda memilih baju prada dengan ukuran lainnya" << endl;
            cout << "harga baju anda adalah 350.000";
         }
         break;

        default:
        cout << "anda salah memilih merek masukan 1/3/5";
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