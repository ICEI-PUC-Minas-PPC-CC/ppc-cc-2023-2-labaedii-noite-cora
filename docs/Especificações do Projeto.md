# 1° Struct: 

Essa struct vai ser usada para armazenar informações sobre os doadores, como nome, endereço, tipo sanguíneo, idade e o número de doações que eles fizeram.

typedef struct {
    char nome[100];
    char endereco[100];
    char tipo_sanguineo[3];
    int idade;
    int doacoes;
} Doador;

# 2° Struct: 

Essa struct vai ser usada para armazenar informações sobre os hospitais, como nome, endereço, o tipo sanguíneo que eles precisam e a quantidade necessária.

typedef struct {
    char nome[100];
    char endereco[100];
    char tipo_sanguineo_necessario[3];
    int quantidade_necessaria;
} Hospital;

# 3° Struct: 

Essa struct vai ser usada para gerenciar o estoque de sangue disponível, armazenando o tipo sanguíneo e a quantidade disponível. 

typedef struct {
    char tipo_sanguineo[3];
    int quantidade;
} Estoque;
