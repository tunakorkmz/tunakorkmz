
// // #include<iostream>
// // using namespace std;
// // class arac {
// // public:
// // 	arac();
// // };
// // arac::arac()
// // {
// // 	cout << "Bu bir arac" << endl;
// // }
// // class tekerlek
// // {
// // public:
// // 	tekerlek();

// // };
// // tekerlek::tekerlek()
// // {
// // 	cout << "Bu arac 4 tekerlekli" << endl;
// // }
// // class araba :public arac, public tekerlek
// // {

// // };

// // int main()

// // {
// // 	araba obj;
// // 	system("Pause");
// // 	return 0;
// // }
// //  using namespace std;
// // enum Color { red, green, blue };
// // Color r = red;

// // switch(r)
// // {
// //     case red  : std::cout << "red\n";   break;
// //     case green: std::cout << "green\n"; break;
// //     case blue : std::cout << "blue\n";  break;
// // }
// // class Cokgen {
// // protected:
// // int genislik, yukseklik;
// // public:
// // void DegerVer(int x,int y) {
// // genislik=x; yukseklik=y;
// // }
// // };
// // class Kare : public Cokgen{ // Kare sınıfı Cokgen sınıfından turetiliyor
// // public:
// // int Alan () {return genislik*yukseklik;}
// // };
// // class Ucgen : public Cokgen{ // Ücgen sınıfı Cokgen sınıfından türetiliyor.
// // public:
// // int Alan () {return (genislik*yukseklik)/2;}
// // };
// // int main ()
// // {
// // Kare D1;
// // Ucgen U1;
// // //D1 Kare nesnesinin genişlik ve yüksekliğine değeri atanıyor.
// // D1.DegerVer(3,3);
// // //U1 Ucgen nesnesinin genişlik ve yüksekliğine değeri atanıyor.
// // U1.DegerVer(7,2);
// // cout << “Kare Alan: ” << D1.Alan()<<endl;
// // cout << “Ucgen Alan: ” << U1.Alan()<<endl;
// // getch();
// // return 0;
// // }

// // enum day {sunday = 1, tuesday, wednesday, thursday, friday, saturday};

// // int main()
// // {
// //     enum day d = thursday;
// //     cout << "day:" << d << endl;
// //     return 0;
// // }
// // #include<iostream>
// // using namespace std;
// // enum State {WORKING = 0, FAILED, FREEZED};
// // enum State currState;

// // enum State FindState() {
// // 	return currState;
// // }

// // int main() {
// // (FindState() == WORKING)? cout<<("WORKING"): cout<<("NOT WORKING");
// // return 0;
// // }

// // #include <iostream>

// // using namespace std;

// // int main(){

// //   int sayi = 1453;
// //   cout << "Degisken degeri: " << sayi << endl;
// //   cout << "Degisken adresi: " << &sayi << endl;

// //   cout << endl;

// //   int *ptr = &sayi;
// //   cout << "Pointer'in gosterdigi adres: " << ptr << endl;
// //   cout << "Pointer'in gosterdigi adres degeri: " << *ptr << endl;
// //   cout << "Pointer adresi: " << &ptr;

// //   return 0;
// // }
// // #include <iostream>

// // using namespace std;

// // int main(){

// //   int sayilar[] = {55, 66, 77, 88, 99, 18};
// //   int *ptr = sayilar; // &sayilar[0];

// //   cout << "1.eleman: " << *ptr << endl;
// //   ptr++;
// //   cout << "2.eleman: " << *ptr << endl;
// //   cout << "5.eleman: " << *(ptr + 3) << endl;
// //   ptr--;
// //   cout << "1.eleman: " << *ptr << endl;

// //   return 0;
// // // }

// // #include <iostream>

// // using namespace std;

// // int main(){

// //   char karakter = 'Y';
// //   char *ch = &karakter;

// //   for (int i = 0; i <= 10; i++){
// //     cout << *(ch + i);
// //   }

// //   return 0;
// // }

// #include <iostream>

// using namespace std;

// int main(){

//   int sayilar[] = {55, 66, 77, 88, 99, 18};
//   int *ptr = sayilar;

//   for (int i = 0; i < sizeof(sayilar) / 4; i++){
//     cout << "sayilar[" << i << "] = " << *(ptr + i) << endl;
//   }

//   return 0;
// // }
// #include <iostream>

// using namespace std;

// int main(){

//   int elemanSayisi = 0;
//   int *eleman;

//   cout << "Eleman sayisi: ";
//   cin >> elemanSayisi;

//   eleman = (int *) malloc(elemanSayisi * sizeof(int));

//   for (int i = 0; i < elemanSayisi; i++){
//     cout << i + 1 << ". eleman: ";
//     cin >> *(eleman + i);
//   }

//   for (int i = 0; i < elemanSayisi; i++ ){
//     cout << eleman[i] << endl;
//   }

//   free(eleman);

//   return 0;
// }

// #include <iostream>

// using namespace std;

// int main(){

//   int sayi = 1453;
//   int *ptr = &sayi;
//   int **pptr = &ptr;
//   int ***ppptr = &pptr;
//   int ****pppptr = &ppptr;

//   cout << sayi << endl;
//   cout << *ptr << endl;
//   cout << **pptr << endl;
//   cout << ***ppptr << endl;
//   cout << ****pppptr << endl;

//   return 0;
// }
// #include <iostream>

// using namespace std;

// int carpma(int s1, int s2)
// {
//     return s1 * s2;
// }

// int toplama(int s1, int s2)
// {
//     return s1 + s2;
// }

// int main()
// {

//     int (*fonksiyon)(int, int);

//     fonksiyon = carpma;
//     cout << fonksiyon(10, 20);

//     cout << endl;

//     fonksiyon = &toplama;
//     cout << (*fonksiyon)(10, 20);

//     cout << endl;

//     return 0;
// }

// #include <iostream>            // trafik lambası 
// using namespace std;

// enum Light
// {

//     stop, // red
//     slow,// yellow
//     go  // green

// };

// int main()
// {
//     Light trafficLight ;
//     trafficLight = stop;

//     for(int time=0 ; time < 12 ; time++)
//     {

//     cout << "Time : " << time << "\t Trafic light is " << trafficLight << endl ;

//     if               ( trafficLight == stop)       {trafficLight = go; }         // red > green
//     else if        ( trafficLight == go )         {trafficLight = slow; }     // green > yellow
//     else if        ( trafficLight == slow )      {trafficLight = stop; }      // yellow > red 
//     }
// }

// enum class Season
// {
//     Summer,
//     Spring,
//     Winter,
//     Autumn
// };
// enum class Color{
//     Blue,
//     Pink,
//     Green
// };
// int main()
// {
//     Season s = Season::Summer;
//     Color c = Color::Blue;
//     if( s == c )
//     {
//     	std::cout << "Equal" << std::endl;
//     }
//     else
//     {
//     	std::cout << "Not Equal" << std::endl;
//     }
//     return 0;
// }
// #include <iostream>
// #include <string>
// using std::cout;

// class RasyonelSayi
// {
// public:
//     int pay;
//     int payda:

//     RasyonelSayi (int x , int y)
//     {
//         pay = x ;
//         payda = y ;
//     }    
//     RasyonelSayi operator+(const RasyonelSayi &s)  //tek değişken yolladık çünkü fonk class içinde oldugu için çapırmak için bir değişken yollanıyor parametre olarak diğer sayıyı giriyoruz
//     {
//         return RasyonelSayi(s.pay * payda + s.payda * pay, s.payda * payda);
//     }

//     std::string toString()
//     {
//         return std::to_string(pay) + "/" + std::to_string(payda) ;
//     }

// };


// int main()
// {

//     RasyonelSayi s1( 1,2 );
//     RasyonelSayi s2( 2,3  );

//     cout << t.toString() << "\n";

//     RasyonelSayi t = s1 + s2 ;
//     return 0;
// } 


// class X {
// public:
// void display();
// void set(int);
// private:
// int a;
// };
// #include <iostream>
// using namespace std;
// void X::set(int val)
// {
// cout << "X::set()cagrildi" << endl;
// cout << "this = " << this << endl;
// a = val;
// }
// void X::display()
// {
// cout << "X::display() cagrildi!" << endl;
// cout << "this = " << this << endl;
// cout << "a = " << a << endl;
// }
// int main()
// {
// X myx;
// cout << "&myx = " << &myx << endl;
// myx.set(10);
// myx.display();
// X *ptr = &myx;
// ptr->display();
// return 0;
// }
// #include <iostream>
// using namespace std;
// int a = 10;
// int main()
// {
// int a = 20;
// ::a = 50;
// cout << a << endl;
// {
// int a = 30;
// ::a = 100;
// cout << a << endl;
// }
// cout << ::a << endl;
// // Global a
// // Yerel a
// // Global a
// // Yerel a
// // Global a
// return 0;
// }

// #include <iostream>
// #include <ctime>
// class Date {
// public:
// Date();
// Date(int, int, int);
// void display();
// private:
// int day, month, year;
// };
// using namespace std;
// Date::Date()
// {
// time_t timer = time(0);
// tm *tptr = localtime(&timer);
// day = tptr -> tm_mday;
// month = tptr -> tm_mon + 1;
// year = tptr -> tm_year + 1900;
// }
// Date::Date(int d, int m, int y)
// {
// day = d;
// month = m;
// year = y;
// }
// void Date::display()
// {
// cout << day <<'/' << month << '/' << year;
// }
// int main()
// {
// Date date1;
// date1.display();
// Date date2(28, 10, 1998);
// cout << endl;
// date2.display();
// cout << endl;
// return 0;
// }
#include <iostream>
using namespace std;
class Complex {
double real, imag;
public:
Complex(double, double = 0.);
void display();
};
Complex::Complex(double r, double i)
{
real = r;
imag = i;
}
void Complex::display()
{
cout << real;
if (imag != 0)
cout << "+" << imag;
cout <<'\n';
}
int main()
{
Complex c1(10);
c1.display();
// Complex x(10, 0)
Complex c2(10, 20);
c2.display();
return 0;
}
