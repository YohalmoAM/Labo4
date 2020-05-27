#include <iostream>

using namespace std;

int main(void){
    int x;
    cout<< "ingrese el numero :" << endl;
cin>> x;

if(x%2==0){
    cout<< "El numero: " << x << " es par ";
}
else{
    cout<< "El numero: " << x << " es impar ";
}
    return 0;
}