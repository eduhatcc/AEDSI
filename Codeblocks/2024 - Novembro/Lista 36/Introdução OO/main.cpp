#include <iostream>
#define MAX 5

using namespace std;

class Quadrado {
private:
    float lado;

public:
    void setLado(float lado)
    {
        if(lado >= 0) {
            this->lado = lado;
        } else {
            cout << "\nValor invalido!" << endl;
        }
    }

    float getLado()
    {
        return lado;
    }

    float perimetro()
    {
        return lado * 4;
    }

    float area()
    {
        return lado * lado;
    }

    void lerLado(int i)
    {
        float lado;
        cout << "\nDigite o lado do " << i+1<< ".o quadrado: ";
        cin >> lado;
        setLado(lado);
    }

};

    void escrevaQuadrados(Quadrado quadrados[MAX])
    {
        for(int i=0; i < MAX; i++) {
            cout << endl<< i+1 << ".o Quadrado: " << endl;
            cout << "Lado: " << quadrados[i].getLado() << endl;
            cout << "Perimetro: " << quadrados[i].perimetro() << endl;
            cout << "Area: " << quadrados[i].area() << endl << endl;
        }
    }

int main()
{
    Quadrado quadrados[MAX];

    for(int i=0; i < MAX; i++) {
        quadrados[i].lerLado(i);
    }

    escrevaQuadrados(quadrados);


    return 0;
}
