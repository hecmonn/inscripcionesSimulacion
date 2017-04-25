#include "Alumno.h"

Alumno::Alumno(int i): id(i){

}

Alumno::~Alumno(){

}

void Alumno::printInfo(){
    std::cout << "Alumno: " << id << " info: \n";
    std::cout << "algo" << std::endl;
}

void Alumno::AvanzaAlumno(){
    aprobado=pasaNoPasa();
    if(!aprobado){
        reprobadas++;
    }
    std::cout << aprobado << "\n";
}

bool Alumno::pasaNoPasa(){
    r=rand()/(RAND_MAX);
    aprobado= r <.5 ? true : false;
    return aprobado;
}
