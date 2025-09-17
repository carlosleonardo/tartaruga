//
// Created by S861321135 on 16/09/2025.
//

#ifndef TARTARUGA_TABULEIRO_H
#define TARTARUGA_TABULEIRO_H
#include <cstdint>

#include "Comando.h"
#include "Ponto.h"


class Tabuleiro {
public:
    void imprimir() const;

    void desenhar(const Ponto &p);

    static constexpr int LINHAS = 20;
    static constexpr int COLUNAS = 20;
private:
    uint8_t chao[LINHAS][COLUNAS]{0};
};


#endif //TARTARUGA_TABULEIRO_H
