#include "iostream"

using namespace std;

float estatura [25];
float media(float a[]);
int i;


int main(){


    cout <<"La media es." <<media(estatura);

    return 0;
}
//Funcion de que calcula la media
float media(float a[]){
    cout <<"Ingrese las edades.";
    for(i=0; i<25;i++)
    cin>> estatura[i];
float m;
m = a[i]/25;

return m;
}