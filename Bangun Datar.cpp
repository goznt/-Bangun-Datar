#include<iostream>
#include<math.h>
using namespace std;
main()
{
 	char kode;
	cout << "===========================================================" << endl;
q:  cout << "|      Ketut Gede Rai Wistika Putra_210030178_BC213       |" << endl;
 	cout << "===========================================================" << endl;
	cout << "|              Luas Dan Keliling Bangun Datar             |" << endl;
 	cout << "===========================================================" << endl;
 	cout << " Pilih Menu Bangun Datar Yang Akan Digunakan :             " << endl;
 	cout <<(" \n 1.Segitiga  ");
 	cout <<(" \n 2.Persegi Panjang ");
 	cout <<(" \n 3.Lingkaran ");
 	cout <<(" \n 4.Persegi ");
 	cout <<(" \n 5.Trapesium");
 	cout <<(" \n 6.Layang-Layang\n");
 	cout << "===========================================================" << endl;
 	cout <<("\n  Menu Yang Anda Pilih  : ");cin>>kode;
 	cout << "===========================================================" << endl;
 	
 	
 switch(kode)
 {
  case'1':
   int pa,pb,a,t,ks,ls;
   cout<<("	Luas Dan Keliling Segitiga\n");
   cout <<"===========================================================" << endl;
   cout<<("\n Masukan panjang sisi A : ");cin>>pa;
   cout<<("\n Masukan panjang sisi B: ");cin>>pb;
   cout<<("\n Masukan alas : ");cin>>a;
   cout<<("\n Masukan tinggi : ");cin>>t;
   cout<<endl;
   cout << "===========================================================" << endl;
   ks=pa+pb+a;
   cout<<("\n Keliling : ");cout<<ks;
   cout<<endl;
   ls=0.5*a*t;
   cout<<("\n Luasnya  : ");cout<<ls;
   break;
   
  case'2':
   int pp,lp,luas,kp;
   cout<<("	Luas Dan Keliling Persegi Panjang\n");
   cout <<"===========================================================" << endl;
   cout<<("\n Masukan panjang : ");cin>>pp;
   cout<<("\n Masukan lebar : ");cin>>lp;
   cout << "===========================================================" << endl;
   luas=pp*lp;
   cout<<("\n Luas : ");cout<<luas;
   cout<<endl;
   kp=(2*pp)+(2*lp);
   cout<<("\n Keliling : ");cout<<kp;
   break;
   
  case'3':
   int r;
   	double L, K;
    cout<<("	Luas Dan Keliling Lingkaran\n");
    cout <<"===========================================================" << endl;
    cout<<("\n Masukan jari jari (r) : ");cin>>r;
   	cout << "===========================================================" << endl;
	L = (double) 22 / 7 * r * r;
    K = 2 * ((double) 22 / 7) * r;
   	cout << "Luas  : " << L << endl;
	cout << "Keliling  : " << K << endl;
    break;
    
  case'4':
   int s; 
   float l, k;
   cout<<("	Luas Dan Keliling Persegi\n");
   cout <<"===========================================================" << endl;
   cout << "Masukkan sisi (s) : ";cin >> s;
   cout << "===========================================================" << endl;
	L = (double) s * s;
	K = (double) 4 * s;
	cout << "Luas  : " << L << endl;
	cout << "Keliling  : " << K << endl; 
   break;
   
  case'5':
	int AB,BC,CD,DA,T;
	cout<<("	Luas Dan Keliling Trapesium \n");
    cout <<"===========================================================" << endl;
	cout<<"masukkan nilai panjang rusuk sejajar atas : ";cin>>AB;
	cout<<"masukkan nilai panjang rusuk sejajar bawah : ";cin>>CD;
	cout<<"masukkan nilai rusuk sejajar samping 1 : ";cin>>DA;
	cout<<"masukkan nilai rusuk sejajar samping 2 : ";cin>>BC;
	cout<<"masukkan nilai tinggi : ";cin>>t;
	cout << "===========================================================" << endl;
	L=(CD+AB)*t/2;
	K=(AB+BC+CD+DA);
	cout<<"luas : "<<L<<endl;
	cout<<"keliling : "<<K<<endl;
   break;
   
   case'6':
   	double d1,d2,A,B;
	double Keliling;
	double Luas;
    cout<<"	Luas Dan Keliling Layang-Layang \n"<<endl;
    cout <<"===========================================================" << endl;
	cout<<"Masukkan Diagonal 1    : ";cin>>d1;
	cout<<"Masukkan Diagonal 2    : ";cin>>d2;
	cout<<"Masukan sisi A         : ";cin>>A;
	cout<<"Masukan sisi B         : ";cin>>B;
	cout << "===========================================================" << endl;
	Keliling=2*(A+B);
	Luas=d1*d2/2;
	cout<<"Luas     : "<<Luas<<endl;
	cout<<"Keliling : "<<Keliling<<endl;
	break;
	
   	default:
   cout<<("Maaf Kode Yang Anda Masukan Salah");
   
 }
 
 	cout << "\n===========================================================" << endl;
    cout << "\n Apakah Anda Ingin Menginput Ulang ? [Y/T] ? : ";
    cin >>kode;
    cout << "===========================================================" << endl;
    cout <<"|                      TERIMA KASIH                       |" << endl;
    cout << "===========================================================" << endl;
    if(kode == 'Y' || kode == 'y'){
        system("cls");
        goto q;
    } else {
        exit(0);
    }
   
}


