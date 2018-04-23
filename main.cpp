/*
Programa_49

funciones sin parametros.
prototipos, variables globales.

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 23 de abril de 2015
*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>


using namespace std;


void tabla_A();
void tablanombre();


int x, y;
string vec[4] [4];

int main()
{

    int opc;
    do
    {
        system ("cls");
        cout<<"\n\tFunciones\n\n";
        cout<<"\n\t1.- Llenar una tabla 4*4 con 'A' en la diagonal principal ";
        cout<<"\n\t2.- Llenar una tabla con mi nombre 'Luis' ";
        cout<<"\n\t3.- Salir";
        cout<<"\n\tElige una opcion: "; cin>>opc;

    switch (opc)
    {
    case 1:
        tabla_A();
    break;

    case 2:
        tablanombre();
    break;

    case 3:
        cout<<"\n\n\tHa elegido salir...\n\n\t";
        system ("pause");
    break;

    default:
        cout<<"\n\n\tHa elegido una opcion inexistente...\n\n\t";
        system ("pause");
    }

    }while(opc!=3);

cout<<"\a";


    return 0;
}

void tabla_A()
{
system ("cls");
    for (x=0; x<4; x=x+1)
    {
        for (y=0; y<4; y=y+1)
        {
        if(x==y)
            vec[x] [y]='A';
            else
                vec[x] [y]='B';
        }
    }

cout<<"\n\n";

    for (x=0; x<4; x=x+1)
    {
        for (y=0; y<4; y=y+1)
        {
            Sleep (500);
        cout<<"\t"<<vec[x] [y];
        }
        cout<<"\n";
    }

    cout<<"\n\n";
system ("pause");
}

void tablanombre()
{
system ("cls");
     for (x=0; x<4; x=x+1)
    {
        for (y=0; y<4; y=y+1)
        {

            if(x== 0 && y==0){
                vec[x] [y]='L';
            }else if (x==1 and y==1){
                vec[x] [y]='u';
            }else if (x==2 && y==2){
                vec[x] [y]='i';
            }else if (x==3 and y==3){
                vec[x] [y]='s';
            }else{
                vec[x] [y]='*';
            }
        }
    }

cout<<"\n\n";

    for (x=0; x<4; x=x+1)
    {
        for (y=0; y<4; y=y+1)
        {
            Sleep (500);
        cout<<"\t"<<vec[x] [y];
        }
        cout<<"\n";
    }

    cout<<"\n\n";
system ("pause");
}
