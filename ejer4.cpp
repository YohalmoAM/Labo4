/*Realizar un programa en c++ que verifique si la palabra ingresada es mayor a
10 caracteres o no y si la longitud es par o impar
*/
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdio.h>

using namespace std;

int main(){

    char texto[30];
    int x,longitud;

    cout<<"Escriba una palabra: ";
    cout<<endl;
    cin>>texto;

    longitud=strlen(texto);
    for(x=0; x<= 9;x++)
    {
    }
     if(texto[30]>10)
         cout<< "El texto ingresado tiene mas de " << x<<" caracteres."<<endl;
         
         else(texto[30]<10);
         cout<< "El texto ingresado tiene menos de "<< x << " caracteres."<<endl;
         if(longitud%2==0){
         cout<< "La longitud del texto es par."<<endl;
         }
         else{
         cout<<"La longitud del texto ingresado es impar.";
         }

}
