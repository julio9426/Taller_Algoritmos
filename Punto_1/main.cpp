#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main (){
    float promedio=0.0;
    int edad=0,suma_edad=0, N=0, cerrar=0;
    cout<<"Ingrese la cantidad de alumnos: ";
    cin>>N;

    while (true){
        for(int i=1;i<=N;i++){
            cout<<"Ingrese la edad del estudiante "<<i<<": ";
            cin>>edad;
            suma_edad=edad+suma_edad;
            cout<<suma_edad<<endl;
            if(edad>=18){
                promedio=(suma_edad-edad)/(i-1);
                cout<<"el promedio de las edades es: "<<promedio<<endl;
                cout<<"el numero de estudiantes fue: "<<i<<endl;
                break;
            }
        }
    cout<<"¿Desea Cerrar el programa?"<<endl;
    cout<<"1 = Si"<<endl;
    cout<<"0 = No"<<endl;
    cin>>cerrar;
    system("cls");
    if (cerrar==1){
        system("cls");
        break;
    }
    }
    return 0;
}
