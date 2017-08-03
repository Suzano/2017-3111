#include <iostream>

using namespace std;

double calcularConsumoDaLampada (int tipo, int horas) {
    double consumo=0;
    if (tipo==1) {
        consumo+=horas*4;
    } else if(tipo==2) {
        consumo+=horas*10;
    } else if(tipo==3) {
        consumo+=horas*50;
    } else if(tipo==4) {
        consumo+=horas*100;
    }
    return consumo/1000;
}
// A FUNCAO MAIN NAO DEVE SER SUBMETIDA
    int main() {
        cout << calcularConsumoDaLampada (1, 10) << endl;
        cout << calcularConsumoDaLampada (2, 20) << endl;
        // MAIS TESTES DEVEM SER FEITOS
    }
