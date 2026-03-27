#ifndef DISPOSITIVOIOT_H
#define DISPOSITIVOIOT_H

#include <string>
#include <vector>

using namespace std;

/**
 * @brief Representa un dispositivo IoT
 * @details Permite gestionar conexión y consumo de energía
 */
class DispositivoIoT {
private:
    string id;
    bool conectado;
    float consumoWattHora;
    vector<float> registroConsumo;

public:
    /**
     * @brief Constructor
     * @param id Identificador del dispositivo
     */
    DispositivoIoT(string id);

    void conectar();
    void desconectar();

    /**
     * @brief Registra consumo
     * @param valor consumo en WattHora
     */
    void registrarConsumo(float valor);

    /**
     * @brief Calcula consumo total
     * @return suma de consumos
     */
    float consumoTotal() const;
};

#endif