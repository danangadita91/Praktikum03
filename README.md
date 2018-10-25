# praktikum3
```
Latihan1 "Mencari Bilangan Terbesar dari Banyak Bilangan"
Alur Algoritma:
1. Mendeklarasikan int i,max,A, dan X
2. Mendeklarasikan variabel A dan X sebagai nilai inputan
3. Mendeklarasikan variabel i sebagai perulangan
4. Mendeklarasikan variabel max sebagai pengingat nilai
5. Membuat rumus perulangan untuk menentukan banyak bilangan yang akan di bandingkan
	for (i;i<A;i++)
6. Menginputkan nilai A
7. Menginputkan nilai X
8. Membandingkan nilai x dengan max
	if ( x> max) // jika x lebih besar dari max
	max= x   // maka nilai max adalah x

Berikut kode lengkapnya :
```
```c++
	int main()
{
    int i=0;
    int max=0;
    int a,x;

    cout << "Masukan Jumlah Bilangan :";
    cin >> a;

    for (i;i<a;i++){
        cout<< "Masukan Bilangan Ke-" << i+1 << ":";
        cin>> x;

        if (X > max)
            max = X;
    }
    cout << "Bilangan Terbesar Adalah :"<< max <<endl;
    return 0;
}
```

Berikut Hasilnya :
```
![img](https://raw.githubusercontent.com/danangadita91/praktikum03/master/Latihan1/latihan1/P3_Latihan1_CB.png)
```
```
![img](https://github.com/danangadita91/praktikum03/blob/master/Latihan1/latihan1/p3_latihan1_Run.png)
```

```
Latihan2 "Mengurutkan 3 Bilangan dari yang terkecil"
Alur Algoritma:
1. Mendeklasrasikan int a,b,c sebagai variabel input
2. Membandingkan setiap variabel untuk menentukan nilai yang terkceil sampai yang terbesar
3. Dengan menggunkan rumus if dan percabangan
		if (a<b)
    		    {
       		       if (b<c)
                       cout<< a << "  " << b << "  " <<c;
		Jika a lebih kecil dari b dan jika b lebih kecil dari c maka yang akan ditampilkan
		a b c
Berikut kodenya :
```
```c++
int main()
{
    float a, b, c;
    cout<< "Mengurutkan 3 bilangan dari yang terkecil"<< endl;
    cout<< "Masukan bilangan ke 1: ";
    cin>> a;

    cout <<"Masukan bilangan ke 2: ";
    cin>> b;

    cout<<"Masukan bilangan ke 3: ";
    cin>> c;

    if (a<b)
    {
        if (b<c)
            cout << a << " "<< b << " "<<c;
        else
        {
            if (a<c)
                cout << a << " "<< c <<" " <<b;
        }
    }
    else
    {
        if (a<c)
            cout<< b << " "<< a<< " "<< c;
        else
        {
            if (b<c)
                cout<< b<< " "<< c<< " "<< a;
            else
                cout<< c <<" "<< b<< " "<< a;
        }
    }
    return 0;
}
```
Berikut adalah hasilnya :
```
![img](https://raw.githubusercontent.com/danangadita91/praktikum03/master/Latihan2/Mengurutkan%203%20Bilangan%20(1).png)
```
```
![img](https://raw.githubusercontent.com/danangadita91/praktikum03/master/Latihan2/Mengurutkan%203%20Bilangan%20(2).png)
```
```
![img](https://raw.githubusercontent.com/danangadita91/praktikum03/master/Latihan2/Mengurutkan%203%20Bilangan%20(3).png)
```

```
Latihan3 "Mencetak nilai tengah dari 3 bilangan berurut"
Alur Algoritma:
1. Mendeklarasikan int a, b, c sebagai variable input
2. Membandingkan setiap variable input untuk mencari nilai tengahnya
	dengan rumusan :
	if (a>b && a<=c) cout<< "Bilangan ditengah adalah: "<< a;
	if (b>a && b<=c) cout<< "Bilangan ditengah adalah: " << b;
	if (c>b && c<=a) cout<< "Bilangan ditengah adalah: " << c;

Berikut kode lengkapnya :
```

```c++
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
```

Berikut hasilnya :
```
![img](https://raw.githubusercontent.com/danangadita91/praktikum03/master/Latihan3/Nilai%20tengah%203%20bilangan%20(1).png)
```
```
![img](https://raw.githubusercontent.com/danangadita91/praktikum03/master/Latihan3/Nilai%20tengah%203%20bilangan%20(2).png)
```
```
![img](https://raw.githubusercontent.com/danangadita91/praktikum03/master/Latihan3/Nilai%20tengah%203%20bilangan%20(3).png)
```