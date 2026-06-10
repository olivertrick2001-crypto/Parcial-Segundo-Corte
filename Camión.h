#ifndef CAMION_H
#define CAMION_H

#include "Vehiculo.h"

/**
 * @class Camion
 * @brief Clase que representa un vehículo de carga.
 */
class Camion : public Vehiculo {
private:
    double capacidadDeCarga;
    double cargaActual;

public:
    Camion(std::string _placa, std::string _marca, int _modelo, double _capacidadDeCarga);

    // Métodos propios de Camion
    void Cargar(double cantidad);
    void Descargar(double cantidad);

    // Métodos sobreescritos (Polimorfismo)
    void MostrarInformacion() const override;
    double CalcularCapacidad() override;
    void MonstarCantidadCargadaOPasajeros() const override;
};

#endif // CAMION_H
