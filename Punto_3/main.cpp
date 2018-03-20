#include<iostream>//Libreria I/O
#include<math.h>//Libreria Matematica
#include<stdlib.h>//Libreria Consola

using namespace std;

int main(){
    //declaracion de variables
    float estatura=0.00, promedio=0.00, suma_estatura=0.00;
    int contador=0, cerrar=0;

    while (true){
        //Datos que ingresa el usuario
        cout<<"Ingrese la estatura: ";
        cin>>estatura;
        suma_estatura=estatura+suma_estatura;
        contador ++; //acomulador para hayar el promedio
        promedio=suma_estatura/contador; //funcion para el promedio
        cout<<"el promedio de las estaturas es: "<<promedio<<endl<<endl;
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

