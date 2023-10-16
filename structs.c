typedef struct {
    char nome[100];
    char endereco[100];
    char tipo_sanguineo[3];
    int idade;
    int doacoes;
} Doador;

typedef struct {
    char nome[100];
    char endereco[100];
    char tipo_sanguineo_necessario[3];
    int quantidade_necessaria;
} Hospital;

typedef struct {
    char tipo_sanguineo[3];
    int quantidade;
} Estoque;
