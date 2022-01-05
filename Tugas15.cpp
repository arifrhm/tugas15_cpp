#include <iostream>

using namespace std;

   int input (int *a, int *b);

   int main()
   {
       int c, d;
       input (&c, &d);
       cout<<" Hasil : "<<c*d<<endl;
   }
    int input (int *a, int *b)
    {
        cout<<" Inputkan x : ";cin>>*a;
        cout<<" Inputkan y : ";cin>>*b;
        //cout<<" Hasil : "<<*a**b<<endl;
    }

/*
Inputkan x : 10
Inputkan y : 6
Hasil : 60
*/
