#include <iostream>
#include <conio.h>

main(){
	int nilai;

cout << "========================================" << endl;
cout << "PROGRAM MENENTUKAN NILAI, BOBOT DAN MUTU" << endl;
cout << "========================================" << endl;
awal:
cout << "Masukan nilai anda =";
cin >> nilai;

if(nilai<=49){
  cout << "Nilai anda adalah =" << nilai << endl;
  cout << "Bobot anda adalah [E]" << endl;
  cout << "Mutu anda adalah [0]" << endl;
}else if(nilai<=59){
  cout << "Nilai anda adalah =" << nilai << endl;
  cout << "Bobot anda adalah [D]" << endl;
  cout << "Mutu anda adalah [1]" << endl;
}else if(nilai<=69){
  cout << "Nilai anda adalah =" << nilai << endl;
  cout << "Bobot anda adalah [C]" << endl;
  cout << "Mutu anda adalah [2]" << endl;
}else if(nilai<=84){
  cout << "Nilai anda adalah =" << nilai << endl;
  cout << "Bobot anda adalah [B]" << endl;
  cout << "Mutu anda adalah [3]" << endl;
}else if(nilai<=100){
  cout << "Nilai anda adalah =" << nilai << endl;
  cout << "Bobot anda adalah [A]" << endl;
  cout << "Mutu anda adalah [4]" << endl;
}else{
	cout << "anda salah memasukan nilai anda" << endl;
   goto awal;
   }
getch();
}