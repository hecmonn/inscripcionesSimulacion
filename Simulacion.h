#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "Institucion.h"
#include "helpers.h"

#define HOURS_PER_CLASSR 7
#define HOURS_PER_CLASS 1
#define HOURS_PER_WEEK_PER_COURSE 2

using namespace std;

class Simulacion{
	private:

		const int NCarreras,NAlumnos,NSemestres;
	protected:
	public:
		Institucion* institucion;
		Simulacion(int,int,int);
		~Simulacion();
		void CorrerSimulacion();
};
