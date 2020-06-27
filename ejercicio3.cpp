#include "iostream"

using namespace std;

int nota(int filas, int columnas);
int arr[20][20], filas, columnas,j;
float promedio;

int main(){

nota(filas, columnas);

    return 0;
}

//funcion que toma la nota y da el promedio
int nota(int filas, int columnas){

int arreg[20][20], arreglo, promedio;

arreglo ==arreg[20][20];

    cout <<"Digite el numero de alumnos";
    cin>>filas;
    cout <<"Digite las numero de notas";
    cin>>columnas;
    for(int i=0;i<filas;i++){
        for(int j= 0;j<columnas;j++){
            cout <<"Digite las nota ["<<j<<"]";
            cin>>arr[i][j];
            promedio= 0.20*arr[i][j]+ 0.20*arr[i][j]+ 0.20*arr[i][j]+ 0.20*arr[i][j]+ 0.20*arr[i][j];
            cout<<promedio;

            if(promedio>=7){
                cout<<"Aprobado";
            }else{
                cout<<"Reprobado";
            }
            
        }
    }
    return promedio;
}