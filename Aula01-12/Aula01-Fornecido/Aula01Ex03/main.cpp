#include <iostream>

using namespace std;

double calcularConsumoDoVentilador (int velocidade[],
                                    int horas[],
                                    int quantidadeDeValores) {
    double consumo=0;

    for(int i=0; i<quantidadeDeValores; i++) {
        if(velocidade[i]==0 || horas[i]==0) {
            consumo=consumo;
        } else if (velocidade[i]==1) {
            consumo+=horas[i]*125;
        } else if (velocidade[i]==2) {
            consumo+=horas[i]*150;
        } else if (velocidade[i]==3) {
            consumo+=horas[i]*185;
        }
    }
    return consumo/1000;
}

// A FUNCAO MAIN NAO DEVE SER SUBMETIDA
int main() {
    int velocidades[4] = {2, 3, 2, 0};
    int horas[4] = {1, 2, 4, 2};
    cout << calcularConsumoDoVentilador (velocidades, horas,
                                         4) << endl;
    // MAIS TESTES DEVEM SER FEITOS
}
