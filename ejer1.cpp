//Realizar un programa en c++ que verifique si un número es divisible entre otro.
#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a,b;
    float x;
    float z;
    
    cout<<" Ingrese el numero que desea dividir: ";
    cin>>a;
    cout<<endl;
    cout<<" Ingrese otro numero: ";
    cin>>b;

    x=a%b;
    z=a/b;
    

    if(x==0){
        cout<< "Los numeros ingresados son divisibles entre si, su residuo es: " << x;

    }
    else if(x!=0){
    cout<< "Ambos numeros no son divisibles entre si, su residuo es: " <<x;
    }
cout<<endl;
    cout<< "El resultado de la operacion es: " <<z;
    return 0;
}
