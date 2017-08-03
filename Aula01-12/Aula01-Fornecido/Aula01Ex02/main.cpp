#include <iostream>

using namespace std;

int acionarVentilador (bool presencaDetectada,
                       int temperatura) {
    int acionarVelocidade=0;

    if (presencaDetectada==false) {
        acionarVelocidade=0;
    } else if (temperatura>20 && temperatura<=25) {
        acionarVelocidade=1;
    } else if (temperatura>25 && temperatura<=32) {
        acionarVelocidade=2;
    } else if (temperatura>32) {
        acionarVelocidade=3;
    }

    return acionarVelocidade;
}

// A FUNCAO MAIN NAO DEVE SER SUBMETIDA
int main() {
    cout << acionarVentilador (true, 15) << endl;
    cout << acionarVentilador (false, 50) << endl;
    // MAIS TESTES DEVEM SER FEITOS
}
