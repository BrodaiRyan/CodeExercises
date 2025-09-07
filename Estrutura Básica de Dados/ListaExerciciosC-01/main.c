#include <stdio.h>

int apresentacao01();
int mediadegols02();
int conversao03();
int aproveitamento04();
int diferenca05();
int cartao06();
int aptidao07();
int desempenho08();
int idade09();
int torcedores10();


int main() {
    aproveitamento04();

    return 0;
}

/*
Apresentação do Jogador
    Crie um programa que peça o primeiro nome de um jogador, 
    sua idade e a quantidade de gols que ele já fez na carreira. 
    Em seguida, exiba essas informações na tela.
*/
int apresentacao01() {
    char name[50];
    int age;
    int goals;

    printf("Preencha o nome do jogador: ");
    scanf(" %[^\n]", name);

    printf("Agora a idade dele: ");
    scanf("%d", &age);

    printf("E o total de gols que marcou na carreira: ");
    scanf("%d", &goals);

    printf("-----\n");
    printf("Jogador: %s \nIdade: %d\nGols na Carreira: %d", name, age, goals);

    return 0;
}

/*
Média de Gols por Partida
    Escreva um programa que receba o número total de gols de
    um jogador e a quantidade de partidas jogadas. 
    Depois, calcule e exiba a média de gols por partida.
*/
int mediadegols02() {
    int partidas;
    int gols;
    float media;

    printf("Insira a quantidade de partidas que o jogador jogou: ");
    scanf("%d", &partidas);

    printf("Insira a quantidade total de gols marcados: ");
    scanf("%d", &gols);

    if(partidas != 0) {
    media = (float)gols / partidas;

    printf("-----\nA media de gols por partida eh de: %.2f", media);

    }else {
        printf("-----\nNumero de partidas deve ser maior que 0.");

    }

    return 0;
}

/*
Conversão de Minutos para Tempo de Jogo
    Peça ao usuário para digitar o tempo jogado em minutos. 
    Depois, converta esse valor para horas e minutos 
    e exiba o resultado.


*/
int conversao03() {
    int tempoMin, minuto, hora;
    
    printf("digiteo tempo da partida em minutos: ");
    scanf("%d", &tempoMin);

    hora = tempoMin / 60;
    minuto = tempoMin % 60;

    printf("O tempo de jogo foi de %d hora(s) %d minuto(s).", hora, minuto);

    return 0;
}

/*
Calculando o Aproveitamento de um Time
    Crie um programa que peça o número de vitórias, 
    empates e derrotas de um time. Depois, calcule 
    o número total de pontos, seguindo a regra:

    Vitória = 3 pontos

    Empate = 1 ponto

    Derrota = 0 pontos
*/
int aproveitamento04() {
    int victorie, tie, lost;

    printf("Digite a quantidade de vitorias: ");
    scanf("%d", &victorie);

    printf("Digite a quantidade de empates: ");
    scanf("%d", &tie);

    printf("Digite a quantidade de derrotas: ");
    scanf("%d", &lost);

    //todos os multiplicadores somente para deixar o codigo mais explicativo e coeso com o cabeçalho
    int points = (victorie * 3) + (tie * 1) + (lost * 0);
    printf("O rendimento total do time foi de: %d pontos.", points);

    return 0;
}

/*
Diferença de Salários entre Jogadores
    Peça ao usuário os salários de dois jogadores 
    de futebol e mostre a diferença entre eles.
*/
int diferenca05() {
    float salaryA;
    float salaryB;
    float result;

    printf("Insira o maior salario entre os jogadores: ");
    scanf("%f", &salaryA);

    printf("Insira o maior salario entre os jogadores: ");
    scanf("%f", &salaryB);

    result = salaryA - salaryB;

    printf("A diferença de salario entre os dois eh de: $%.2f", result);

    return 0;
}

/*
Verificação de Cartão Vermelho
    Um jogador recebe cartão vermelho se receber 2 cartões 
    amarelos no jogo. Escreva um programa que verifica 
    se um jogador será expulso, baseado na quantidade 
    de cartões amarelos.
*/
int cartao06() {
    int cards;

    printf("Insira a quantidade de cartoes amarelos o jogador recebeu: ");
    scanf("%d", &cards);

    if(cards == 1) {
        printf("O jogador continua no campo!");

    }else if(cards == 2) {
        printf("O jogador foi expulso!");

    }else {
        printf("Valor insserido invalido.");

    }

    return 0;
}

/*
Verificar se um Jogador Pode Jogar
    Escreva um programa que solicita ao usuário a idade de 
    um jogador e verifica se ele pode jogar na categoria 
    Sub-20 (jogadores com 20 anos ou menos). 
    Se for mais velho, ele deve jogar na categoria profissional.
*/
int aptidao07() {
    char name[20];
    int age;

    printf("Insira o nome e a idade do jogador : ");
    scanf("%s %d", &name, &age);

    if(age <= 20) {
        printf("O jogador %s deve jogar na categoria sub 20!", name);

    }else {
        printf("O jogador %s deve jogar na categoria proficional!", name);

    }

    return 0;
}

/*
Avaliar o desempenho do jogador
    Escreva um programa que pede ao usuário a quantidade de 
    gols marcados por um jogador em uma temporada e verifica:

    Se fez mais de 10 gols, exibir "Excelente temporada!"

    Se fez entre 5 e 10 gols (inclusive), exibir "Boa temporada!"

    Se fez menos de 5 gols, exibir "Temporada abaixo do esperado."
*/
int desempenho08() {
    int goals;

    printf("Insira a quantidade de gols marcados pelo jogador nessa temporada: ");
    scanf("%d", &goals);

    if(goals > 10) {
        printf("A temporada foi exelente!");

    }else if (goals <= 10 && goals >= 5){
        printf("A temporada foi boa!");

    }else {
        printf("A temporada foi abaixo do esperado.");

    }

    return 0;
}

/*
Classificação do jogador baseada em idade e desempenho
    Escreva um programa que solicita ao usuário:

    A idade do jogador.

    A quantidade de gols marcados.

    O programa deve classificar o jogador nas seguintes categorias:

    ✅ Se tem até 20 anos e fez mais de 10 gols: "Jovem talento promissor!"

    ✅ Se tem até 20 anos e fez 10 gols ou menos: "Jovem em desenvolvimento."

    ✅ Se tem mais de 20 anos e fez mais de 15 gols: "Jogador experiente em grande fase!"

    ✅ Se tem mais de 20 anos e fez 15 gols ou menos: "Estevão"


*/
int idade09() {
    int age;
    int goals;

    printf("Insira a idade e quantidade de gols marcados pelo jogador: ");
    scanf("%d %d", &age, &goals);

    if(age <= 20 && goals > 10) {
        printf("Jovem talento!");

    }else if(age <= 20 && goals <= 10) {
        printf("Jovem em desenvolvimento.");

    }else if(age > 20 && goals > 15) {
        printf("Jogador experiente!");

    }else {
        printf("Estevao.");

    }

    return 0;
}

/*
Classificação do nível da partida com base na quantidade de torcedores
    Escreva um programa que solicita ao usuário:

    A capacidade total do estádio.

    A quantidade de torcedores presentes no jogo.

    Com base na taxa de ocupação do estádio, o programa deve classificar a partida da seguinte forma:

    ✅ Se o estádio estiver com mais de 90% da capacidade ocupada: "Lotado!"

    ✅ Se estiver entre 70% e 90% (inclusive): "Ótima presença de público!"

    ✅ Se estiver entre 50% e 70% (inclusive): "Público razoável."

    ✅ Se estiver abaixo de 50%: "Morumbis"
*/
int torcedores10() {
    int fans;
    int capacity;
    int ocupation;

    printf("Insira a capacidade do estadio: ");
    scanf("%d", &capacity);

    printf("Insira a quantidade de torcedores presente: ");
    scanf("%d", &fans);

    ocupation = (fans * 100) / capacity;

    if(ocupation > 90) {
        printf("Lotado!");

    }else if(ocupation > 70 && ocupation <= 90) {
        printf("Otima presenca de publico!");

    }else if(ocupation > 50 && ocupation <= 70) {
        printf("Publico razoavel!");

    }else {
        printf("Morumbis...");

    }

    return 0;
}
