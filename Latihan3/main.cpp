#include <iostream>

using namespace std;

int main()
{
  int a,b,c;
  cout<<"Menentukan nilai tengah dari 3 bilangan"<< endl;
cout<< "Masukan bilangan ke 1: ";
cin >> a;
cout<< "Masukan bilangan ke 2: ";
cin >> b;
cout<< "Masukan bilangan ke 3: ";
cin >> c;

if (a>b && a<=c) cout<< "Bilangan ditengah adalah: "<< a;

if (b>a && b<=c) cout<< "Bilangan ditengah adalah: " << b;

if (c>b && c<=a) cout<< "Bilangan ditengah adalah: " << c;

return 0;
}
