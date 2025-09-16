#include <iostream>

#include "Tabuleiro.h"
#include "Tartaruga.h"

int main() {
    std::cout << "Tartaruga do Logo!" << std::endl;
    Tabuleiro tabuleiro;
    Tartaruga tartaruga(tabuleiro);
    tartaruga.desenhar(true);
    tartaruga.mover(5);
    tartaruga.virarDireita();
    tartaruga.mover(3);
    tartaruga.virarEsquerda();
    tartaruga.mover(2);
    tartaruga.desenhar(false);
    tabuleiro.imprimir();
    return 0;
}
