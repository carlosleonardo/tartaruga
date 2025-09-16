//
// Created by S861321135 on 16/09/2025.
//

#ifndef TARTARUGA_TARTARUGA_H
#define TARTARUGA_TARTARUGA_H
#include "Comando.h"
#include "Ponto.h"


class Tartaruga {
public:
    void desenhar(bool baixarCaneta);

    void mover(int passos);

    void virarDireita();

    void virarEsquerda();

private:
    Ponto posicao{0, 0};
    Comando comando;
};


#endif //TARTARUGA_TARTARUGA_H
