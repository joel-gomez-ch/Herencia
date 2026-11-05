#include <iostream>
#include <string>
using namespace std;

class Persona{
	protected:
		string dni;
		string nombres;
		int edad;
	public:
		persona();
		void leerdatos();
		void mostrardatos();
		
};

Persona::persona(){
	dni = "00000000";
	nombres = "Vacio";
	edad = 0;
}

void Persona::leerdatos(){
	cout<<"Ingrese el DNI: "; cin>>dni;
	cin.ignore();
	cout<<"Ingrese sus nombres: "; getline(cin,nombres);
	cout<<"Ingrese su edad: "; cin>>edad;
}

void Persona::mostrardatos(){
	cout<<endl<<"DNI: "<<dni<<endl;
	cout<<"Nombres: "<<nombres<<endl;
	cout<<"Edad: "<<edad<<endl;
}

class Docente : Persona{
	public:
		int sueldo;
		string especialidad;
		docente();
		void mostrardocente();
		void ingresarnotas();
		void visualizarregistro();
};

class Estudiante : Persona{
	public:
		int notas;
		int Nnotas;
		string codigo;
		estudiante();
		void mostrarestudiante();
		void visualizarnotas();
};

int main(){
	Persona x;
	x.leerdatos();
	x.mostrardatos();
}
