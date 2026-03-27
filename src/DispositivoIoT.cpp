#include "DispositivoIoT.h"

DispositivoIoT::DispositivoIoT(string id) {
    this->id = id;
    conectado = false;
    consumoWattHora = 0;
}

void DispositivoIoT::conectar() {
    conectado = true;
}

void DispositivoIoT::desconectar() {
    conectado = false;
}

void DispositivoIoT::registrarConsumo(float valor) {
    registroConsumo.push_back(valor);
}

float DispositivoIoT::consumoTotal() const {
    float suma = 0;
    for (float v : registroConsumo) {
        suma = suma + v;
    }
    return suma;
}