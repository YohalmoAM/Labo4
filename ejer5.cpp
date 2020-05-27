//Realizar un programa en c++ que verifique si la palabra ingresada inicia y finaliza con la misma letra.
#include <iostream>
#include <string.h>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main(){

    char texto[10];
    int letra1, letrault,x;

   cout<<"Escriba una palabra:"<<endl;
   cin.getline(texto,10,'\n');
   for(letra1=0; letrault<=10;letrault++){

   }
       if(letra1!=letrault){
           cout<< "La palabra ingresada inicia y finaliza con " <<letra1<< " una letra diferente."<<endl;
   }
   else{
       cout<< "La palabra ingresada inicia y termina con la misma letra.";}
   
}