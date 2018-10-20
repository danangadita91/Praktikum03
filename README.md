# praktikum03

Latihan1 "Mencari Bilangan Terbesar dari Banyak Bilangan".
Alur Algoritma
1.Mendeklarasikan int i,max,A, dan X
2.mendeklarasikan variabel A dan X sebagai nilai inputan
3.Mendeklarasikan variabel i sebagai perulangan
4.Mendeklarasikan variabel max sebagai pengingat nilai
5.Membuat rumus perulangan untuk menentukan banyak bilangan yang akan di bandingkan
for (i;i<A;i++)
6.Menginputkan nilai A
7.menginputkan nilai X
8.Membandingkan nilai x dengan max
	if ( x> max) // jika x lebih besar dari max
    	max= x   // maka nilai max adalah x

*Berikut kode lengkapnya

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

*Berikut Hasilnya
![img](https://raw.githubusercontent.com/danangadita91/praktikum03/master/Latihan1/latihan1/P3_Latihan1_CB.png)
! [img] (https://github.com/danangadita91/praktikum03/blob/master/Latihan1/latihan1/p3_latihan1_Run.png)
