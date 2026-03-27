#include <iostream>
#include <vector>
#include "DispositivoIoT.h"

using namespace std;

int main() {

    cout << "Inicio del programa" << endl;

    vector<DispositivoIoT> dispositivos;

    DispositivoIoT d1("Sensor1");
    DispositivoIoT d2("Sensor2");

    d1.conectar();
    d1.registrarConsumo(10.5);
    d1.registrarConsumo(5.5);

    d2.conectar();
    d2.registrarConsumo(20.0);

    dispositivos.push_back(d1);
    dispositivos.push_back(d2);

    for (int i = 0; i < dispositivos.size(); i++) {
        cout << "Consumo dispositivo " << i << ": "
             << dispositivos[i].consumoTotal() << endl;
    }

    cout << "Fin del programa" << endl;

    return 0;
}