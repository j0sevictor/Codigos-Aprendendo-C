
void quickSort(int *vector, int inicio, int fim);

void quickSort(int *vector, int inicio, int fim)
{
    int tam = (fim - inicio +  1);
    
    if (tam <= 1)
    {
        return;
    }

    int pivoValor = vector[inicio];
    
    int i, j = 0, k = 0;

    int valoresMenores[tam];
    int valoresMaiores[tam];

    for (i = inicio + 1; i <= fim; i++)
    {
        if (vector[i] <= pivoValor)
        {
            valoresMenores[j] = vector[i];
            j++;
        }
        else
        {
            valoresMaiores[k] = vector[i];
            k++;
        }
    }

    for (i = inicio; i <= fim; i++)
    {
        if (i - inicio < j)
        {
            vector[i] = valoresMenores[i - inicio];
        }
        else if (i - inicio == j)
        {
            vector[i] = pivoValor;
        }
        else
        {
            vector[i] = valoresMaiores[(i - inicio) - (j + 1)];
        }
    }

    quickSort(vector, inicio, inicio + j - 1);
    quickSort(vector, (inicio + j) + 1, fim);
}
