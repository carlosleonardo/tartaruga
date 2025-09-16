//
// Created by S861321135 on 16/09/2025.
//

#include "Tartaruga.h"

void Tartaruga::desenhar(bool baixarCaneta) {
    if (totalComandos >= MAX_COMANDOS) {
        totalComandos = MAX_COMANDOS - 1;
    }
    if (baixarCaneta) {
        comandos[totalComandos++].comando = EnumComando::ABAIXAR_CANETA;
    } else {
        comandos[totalComandos++].comando = EnumComando::LEVANTAR_CANETA;
    }
}

void Tartaruga::mover(int passos) {
    if (totalComandos >= MAX_COMANDOS) {
        totalComandos = MAX_COMANDOS - 1;
    }
    comandos[totalComandos].comando = EnumComando::MOVER;
    comandos[totalComandos++].valor = passos;
    // Se comando anterior for virar direita, mover para direita
    if (totalComandos > 1 && comandos[totalComandos - 2].comando == EnumComando::DIREITA) {
        posicao.x += passos;
    } else if (totalComandos > 1 && comandos[totalComandos - 2].comando == EnumComando::ESQUERDA) {
        posicao.x -= passos;
    } else {
        posicao.y += passos;
    }

    // Desenhar no tabuleiro se a caneta estiver abaixada
    if (totalComandos > 1 && comandos[totalComandos - 2].comando == EnumComando::ABAIXAR_CANETA) {
        for (int i = 0; i < passos; i++) {
            tabuleiro.desenhar({posicao.x, posicao.y - i});
        }
    }
}

void Tartaruga::virarDireita() {
    if (totalComandos >= MAX_COMANDOS) {
        totalComandos = MAX_COMANDOS - 1;
    }
    comandos[totalComandos++].comando = EnumComando::DIREITA;
    posicao.x++;
}

void Tartaruga::virarEsquerda() {
    if (totalComandos >= MAX_COMANDOS) {
        totalComandos = MAX_COMANDOS - 1;
    }
    comandos[totalComandos++].comando = EnumComando::ESQUERDA;
    posicao.x--;
}
