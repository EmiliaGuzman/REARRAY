#include <iostream>

using namespace std;

int sumarRecursiva(int m[], int c)

{

    int i=0;

    if(c==1){

        return m[i];

    }

    else{

        return c-1 + sumarRecursiva( m,c-1);

    }

}

int main()
{
    int nuev[3];

    for(int i=0; i < 3; i ++)

    {

        cin >> nuev[i];

    }

    sumarRecursiva(nuev, 3);

}

void inversion(int lista[],int n)
{
    ///int lista[],  lista1[]={};
    int h;
    for(int a=0; a<n; a++){
        for(int b=n; b>=0; b--){
            h=lista[a];
            lista[a]=lista[b];///lista1={} ---> lista1={1,2,3}
            lista[b]=h;
            cout << lista;
        }///
    }

}
void inversionRecursiva(int lista[], int n,int a)
{
        int m;
        if(n==1){
            return lista[0];
        }
        else{
            m=lista[a];
            lista[a]=lista[n];
            lista[n]=m;
            return (lista, n--, a++)
        }
}

int main()
{
    int n;
    cout << "Ingrese longitud de lista: ";
    cin >> n;
    int l[n];
    for(int i=0; i<n; i++){
        cin >> l[i];///lista[3]={1,2,3}}
    inversion(l,n);}
}


void ordenar(int p[], int f)
{
    int q;
    if(f%2==0){
        cout << "es par";
    }
    else{cout << "es impar";}
    for(int i=0; i<f; i++){
        if(p[i]>p[i+1]){///c=a;a=b;b=c
            q=p[i];
            p[i]=p[i+1];
            p[i+1]=q;
        }
        else{
            p[i];
        }
    }
    cout << p;
}

int main()
{
    int p[]={3,2,4};
    ordenar(p,3);
}
