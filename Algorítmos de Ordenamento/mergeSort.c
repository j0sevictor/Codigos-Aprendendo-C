#include <stdio.h>

void mergeVectors(int *vector, int inicio, int meio, int fim);
void mergeSort(int *vector, int inicio, int meio, int fim);

int main()
{
    int vetor[10] = {1, 5, 8, 1, 20, 15, 0, 3, 36};
    mergeSort(vetor, 0, 4, 8);

    int i;
    for (i = 0; i < 9; i++)
    {
        printf("%d ", vetor[i]);
    }
}

void mergeSort(int *vector, int inicio, int meio, int fim)
{
    if ((fim - inicio + 1) <= 1)
    {
        return;
    }

    mergeSort(vector, inicio, (inicio + meio) / 2, meio);
    mergeSort(vector, meio + 1, (meio + 1 + fim) / 2, fim);
    mergeVectors(vector, inicio, meio, fim);
}

void mergeVectors(int *vector, int inicio, int meio, int fim)
{   
    int tamVec1 = meio - inicio + 1;
    int tamVec2 = fim - (meio + 1) + 1;
    int tamTotal = tamVec1 + tamVec2;

    int novoVetor[tamTotal];

    int i, j = 0, k = 0;
    for (i = 0; i < tamTotal; i++)
    {
        if (j >= tamVec1)
        {
            novoVetor[i] = vector[k + (meio + 1)];
            k++;
        }
        else if (k >= tamVec2)
        {
            novoVetor[i] = vector[j + inicio];
            j++;
        }
        else if (vector[j + inicio] <= vector[k + (meio + 1)])
        {
            novoVetor[i] = vector[j + inicio];
            j++;
        }
        else if (vector[k + (meio + 1)] < vector[j + inicio])
        {
            novoVetor[i] = vector[k + (meio + 1)];
            k++;
        }
    }

    for (i = 0; i < tamTotal; i++)
    {
        vector[inicio + i] = novoVetor[i];
    }

}


