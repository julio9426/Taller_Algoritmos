#include<iostream>//Libreria I/O
#include<math.h> //Libreria Matematica
#include<stdlib.h> //Libreria consola

using namespace std;

int main (){
    //Declaracion Variables
    int suma=0, c=0, cerrar=0;

    while (true){
        for(int i=1; i<=10;i++){
            //ingrese datos usuario
            cout<<"ingrese la cantidad "<<i<<": ";
            cin>>c;
        //suma de cantidades
            suma=c+suma;
        }
    cout<<"la suma de las cantidades es: "<<suma<<endl;
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
}
