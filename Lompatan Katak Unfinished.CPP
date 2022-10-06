#include <iostream.h>
#include <conio.h>

void main(){

   int koor,lp1,lp2,koors1,koors2,jmlp;		//lp1 : Lompatan Katak ke kanan.
                           						//lp2 : Lompatan Katak ke kiri.
                                             //koors: Koordinat Katak Sekarang(HASIL).
                                 				//jmlp : Jumlah Lompatan Katak.


   cout<<"Masukan Koordinat Katak: ";
   cin>>koor;
   cout<<"Masukan Panjang Lompatan Katak Ke Kanan: ";
   cin>>lp1;
   cout<<"Masukan Panjang Lompatan Katak Ke Kiri: ";
   cin>>lp2;

   //jadi rumusnya koordinat+(jumlahlompatan/2)*(lompatanpertama-lompatankedua) , kalau genap gak usah +1
   //jadi rumusnya koordinat+(jumlahlompatan/2)*(lompatanpertama-lompatankedua)+1 ,+1 karena ganjil


   if(koor%2==0 || koor==0){
   jmlp=lp1*lp2;
   	if(jmlp%2==0){
      koors1=koor+((jmlp/2)*(lp1-lp2));
      cout<<"Koordinat Katak Sekarang: "<<koors1<<endl;
      }
      else{
      koors2=(koor+(((jmlp)/2)*(lp1-lp2)))+1;
      cout<<"Koordinat Katak Sekarang: "<<koors2<<endl;
      }
   }
   else if(koor<0){
   jmlp=lp1*lp2;
   	if(jmlp%2==0){
      koors1=koor+((jmlp/2)*(lp1-lp2));
      cout<<"Koordinat Katak Sekarang: "<<koors1<<endl;
      }
      else{
      koors2=(koor+(((jmlp+1)/2)*(lp1-lp2)))+1;    //broken
      cout<<"Koordinat Katak Sekarang: "<<koors2<<endl;
      }
   }
   else if(koor<0 && koor%3==0){
   jmlp=lp2*2;
   	if(jmlp%2==0){
      koors1=koor+((jmlp/2)*(lp1-lp2));
      cout<<"Koordinat Katak Sekarang: "<<koors1<<endl;
      }
      else{
      koors2=(koor+(((jmlp+1)/2)*(lp1-lp2)))+1;    //broken
      cout<<"Koordinat Katak Sekarang: "<<koors2<<endl;
      }
   }
   else{
   jmlp=lp1*2;
   	if(jmlp%2==0){
      koors1=koor+((jmlp/2)*(lp1-lp2));
      cout<<"Koordinat Katak Sekarang: "<<koors1<<endl;
      }
      else{
      koors2=(koor+(((jmlp+1)/2)*(lp1-lp2)))+1;     //broken
      cout<<"Koordinat Katak Sekarang: "<<koors2<<endl;
      }
   }
   getch();

}