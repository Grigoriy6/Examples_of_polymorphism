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
    void foo() {
        cout << "parent" << endl;
    }

};
class pawn : public chess_piece {
public:

    pawn() {
        cout << "Derived class" << endl;
    }
    void generate_moves() override{
        cout << "pawn moves were generated" << endl;
    }
    void foo() {
        cout << "child" << endl;
    }

};

int main() {
    pawn obj;
    chess_piece obj2;

    obj.generate_moves();
    obj2.generate_moves();
    obj.foo();
    obj2.foo();

    chess_piece* o1 = &obj;
    chess_piece* o2 = &obj2;

    o1->generate_moves();
    o2->generate_moves();
    o1->foo();
    o2->foo();
    
    return 0;
}
