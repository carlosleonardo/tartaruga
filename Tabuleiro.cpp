//
// Created by S861321135 on 16/09/2025.
//

#include "Tabuleiro.h"

#include <iostream>

void Tabuleiro::imprimir() const {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (chao[i][j]) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void Tabuleiro::desenhar(const Ponto &p) {
    if (p.x >= 0 && p.x < COLUNAS && p.y >= 0 && p.y < LINHAS) {
        chao[p.y][p.x] = 1;
    }
}
