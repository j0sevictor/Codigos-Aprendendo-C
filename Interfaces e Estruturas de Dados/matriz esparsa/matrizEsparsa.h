typedef struct {
    int i;
    int j;
} Coordenada;

typedef struct {
    int valor;
    Coordenada posicao;
} Entradas;

typedef struct {
    int linhas;
    int colunas;
    int qtdEntradas;
    Entradas* a;
} MatrizEspasada;
