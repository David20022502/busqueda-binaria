#include <iostream>
#include <fstream>
using namespace std;

#define tamanio(a) (sizeof(a)/sizeof(a[0]));
int main()
{

    int b,i,j,k;
    ofstream archivobinario;
    int numeros, buscar, posicion;
    archivobinario.open("binario.txt", ios::out);
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    archivobinario<< "arreglo :";
    for (int e=0;e<10;e++)
    {
      archivobinario<<a[e];
    }
    archivobinario<< "\n";
    i=0;
    j=10-1;
    cout << "ingrese el elemento a buscar: ";
    cin >>b;
    archivobinario<< "elemento a buscar: " << b;
    do{

        k=(i+j)/2;

        if (a[k]<=b)
        {
            i=k+1;
        }


        if(a[k]>=b)
        {
            j=k-1;
        }


    }
    while(i<=j);
    if(b==a[k])
    {
       cout<<"ELEMENTO ENCONTRADO EN: "<<a[k];
       archivobinario<< "\n";
      archivobinario<<"ELEMENTO ENCONTRADO EN: "<<a[k];
    }
    else
    {
      cout<<"ELEMENTO NO ENCONTRADO ";
      archivobinario<< "\n";
      archivobinario<<"ELEMENTO NO ENCONTRADO";
    }
    return 0;
}
