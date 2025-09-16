//
// Created by S861321135 on 16/09/2025.
//

#include "Tartaruga.h"

#include <cmath>
#include <numbers>

void Tartaruga::desenhar(bool baixarCaneta) {
    if (totalComandos >= MAX_COMANDOS) {
        totalComandos = MAX_COMANDOS - 1;
    }
    if (baixarCaneta) {
        comandos[totalComandos++].comando = EnumComando::ABAIXAR_CANETA;
    } else {
        comandos[totalComandos++].comando = EnumComando::LEVANTAR_CANETA;
    }
    canetaAbaixada = baixarCaneta;
}

void Tartaruga::mover(int passos) {
    if (totalComandos >= MAX_COMANDOS) {
        totalComandos = MAX_COMANDOS - 1;
    }
    comandos[totalComandos].comando = EnumComando::MOVER;
    comandos[totalComandos++].valor = passos;

    const int dy = static_cast<int>(-sin(angulo));
    const int dx = static_cast<int>(cos(angulo));
    posicao.x += dx * passos;
    posicao.y += dy * passos;
    // Limitar posicao ao tabuleiro
    if (posicao.x < 0) {
        posicao.x = 0;
    } else if (posicao.x >= Tabuleiro::COLUNAS) {
        posicao.x = Tabuleiro::COLUNAS - 1;
    }
    if (posicao.y < 0) {
        posicao.y = 0;
    } else if (posicao.y >= Tabuleiro::LINHAS) {
        posicao.y = Tabuleiro::LINHAS - 1;
    }

    // Desenhar no tabuleiro se a caneta estiver abaixada
    if (canetaAbaixada) {
        for (int i = 0; i < passos; i++) {
            tabuleiro.desenhar({posicao.x, posicao.y });
        }
    }
}

void Tartaruga::virarDireita() {
    if (totalComandos >= MAX_COMANDOS) {
        totalComandos = MAX_COMANDOS - 1;
    }
    comandos[totalComandos++].comando = EnumComando::DIREITA;
    angulo -= std::numbers::pi/2;
    if (angulo < 0.0) {
        angulo += std::numbers::pi*2;
    }
}

void Tartaruga::virarEsquerda() {
    if (totalComandos >= MAX_COMANDOS) {
        totalComandos = MAX_COMANDOS - 1;
    }
    comandos[totalComandos++].comando = EnumComando::ESQUERDA;
    angulo += std::numbers::pi/2;
    if (angulo >= std::numbers::pi*2) {
        angulo -= std::numbers::pi*2;
    }
}

void Tartaruga::terminarDesenho() {
    if (totalComandos >= MAX_COMANDOS) {
        totalComandos = MAX_COMANDOS - 1;
    }
    comandos[totalComandos++].comando = EnumComando::FIM;
    tabuleiro.imprimir();
}
