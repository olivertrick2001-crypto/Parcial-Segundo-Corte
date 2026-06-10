#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

#include "Vehiculo.h"

/**
 * @class Automovil
 * @brief Clase que representa un vehículo de pasajeros.
 */
class Automovil : public Vehiculo {
private:
    int cantidadDePasajeros; // Capacidad máxima
    int numeroDePasajerosActual;

public:
    Automovil(std::string _placa, std::string _marca, int _modelo, int _cantidadDePasajeros);

    // Métodos propios de Automovil
    void subirPasajeros(int cantidad);
    void BajarPasajeros(int cantidad);

    // Métodos sobreescritos (Polimorfismo)
    void MostrarInformacion() const override;
    double CalcularCapacidad() override;
    void MonstarCantidadCargadaOPasajeros() const override;
};

#endif // AUTOMOVIL_H