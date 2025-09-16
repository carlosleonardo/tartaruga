//
// Created by S861321135 on 16/09/2025.
//

#ifndef TARTARUGA_TABULEIRO_H
#define TARTARUGA_TABULEIRO_H
#include <cstdint>

#include "Comando.h"


class Tabuleiro {
public:
    void imprimir();

private:
    static constexpr int LINHAS = 20;
    static constexpr int COLUNAS = 20;
    uint8_t matriz[LINHAS][COLUNAS]{0};
    Comando comando;
};


#endif //TARTARUGA_TABULEIRO_H
