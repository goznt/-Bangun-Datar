#include <iostream>
#include <math.h>
 
using namespace std;
 
void segitigasamakaki();
void persegipanjang();
void lingkaran();
void persegi();
void trapesium();
void belahketupat();
 
int main(){
    int kode;
    char u;
    cout << "===========================================================" << endl;
 q: cout << "|      Ketut Gede Rai Wistika Putra_210030178_BC213       |" << endl;
    cout << "===========================================================" << endl;
    cout << "|             Luas Dan Keliling Bangun Datar              |" << endl;
    cout << "===========================================================" << endl;
    cout << "|   Pilih Menu Bangun Datar Yang Akan Digunakan :         |" << endl;
    cout << "|                                                         |" << endl;
    cout << "|1.Segitiga Sama Kaki                                     |" << endl;
    cout << "|2.Persegi Panjang                                        |" << endl;
    cout << "|3.Lingkaran                                              |" << endl;
    cout << "|4.Persegi                                                |" << endl;
    cout << "|5.Trapesium Sama Kaki                                    |" << endl;
    cout << "|6.Belah Ketupat                                          |" << endl;
    cout << "===========================================================" << endl;
    cout << "	 Menu Yang Anda Pilih  Adalah : ";						
    cin >> kode;
    cout << "===========================================================" << endl;
    switch(kode){
        case 1 :
            segitigasamakaki();
            break;
        case 2 :
            persegipanjang();
            break;
        case 3 :
           lingkaran();
            break;
        case 4 :
            persegi();
            break;
        case 5 :
           trapesium();
            break;
        case 6 :
            belahketupat();
            break;
            
        default:
		cout<<("Maaf Kode Yang Anda Masukan Salah");
    }
    cout << endl;
    cout << "===========================================================" << endl;
    cout << " Apakah Anda Ingin Menginput Ulang ? [Y/T] ? : ";
    cin >> u;
    cout << "===========================================================" << endl;
    cout <<"|                      TERIMA KASIH                       |" << endl;
    cout << "===========================================================" << endl;
    if(u == 'Y' || u == 'y'){
        system("cls");
        goto q;
    } else {
        exit(0);
    }
    return 0;
}

void segitigasamakaki(){
    float a, t, s, L, K;
    cout<<"	Luas Dan Keliling Segitiga Sama Kaki\n"<<endl;
	cout << "===========================================================" << endl;
    cout<<"Mencari sisi s (sisi miring)"<<endl;
    cout<<"Masukan sisi a (alas) = ";cin>>a;
    cout<<"Masukan sisi t (Tinggi) = ";cin>>t;
    s = sqrt(pow(t,2)+pow(a,2));
    cout << "===========================================================" << endl;
    cout<<"Jadi sisi s = "<<s<<endl;
    L =  (double)1/2 * a * t;
	K =  (double)a + 2 * s;
	cout << "===========================================================" << endl;
	cout << "\n Luas : " << L << endl;
	cout << "\n Keliling  : " << K << endl;
}
	
void persegipanjang(){
   float p,l,luas,kll;
   cout<<("	Luas Dan Keliling Persegi Panjang\n");
   cout << "===========================================================" << endl;
   cout<<("\n Masukan panjang : ");cin>>p;
   cout<<("\n Masukan lebar : ");cin>>l;
   luas=p*l;
   cout << "===========================================================" << endl;
   cout<<("\n Luas : ");cout<<luas;
   cout<<endl;
   kll=(2*p)+(2*l);
   cout<<("\n Keliling : ");cout<<kll;
}

void lingkaran(){
    float r, L, K;
    cout<<(" Luas Dan Keliling Lingkaran\n");
    cout << "===========================================================" << endl;
    cout<<(" Masukan jari jari (r) : ");cin>>r;
	L = (double) 22 / 7 * r * r;
    K = 2 * ((double) 22 / 7) * r;
    cout << "===========================================================" << endl;
   	cout << "\n Luas  : " << L << endl;
	cout << "\n Keliling  : " << K << endl;
}

void persegi(){
    float s, l, k;
    cout<<(" Luas Dan Keliling Persegi\n");
    cout << "===========================================================" << endl;
    cout << "Masukkan sisi (s) : ";cin >> s;
	l = (double) s * s;
	k = (double) 4 * s;
	cout << "===========================================================" << endl;
	cout << "\n Luas  : " << l << endl;
	cout << "\n Keliling  : " << k << endl; 
}

void trapesium(){
	float AB,s,CD,t,L,K;
	cout<<(" Luas Dan Keliling Trapesium Sama Kaki \n");
	cout << "===========================================================" << endl;
	cout<<"Mencari sisi s (sisi miring)"<<endl;
    cout<<"Masukan sisi AB (rusuk panjang atas) = ";cin>>AB;
    cout<<"Masukan sisi CD (rusuk panjang bawah) = ";cin>>CD;
    cout<<"Masukan sisi t (Tinggi) = ";cin>>t;
	s = sqrt(pow(t,2)+pow(CD-AB,2));
	cout << "===========================================================" << endl;
	cout<<"Jadi sisi s (sisi miring) = "<<s<<endl;
	cout << "===========================================================" << endl;
	L=(CD+AB)*t/2;
	K=(AB+CD+2*s);
	cout<<"\n luas : "<<L<<endl;
	cout<<"\n keliling : "<<K<<endl;
}

void belahketupat(){
	float d1,d2,s,K,L;
    cout<<"	Luas Dan Keliling Belah Ketupat \n"<<endl;
    cout << "===========================================================" << endl;
	cout<<"Mencari sisi s (sisi)"<<endl;
	cout << "===========================================================" << endl;
    cout<<"Diagonal 1 : ";cin>>d1;
    cout<<"Diagonal 2 : ";cin>>d2;
    s = sqrt(pow(d1,2)+pow(d2,2));
    cout << "===========================================================" << endl;
	cout<<"Sisi adalah = "<<s<<endl;
	cout << "===========================================================" << endl;
	K=4*s;
	L=d1*d2/2;
	cout<<"\n Luas     : "<<L<<endl;
	cout<<"\n Keliling : "<<K<<endl;
}


 
