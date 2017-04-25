#include <iostream>
#include <stdlib.h>
#include <vector>

class Alumno{
private:
    int id;
    bool aprobado;
    int reprobadas;
    bool pasaNoPasa();
    double r;
public:
    Alumno(int);
    ~Alumno();
    void printInfo();
    void AvanzaAlumno();
};
