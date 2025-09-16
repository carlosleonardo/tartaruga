//
// Created by S861321135 on 16/09/2025.
//

#ifndef TARTARUGA_TARTARUGA_H
#define TARTARUGA_TARTARUGA_H
#include "Comando.h"
#include "Ponto.h"
#include "Tabuleiro.h"


class Tartaruga {
public:
    explicit Tartaruga(const Tabuleiro &tabuleiro)
        : tabuleiro(tabuleiro) {
    }

    void desenhar(bool baixarCaneta);

    void mover(int passos);

    void virarDireita();

    void virarEsquerda();
    void terminarDesenho();
private:
    static constexpr int MAX_COMANDOS = 100;
    Ponto posicao{0, 0};
    Tabuleiro tabuleiro{};
    Comando comandos[MAX_COMANDOS]{};
    int totalComandos = 0;
    bool canetaAbaixada = false;
    double angulo = 0.0; // Em graus, olhando para a direita
};


#endif //TARTARUGA_TARTARUGA_H
