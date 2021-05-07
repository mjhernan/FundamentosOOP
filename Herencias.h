#include "ClaseBase.h"

class Maestro : public Persona{
    private:
        double salary;
        int workingHours;

    public:
        Maestro();
        ~Maestro();

        double GetSalary();
        void SetSalary(double salary);
        int GetWorkingHours();
        void SetWorkingHours(int workingHours);
        void Speak();
};

Maestro::Maestro() : Persona::Persona(){
    this->salary = 0.0;
    this->workingHours = 0;
}

Maestro::~Maestro(){
}

double Maestro::GetSalary(){
    return this->salary;
}

void Maestro::SetSalary(double salary){
    this->salary = salary;
}

int Maestro::GetWorkingHours() {
    return this->workingHours;
}

void Maestro::SetWorkingHours(int workingHours){
    this->workingHours = workingHours;
}

void Maestro::Speak(){
    auto name = GetName();
    std::cout << "\n\n\nMe llamo " + name + " y trabajo en esta escuela" << std::endl;
    auto workingHours = GetWorkingHours();
    std::cout << "Trabajo " + std::to_string(workingHours) + " horas por semana" << std::endl;
    auto salary = GetSalary();
    std::cout << "Mi salario es de " + std::to_string(salary) << std::endl;
}

class Estudiante : public Persona{
    private:
        int cantidadCursosMatriculados;
        double promedioNotas;

    public:
        Estudiante();
        ~Estudiante();  

        int GetCantidadCursosMatriculados();
        void SetCantidadCursosMatriculados(int cantidadCursosMatriculados);
        double GetPromedioNotas();
        void SetPromedioNotas(double promedioNotas);
        void Speak();
};

Estudiante::Estudiante() : Persona::Persona(){
    this->cantidadCursosMatriculados = 0;
    this->promedioNotas = 0.0;
}

Estudiante::~Estudiante(){
}

int Estudiante::GetCantidadCursosMatriculados(){
    return this->cantidadCursosMatriculados;
}

void Estudiante::SetCantidadCursosMatriculados(int cantidadCursosMatriculados){
    this->cantidadCursosMatriculados = cantidadCursosMatriculados;
}

double Estudiante::GetPromedioNotas(){
    return this->promedioNotas;
}

void Estudiante::SetPromedioNotas(double promedioNotas){
    this->promedioNotas = promedioNotas;
}

void Estudiante::Speak(){
    auto name = GetName();
    std::cout << "\n\n\nMe llamo " + name + " y estudio en esta escuela" << std::endl;
    auto cursosMatriculados = GetCantidadCursosMatriculados();
    std::cout << "Tengo " + std::to_string(cursosMatriculados) + " cursos matriculados" << std::endl;
    auto promedio = GetPromedioNotas();
    std::cout << "Mi promedio ponderado es de " + std::to_string(promedio) + "\n\n\n" << std::endl;
}
