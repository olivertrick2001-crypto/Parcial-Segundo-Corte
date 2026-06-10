#include "../include/Vehiculo.h"

Vehiculo::Vehiculo(std::string _placa, std::string _marca, int _modelo) 
    : placa(_placa), marca(_marca), modelo(_modelo) {}

std::string Vehiculo::getPlaca() const {
    return placa;
}

void Vehiculo::MostrarInformacion() const {
    std::cout << "Placa: " << placa << " | Marca: " << marca << " | Modelo: " << modelo;
}