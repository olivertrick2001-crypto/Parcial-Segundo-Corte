#include "../include/Camion.h"

Camion::Camion(std::string _placa, std::string _marca, int _modelo, double _capacidadDeCarga)
    : Vehiculo(_placa, _marca, _modelo), capacidadDeCarga(_capacidadDeCarga), cargaActual(0.0) {}

void Camion::Cargar(double cantidad) {
    if (cantidad <= 0) {
        std::cout << "[Error] La cantidad a cargar debe ser mayor a cero.\n";
        return;
    }
    if (cargaActual + cantidad > capacidadDeCarga) {
        std::cout << "[Error] Excede la capacidad máxima de carga del camión (" << capacidadDeCarga << " kg).\n";
    } else {
        cargaActual += cantidad;
        std::cout << "Carga exitosa. Carga actual: " << cargaActual << " kg.\n";
    }
}

void Camion::Descargar(double cantidad) {
    if (cantidad <= 0) {
        std::cout << "[Error] La cantidad a descargar debe ser mayor a cero.\n";
        return;
    }
    if (cargaActual - cantidad < 0) {
        std::cout << "[Error] No se puede descargar más de la carga actual.\n";
    } else {
        cargaActual -= cantidad;
        std::cout << "Descarga exitosa. Carga actual: " << cargaActual << " kg.\n";
    }
}

void Camion::MostrarInformacion() const {
    Vehiculo::MostrarInformacion();
    std::cout << " | Tipo: Camión | Capacidad Max: " << capacidadDeCarga << " kg | Carga Actual: " << cargaActual << " kg\n";
}

double Camion::CalcularCapacidad() {
    return capacidadDeCarga;
}

void Camion::MonstarCantidadCargadaOPasajeros() const {
    std::cout << "Camion [" << placa << "] -> Carga actual: " << cargaActual << " kg.\n";
}