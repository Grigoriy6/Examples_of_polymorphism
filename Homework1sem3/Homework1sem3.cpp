/*********************************************************************
 * @file  Б22_102_PetrovGE_HW1_v1              Moscow, 2023
 *
 * @brief Б22_102 Петров Григорий Евгеньевич ДЗ 1. ver 1
 *
 * Задание
 * Написать программу, которая демонстрирует
 *   1)  Порядок выполнения конструкторов между родительским классом и дочерним классами
 *   2.1) Свойство полиморфизма с использованием переопределения 
 *   2.2) С использованием виртуальной функции.
 *
 *********************************************************************/﻿
#include <iostream>
using namespace std;

class chess_piece {
public:
    chess_piece() {
        cout << "Base class" << endl;
    }
    virtual void generate_moves() {
        cout << "some moves were generated" << endl;
    }

};
class pawn : public chess_piece {
public:

    pawn() {
        cout << "Derived class" << endl;
    }
    void generate_moves() override {
        cout << "pawn moves were generated" << endl;
    }

};
class basic_chess_piece : public chess_piece {
public:
    basic_chess_piece() {
        cout << "Derived class2" << endl;
    }
};
int main() {
    pawn obj;
    basic_chess_piece obj2;
    obj.generate_moves();
    obj2.generate_moves();

    return 0;
}
