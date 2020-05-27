//Realizar un programa en c++ que verifique si un número es positivo, negativo o cero.
#include <iostream>
#include <math.h>

using namespace std;

int main(){

int x;

cout<< "Por favor ingrese un numero"<<endl;
cin>>x;

if(x<0){
    cout<< "El numero "<<x<< " es: negativo";

}

else if(x==0)
cout<<"El numero "<< x << " es: cero";

else if(x>0)
cout<<"El numero " << x << " es: positivo";



return 0;
}