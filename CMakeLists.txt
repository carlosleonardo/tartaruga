cmake_minimum_required(VERSION 4.0)
project(tartaruga)

set(CMAKE_CXX_STANDARD 20)

add_executable(tartaruga main.cpp
        Tartaruga.cpp
        Tartaruga.h
        Comando.cpp
        Comando.h
        EnumComando.h
        Ponto.h
        Tabuleiro.cpp
        Tabuleiro.h)
