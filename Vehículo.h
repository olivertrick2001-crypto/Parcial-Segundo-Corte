#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>

/**
 * @class Vehiculo
 * @brief Clase base abstracta para la gestión de vehículos.
 */
class Vehiculo {
protected:
    std::string placa;
    std::string marca;
    int modelo;

public:
    Vehiculo(std::string _placa, std::string _marca, int _modelo);
    virtual ~Vehiculo() = default;

    // Getters y Setters básicos para encapsulación si los necesitas
    std::string getPlaca() const;

    // Métodos virtuales para Polimorfismo
    virtual void MostrarInformacion() const;
    virtual double CalcularCapacidad() = 0; 
    virtual void MonstarCantidadCargadaOPasajeros() const = 0; 
};

#endif // VEHICULO_H
