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
    tartaruga.mover(5);
    tartaruga.virarDireita();
    tartaruga.mover(5);
    tartaruga.virarDireita();
    tartaruga.mover(5);
    tartaruga.virarDireita();
    tartaruga.mover(5);
    tartaruga.desenhar(false);
    tartaruga.terminarDesenho();
    return 0;
}
