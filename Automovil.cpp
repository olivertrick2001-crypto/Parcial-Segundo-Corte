#include "../include/Automovil.h"

Automovil::Automovil(std::string _placa, std::string _marca, int _modelo, int _cantidadDePasajeros)
    : Vehiculo(_placa, _marca, _modelo), cantidadDePasajeros(_cantidadDePasajeros), numeroDePasajerosActual(0) {}

void Automovil::subirPasajeros(int cantidad) {
    if (cantidad <= 0) {
        std::cout << "[Error] La cantidad de pasajeros debe ser mayor a cero.\n";
        return;
    }
    if (numeroDePasajerosActual + cantidad > cantidadDePasajeros) {
        std::cout << "[Error] Excede la capacidad máxima de asientos (" << cantidadDePasajeros << " pasajeros).\n";
    } else {
        numeroDePasajerosActual += cantidad;
        std::cout << "Pasajeros subieron con éxito. Pasajeros actuales: " << numeroDePasajerosActual << "\n";
    }
}

void Automovil::BajarPasajeros(int cantidad) {
    if (cantidad <= 0) {
        std::cout << "[Error] La cantidad de pasajeros debe ser mayor a cero.\n";
        return;
    }
    if (numeroDePasajerosActual - cantidad < 0) {
        std::cout << "[Error] No pueden bajar más pasajeros de los que hay a bordo.\n";
    } else {
        numeroDePasajerosActual -= cantidad;
        std::cout << "Pasajeros bajaron con éxito. Pasajeros actuales: " << numeroDePasajerosActual << "\n";
    }
}

void Automovil::MostrarInformacion() const {
    Vehiculo::MostrarInformacion();
    std::cout << " | Tipo: Automóvil | Asientos Max: " << cantidadDePasajeros << " | Pasajeros Actuales: " << numeroDePasajerosActual << "\n";
}

double Automovil::CalcularCapacidad() {
    return static_cast<double>(cantidadDePasajeros);
}

void Automovil::MonstarCantidadCargadaOPasajeros() const {
    std::cout << "Automovil [" << placa << "] -> Pasajeros actuales: " << numeroDePasajerosActual << "\n";
}