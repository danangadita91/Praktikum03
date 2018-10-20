# praktikum03
Latiahn1
" Mencari Bilangan terbesar dari banyak bilangan"
Alur algoritma :
1. Mendeklarasikan int i, max, A, dan X
2. Mendeklarasikan variable A dan X sebagai nilai inputan
3. Mendeklarasikan variable i sebagai perulangan
4. Mendeklarasikan variable max sebagai pengingat nilai tertinggi
5. Membuat rumus perulangan untuk menentukan banyak bilangan yang akan di bandingkan
	for (i;i<A;i++)
6. Menginput nilai A
7. Menginput nilai X
8. Membandingkan nilai X dengan max
	if (X> max) "jika X lebih besar dari max"
	max = X "maka nilai max adalah X"
	
Berikut kode lengkapnya
int main()
{int i=0;
int max=0;
int a,x;

cout<<"Masukan Julah bilangan: ";
cin>> a;
for (i;i<a;i++)
{
 cout << "Masukan bilangan ke- "<<i+1<< ":";
 cin >> x;
 if (x>max)
    max=x;
}
    cout << "Bilangan terbesar adalah : " << max << endl;
    return 0;
}

Berikut hasilnya
! [img] (https://raw.githubusercontent.com/danangadita91/praktikum03/master/Latihan1/latihan1/P3_Latihan1_CB.png)
! [img] (https://github.com/danangadita91/praktikum03/blob/master/Latihan1/latihan1/p3_latihan1_Run.png)
