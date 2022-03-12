#include "alumno.cpp"
#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    string nombre,apellido,curso;
	int codigo;
    int nota1,nota2,nota3,nota4;
    float promedio;
    string op;

    do{
    cout<<"Ingrese Codigo de Alumno"<<endl;
	cin>>codigo;
    cout<<"Ingrese Nombres:"<<endl;
	cin>>nombre;
	cout<<"Ingrese Apellidos:"<<endl;
	cin>>apellido;
	cout<<"Ingrese Nombre del Curso:"<<endl;
	cin>>curso;
    cout<<"Ingrese la nota 1: "<<endl;
    cin>>nota1;
    cout<<"ingrese la nota 2: "<<endl;
    cin>>nota2;
    cout<<"ingrese la nota 3: "<<endl;
    cin>>nota3;
    cout<<"ingrese la nota 4:"<<endl;
    cin>>nota4;

    alumno obj = alumno(nombre,apellido,codigo,curso,nota1,nota2,nota3,nota4);
    promedio=obj.CalcularPromedio();
    cout<<"EL PROMEDIO DEL ESTUDIANTE ES: "<<promedio<<endl;;
    
    obj.mostrar();
    if(promedio>60)
        cout<<"\nAPROBADO"<<endl;
    else
        cout<<"\nREPROBADO"<<endl;;
    cout<<"dese agregar otro estudiante (s/n)"<<endl;
    cin>>op;

    }
    while(op=="s" or op=="S");

    system("pause");


}
