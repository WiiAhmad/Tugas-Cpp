#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

main(){
    int tahun, prodi, absen, fakultas, fakultasb;
  
    cout << "================================" << endl;
    cout << "PROGRAM MENENTUKAN NRP MAHASISWA" << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Masukan tahun masuk anda dengan 2 digit terakhir" << endl;
    cout << "Masukan Tahun Masuk Anda = ";
    cin >> tahun;
    cout << endl;
    cout << "Masukan Absensi Anda dengan 2 digit" << endl;
    cout << "CONTOH ABSEN '1' MASUKAN DENGAN 01" << endl;
    cout << "Absensi = ";
    cin >> absen;
    cout << endl;
    cout << "PILIH FAKULTAS ANDA" << endl;
    cout << "[1] FAKULTAS TEKNIK " << endl;
    cout << "[2] FAKULTAS KEDOKTERAN " << endl;
    cout << "[3] FAKULTAS ILMU SOSIAL DAN POLITIK " << endl;
    cout << "[4] FAKULTAS ILMU KOMPUTER " << endl;
    cout << "Pilih Fakultas anda [1-4] = ";
    cin >> fakultas;

    switch (fakultas){
        case 1:
            cout << "anda memilih fakultas teknik" << endl;
            cout << "silahkan memilih prodi anda" << endl;
            cout << "[1] prodi teknik lingkungan" << endl;
            cout << "[2] prodi teknik mesin" << endl;
            cout << "[3] prodi teknik elektro" << endl;
            cout << "[4] prodi teknik arsitektur" << endl;
            cout << "prodi = ";
            cin >> prodi;
        break;

        case 2:
            cout << "anda memilih fakultas kedokteran" << endl;
            cout << "silahkan memilih prodi anda" << endl;
            cout << "[1] prodi pendidikan dokter" << endl;
            cout << "[2] prodi ilmu gizi" << endl;
            cout << "[3] prodi kedokteran gigi" << endl;
            cout << "[4] prodi kebidanan" << endl;
            cout << "prodi = ";
            cin >> prodi;
        break;

        case 3:
            cout << "anda memilih fakultas ilmu sosial dan politik" << endl;
            cout << "silahkan memilih prodi anda" << endl;
            cout << "[1] prodi psikolog" << endl;
            cout << "[2] prodi ilmu politik" << endl;
            cout << "prodi = ";
            cin >> prodi;
        break;

        case 4:
            cout << "anda memilih fakultas ilmu komputer" << endl;
            cout << "silahkan memilih prodi anda" << endl;
            cout << "[1] prodi sistem informasi" << endl;
            cout << "[2] prodi teknik komputer" << endl;
            cout << "prodi = ";
            cin >> prodi;
        break;

        default:
            cout << "anda memasukan selain nomor dilist" << endl;
        break;
    }
    if(absen<=9){
   cout << "========="<<endl;
   cout << "NRP: "<<endl;
   cout<<""<<tahun<<"."<<0<<""<<fakultas<<"."<<0<<""<<prodi<<"."<<0<<absen<<endl;
   }

   else {
   cout << "========="<<endl;
   cout << "NRP: "<<endl;
   cout<<""<<tahun<<"."<<0<<""<<fakultas<<"."<<0<<""<<prodi<<"."<<absen<<endl;
   }


    getch();
}