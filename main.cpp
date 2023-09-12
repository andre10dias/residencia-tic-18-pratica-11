#include <iostream>

using namespace std;

//Exercício 1
void maxmin(int vetor[], int n, int &maximo, int &minimo);

//Exercício 3
void ordenaCrescente(float &f1, float &f2, float &f3, float &f4);

int main(void) {
    int v[] = {5, 3, 2, 7};
    int max = 0;
    int min = 10;

    maxmin(v, 4, max, min);

    cout << "Valor Máximo: " << max << endl;
    cout << "Valor Mínimo: " << min << endl;

    cout << "==============================\n";

    float f1 = 3, f2 = 1, f3 = 7, f4 = 5;
    ordenaCrescente(f1, f2, f3, f4);

    //cout << f1 << f2 << f3 << f4;

    return 0;
}

//Exercício 1
void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] > maximo)
        {
            maximo = vetor[i];
        }

        if (vetor[i] < minimo)
        {
            minimo = vetor[i];
        }
    }
}

//Exercício 3
void ordenaCrescente(float &f1, float &f2, float &f3, float &f4) {
    float f1, f2, f3, f4;
    float maior, menor, aux;

    if (f1 > f2)
    {
        maior = f1;
        menor = f2;
    }
    else {
        maior = f2;
        menor = f1;
    }

    if (f3 > maior)
    {
        maior = f3;
    }

    if (f3 < menor)
    {
        menor = f3;
    }
    
    
}

