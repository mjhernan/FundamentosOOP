#include <iostream>
#include "Herencias.h"

int main () {

    // Instancia de la clase maestro
    auto maestro = Maestro();
    maestro.SetId("1 0123 0345");
    maestro.SetName("Gertrudiz");
    maestro.SetSalary(540000.00);
    maestro.SetWorkingHours(40);
    maestro.Speak();

    // // Instancia de la clase estudiante
    auto estudiante = Estudiante();
    estudiante.SetId("1 1357 2468");
    estudiante.SetName("Juan Perez");
    estudiante.SetCantidadCursosMatriculados(5);
    estudiante.SetPromedioNotas(78.5);
    estudiante.Speak();

    return 0;
}