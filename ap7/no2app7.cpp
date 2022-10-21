#include <iostream>
#include <conio.h>
#include <cstring> //test

main(){
int bil1, bil2, op, jumlah, bil3;
char ber;
awal2:
cout << "========================" << endl;
cout << "PROGRAM NO 2. CALCULATOR" << endl;
cout << "========================" << endl;

cout << "Masukan bilangan pertama =";
cin >> bil1;
cout << "Masukan bilangan kedua =";
cin >> bil2;
	awal:
cout << "PILIH OPERATOR [1-4]" << endl;
cout << "[1] PERTAMBAHAN (+)" << endl;
cout << "[2] PENGURANGAN (-)" << endl;
cout << "[3] PERKALIAN (*)" << endl;
cout << "[4] PEMBAGIAN (/)" << endl;
cout << "pilihan anda =";
cin >> op;

switch(op){
	case 1:
   cout << bil1 << "+" << bil2 << endl;
   jumlah=bil1+bil2;
   cout << "Jumlah =" << jumlah << endl;
   cout << "anda ingin mengulang? [S/N]";
   cin >> ber;
   	if(ber == 's' || ber == 'S'){
      goto awal2;
      }else{
      exit;
      }
   break;

   case 2:
   cout << bil1 << "-" << bil2 << endl;
   jumlah=bil1-bil2;
   cout << "Jumlah =" << jumlah << endl;
   		if(ber == 's' || ber == 'S'){
      goto awal2;
      }else{
      exit;
      }
   break;

   case 3:
   cout << bil1 << "*" << bil2 << endl;
   jumlah=bil1*bil2;
   cout << "Jumlah =" << jumlah << endl;
   		if(ber == 's' || ber == 'S'){
      goto awal2;
      }else{
      exit;
      }
   break;

   case 4:
   cout << bil1 << "/" << bil2 << endl;
   jumlah=bil1/bil2;
   cout << "Jumlah =" << jumlah << endl;
   		if(ber == 's' || ber == 'S'){
      goto awal2;
      }else{
      exit;
      }
   break;

   default:
   cout << "anda salah memilih operator" << endl;
   goto awal;
   }
   getch ();
}