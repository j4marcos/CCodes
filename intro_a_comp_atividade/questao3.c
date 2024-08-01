#include <stdio.h> 
#include <stdlib.h>

int numeroCadastros = 0;
int numeroPedidos = 0;

typedef enum situacao {
preparo,
caminho,
entregue
} situacao;

typedef struct cadastro {
//- Clientes (número do telefone, nome do cliente, endereço, complemento, CEP);
int id;
int telefone;
char nome[300];
int posicaoNomes[20];
int quantidadeNomes;
char endereço[300];
char complemento[100];
int CEP;

} perfil;

typedef struct {
//- Pizzas (código da pizza, nome da pizza, valor);
int id;
char* nome;
float valor;
} pizza;

static pizza cardapio[100];

typedef struct pedido {
//- Pedido (número do pedido, número do telefone, código da pizza, código do motoqueiro, situação).
int id;
int telefone;
pizza pedidos[50];
int numeroPedidos;
int codigoMotoqueiro;
situacao status;
} pedido;

void addPalavra(char* destino, char* origem) {
    int i;
    for( i = 0; origem[i] != '\0' && origem[i] != '\n' && origem[i] != ' ' ; i++) destino[i] = origem[i];
    destino[i] = '\0';
    return;
}

void identificarPalavras(char* nome, int* posicaoPalavras, int* nPalavras) {
    int lendoPalavra = 0;
    for(int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == '\n') break;
        if(!lendoPalavra && nome[i] != ' ') {
            lendoPalavra = 1;
            posicaoPalavras[(*nPalavras)] = i;
        }
        if(lendoPalavra && nome[i] == ' ') {
            lendoPalavra = 0;
            *nPalavras += 1;
        }
    }

    if(lendoPalavra) *nPalavras += 1;
    // leu todas as plavras e identificou o comeco de cada uma e a quantidade delas;
    return;
}

void mostrarPrimeiroNome(perfil p) {
    char primeiroNome[50];
    addPalavra(primeiroNome, &p.nome[p.posicaoNomes[0]]);
    printf("%s \n", primeiroNome);
};

perfil Menucadastar() {
    numeroCadastros++;
    perfil novoPerfil;
    novoPerfil.id = numeroCadastros;

    printf("/////////////////////////////////////////////////////\n");
    printf("//// Vamos cadastrar seu perfil! informe seu     ////\n");
    printf("//// nome completo:                              ////\n");
    printf("//// ");
    fflush(stdin);
    fgets(novoPerfil.nome, 300, stdin);
    identificarPalavras(novoPerfil.nome, novoPerfil.posicaoNomes, &novoPerfil.quantidadeNomes);
    printf("/////////////////////////////////////////////////////\n");
    printf("//// tudo certo senhor(a) ");
    mostrarPrimeiroNome(novoPerfil);
    printf("//// Vamos continuar o cadastro, informe seu     ////\n");
    printf("//// numero de telefone: (digite apenas numeros) ////\n");
    printf("//// ");
    fflush(stdin);
    scanf("%d", &novoPerfil.telefone);
    printf("//// informe o seu endereco:                     ////\n");
    printf("//// ");
    fflush(stdin);
    fgets(novoPerfil.endereço, 300, stdin);
    printf("//// informe o complemento:                      ////\n");
    printf("//// ");
    fflush(stdin);
    fgets(novoPerfil.complemento, 100, stdin);
    printf("//// E por ultimo senhor(a) ");
    mostrarPrimeiroNome(novoPerfil);
    printf("//// informe o seu CEP: (digite apenas numeros)  ////\n");
    printf("//// ");
    fflush(stdin);
    scanf("%d",&novoPerfil.CEP);
    printf("/////////////////////////////////////////////////////\n");
    printf("//// Parabens! voce completou o cadastro.        ////\n");
    printf("//// verifique seus dados:                       ////\n");
    printf("//// nome:");
    printf("%s \n", novoPerfil.nome);
    printf("//// numero de telefone: ");
    printf("%d \n", novoPerfil.telefone);
    printf("//// endereco: ");
    printf("%s \n", novoPerfil.endereço);
    printf("//// complemento: ");
    printf("%s \n", novoPerfil.complemento);
    printf("//// CEP: ");
    printf("%d \n", novoPerfil.CEP);
    printf("//// digite qualquer coisa para voltar ao menu.  ////\n");
    fflush(stdin);
    int resposta;
    scanf("%d", &resposta);
return novoPerfil;

}

void pizzas() {

    pizza calabressa;
    calabressa.id = 1;
    calabressa.nome = "Pizza de calabresa";
    calabressa.valor = 59.99;
    cardapio[0] = calabressa;

    pizza queijo;
    queijo.id = 2;
    queijo.nome = "Pizza de 4 queijos";
    queijo.valor = 59.99;
    cardapio[1] = queijo;

    pizza banana;
    banana.id = 3;
    banana.nome = "Pizza de banana com canela";
    banana.valor = 55.99;
    cardapio[2] = banana;

    pizza frango;
    frango.id = 4;
    frango.nome = "Pizza de frango com catupiri";
    frango.valor = 59.99;
    cardapio[3] = frango;
}

void menuPedido(perfil p, pedido carrinho) {
    printf("/////////////////////////////////////////////////////\n");
    printf("/////                Icomida                     ////\n");
    printf("/////////////////////////////////////////////////////\n");
    printf("//// adicione as pizzas que preferir:            ////\n");
    printf("////                                             ////\n");
    for (int i = 0 ; i < 4; i++) {
        printf("//// %s \n",cardapio[i].nome);
        printf("//// %f \n",cardapio[i].valor);
        printf("//// digite [%d] para adicionar ao pedido \n",cardapio[i].id);
    printf("/////                                            ////\n");
    }
    printf("///// Seu pedido:                               ////\n");
    for (int i = 0 ; i < carrinho.numeroPedidos; i++) {
        printf("%s \n", carrinho.pedidos[i].nome);
    }; 
    float valorFinal = 0;
    for (int i = 0; i < carrinho.numeroPedidos; i ++) {
        valorFinal += carrinho.pedidos->valor;
    }
    printf("///// Valor final: ");
    printf("%f \n", valorFinal);
    printf("///// digite [5] para finalizar o pedido.        ////\n");
    printf("/////////////////////////////////////////////////////\n");
    int resposta;
    scanf("%d", &resposta);
    if(resposta == 1 || resposta == 2  || resposta == 3 || resposta == 4) {
        carrinho.pedidos[carrinho.numeroPedidos] = cardapio[resposta - 1];
        carrinho.numeroPedidos++;
        menuPedido(p, carrinho);
    }
    if(resposta == 5 && carrinho.numeroPedidos > 0) {
        situacao stt = preparo;
        carrinho.status = stt;
        menuEntrega(p, carrinho);
    }
    menuPedido(p, carrinho);
}

void menu(perfil p) {
    printf("/////////////////////////////////////////////////////\n");
    printf("/////                Icomida                     ////\n");
    printf("/////////////////////////////////////////////////////\n");
    printf("//// Bem-vindo(a) ");
    mostrarPrimeiroNome(p);
    printf("////                                             ////\n");
    printf("//// fazer pedido: (digite 1)                    ////\n");
    printf("/////////////////////////////////////////////////////\n");
    int resposta;
    fflush(stdin);
    scanf("%d", &resposta);
    
    if(resposta == 1) {
        pedido ordem;
        numeroPedidos++;
        ordem.id = numeroPedidos;
        ordem.telefone = p.telefone;
        ordem.numeroPedidos = 0;
        menuPedido(p, ordem);
    } 
    menu(p);
}

void menuEntrega(perfil p, pedido carrinho) {
    printf("/////////////////////////////////////////////////////\n");
    printf("/////                Icomida                     ////\n");
    printf("/////////////////////////////////////////////////////\n");
    printf("//// Seu pedido esta sendo preparado e logo      ////\n");
    printf("//// saira para a entrega!                       ////\n");
    printf("////                                             ////\n");
    printf("///// Seu pedido:                                ////\n");
    for (int i = 0 ; i < carrinho.numeroPedidos; i++) {
        printf("%s \n", carrinho.pedidos[i].nome);
    }; 
    float valorFinal = 0;
    for (int i = 0; i < carrinho.numeroPedidos; i ++) {
        valorFinal += carrinho.pedidos->valor;
    }
    printf("///// Valor final: ");
    printf("%f \n", valorFinal);
    printf("///// digite [1] para continuar.                 ////\n");
    printf("/////////////////////////////////////////////////////\n");
    fflush(stdin);
    int resposta;
    scanf("%d", &resposta);
    if (resposta != 1) {
        menuEntrega(p, carrinho);
    }
    carrinho.status = caminho;
    printf("/////////////////////////////////////////////////////\n");
    printf("/////                Icomida                     ////\n");
    printf("/////////////////////////////////////////////////////\n");
    printf("//// o motoqueiro (");
    carrinho.codigoMotoqueiro = rand()%10000;
    printf("%d", carrinho.codigoMotoqueiro);
    printf(") saio para entregar o pedido \n");
    printf("//// no endereco: ");
    printf("%s \n", p.endereço);
    printf("//// ");
    printf("%s \n", p.complemento);
    printf("///// digite [1] para continuar.                 ////\n");
    printf("/////////////////////////////////////////////////////\n");
    fflush(stdin);
    scanf("%d", &resposta);

    carrinho.status = entregue;
    printf("/////////////////////////////////////////////////////\n");
    printf("/////                Icomida                     ////\n");
    printf("/////////////////////////////////////////////////////\n");
    printf("//// O pedido (id:");
    printf("%d", carrinho.id);
    printf(") foi entregue! \n");
    printf("////                                            ////\n");
    printf("//// Porfavor considere avaliar bem esse APP :) \n");
    printf("///// digite para voltar ao menu.               ////\n");
    printf("/////////////////////////////////////////////////////\n");
    fflush(stdin);
    scanf("%d", &resposta);
        menu(p);
}

void menuEntrada() {
    printf("/////////////////////////////////////////////////////\n");
    printf("/////                Icomida                     ////\n");
    printf("/////////////////////////////////////////////////////\n");
    printf("//// Bem-vindo(a), cadastre-se, para fazer       ////\n");
    printf("//// seu pedido.                                 ////\n");
    printf("////                                             ////\n");
    printf("//// cadastrar: (digite 1)                       ////\n");
    printf("/////////////////////////////////////////////////////\n");
    int resposta;
    scanf("%d", &resposta);
    if(resposta == 1) menu(Menucadastar());
    menuEntrada();
}

void carregarMenu() {
    pizzas();

    return;
}

int main() {
    carregarMenu();
    menuEntrada();
    
    return 0;
}