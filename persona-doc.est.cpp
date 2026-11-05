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
	
}
