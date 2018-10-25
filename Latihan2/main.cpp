#include <iostream>

using namespace std;

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
