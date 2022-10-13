#include <iostream>
#include <conio.h>

using namespace std;

main(){

    int bilangan;

    cout << "Masukan bilangan 0-9 = 9";
    cin >> bilangan;

    switch(bilangan){
        case 0:
        cout << "ini adalah bilangan nol";
        break;
        case 1:
        cout << "ini adalah bilangan satu";
        break;
        case 2:
        cout << "ini adalah bilangan dua";
        break;
        case 3:
        cout << "ini adalah bilangan tiga";
        break;
        case 4:
        cout << "ini adalah bilangan empat";
        break;
        case 5:
        cout << "ini adalah bilangan lima";
        break;
        case 6:
        cout << "ini adalah bilangan enam";
        break;
        case 7:
        cout << "ini adalah bilangan tujuh";
        break;
        case 8:
        cout << "ini adalah bilangan delapan";
        break;
        case 9:
        cout << "ini adalah bilangan sembilan";
        break;
        default:
        cout << "anda salah memasukan bilangan";
        break;
    }
    getch();
}