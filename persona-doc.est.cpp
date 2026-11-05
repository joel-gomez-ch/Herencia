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
	private:
		int sueldo;
	public:
		string especialidad;
		docente();
		void mostrardocente();
		void ingresardocente();
		void ingresarnotas();
		void visualizarregistro();
};

void Docente::mostrardocente(){
	Persona::mostrardatos();
	cout<<"Sueldo: "<<sueldo<<endl;
	cout<<"Especialidad: "<<especialidad<<endl;
}

Docente:: docente(){
	Persona();
	sueldo = 0000;
	especialidad = "No especificada";
	
}

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
	Docente x;
	x.leerdatos();
	x.mostrardatos();
}
