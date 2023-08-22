// Jogo de perguntas e respostas para dois jogadores, onde é exibido uma pergunta para um e depois para o outro, no fim, exiba o vencedor e sua pontuação.

#include <stdio.h>
int main(void) {

  char posicao1= '#';
  char posicao2= '#';
  char posicao3= '#';
  char posicao4= '#';
  char posicao5= '#';
  char posicao6= '#';
  char posicao7= '#';
  char posicao8= '#';
  char posicao9= '#';

  char simbolo= 'X';
  int escolha;
 
  // a cada etapa mostra a tela
  printf("| %c %c %c |\n", posicao1, posicao2 , posicao3);
  printf("| %c %c %c |\n", posicao4, posicao5 , posicao6);
  printf("| %c %c %c |\n\n", posicao7, posicao8 , posicao9);
 
  // vez do primerio jogador 
   printf("vez do primeiro jogador\n escolha sua posicao (de 1 a 9)");
  scanf("%d",&escolha);
  
  //verificar 
  switch (escolha) {
  case 1:
    if (posicao1 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao1 = simbolo;
    }
    break;
    case 2:
     if (posicao2 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao2 = simbolo;
    }
    break;
    case 3:
     if (posicao3 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao3 = simbolo;
    }
    break;
    case 4:
     if (posicao4 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao4 = simbolo;
    }
    break;
    case 5:
     if (posicao5 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao5 = simbolo;
    }
    break;
    case 6:
     if (posicao6 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao6 = simbolo;
    }
    break;
    case 7:
     if (posicao7 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao7 = simbolo;
    }
    break;
    case 8:
     if (posicao8 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao8 = simbolo;
    }
    break;
    case 9:
     if (posicao9 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao9 = simbolo;
    }
    break;
    default:
    printf("jogou errado perdeu a chance!\n");
  }
  
 //marcar no tabuleiro 
  printf("| %c %c %c |\n", posicao1, posicao2 , posicao3);
  printf("| %c %c %c |\n", posicao4, posicao5 , posicao6);
  printf("| %c %c %c |\n\n", posicao7, posicao8 , posicao9);

  //verificar se ganhou

  if (posicao1 == posicao2 && posicao2 == posicao3 
    && posicao2 != '#' || 
    posicao4 == posicao5 && posicao5 == posicao6  
    && posicao5 != '#' ||
    posicao7 == posicao8 && posicao8 == posicao9  
    && posicao8 != '#' ||
    posicao1 == posicao4 && posicao4 == posicao7  
    && posicao4 != '#' ||
    posicao2 == posicao5 && posicao5 == posicao8  
    && posicao5 != '#' ||
    posicao3 == posicao6 && posicao6 == posicao9  
    && posicao6 != '#' || 
    posicao1 == posicao5 && posicao5 == posicao9  
    && posicao5 != '#' ||
    posicao3 == posicao5 && posicao5 == posicao7  
    && posicao5 != '#' ) {
    printf(" %c venceu!",simbolo);
      } else {
 // vez do segundo, e repete o processo
 simbolo = 'O';
    
  printf("vez do segundo jogador\n escolha sua posicao (de 1 a 9)");
  scanf("%d",&escolha);

    switch (escolha) {
  case 1:
    if (posicao1 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao1 = simbolo;
    }
    break;
    case 2:
     if (posicao2 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao2 = simbolo;
    }
    break;
    case 3:
     if (posicao3 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao3 = simbolo;
    }
    break;
    case 4:
     if (posicao4 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao4 = simbolo;
    }
    break;
    case 5:
     if (posicao5 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao5 = simbolo;
    }
    break;
    case 6:
     if (posicao6 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao6 = simbolo;
    }
    break;
    case 7:
     if (posicao7 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao7 = simbolo;
    }
    break;
    case 8:
     if (posicao8 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao8 = simbolo;
    }
    break;
    case 9:
     if (posicao9 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao9 = simbolo;
    }
    break;
    default:
    printf("jogou errado perdeu a chance!\n");
  }

    printf("| %c %c %c |\n", posicao1, posicao2 , posicao3);
  printf("| %c %c %c |\n", posicao4, posicao5 , posicao6);
  printf("| %c %c %c |\n\n", posicao7, posicao8 , posicao9);
       
     if (posicao1 == posicao2 && posicao2 == posicao3 
    && posicao2 != '#' || 
    posicao4 == posicao5 && posicao5 == posicao6  
    && posicao5 != '#' ||
    posicao7 == posicao8 && posicao8 == posicao9  
    && posicao8 != '#' ||
    posicao1 == posicao4 && posicao4 == posicao7  
    && posicao4 != '#' ||
    posicao2 == posicao5 && posicao5 == posicao8  
    && posicao5 != '#' ||
    posicao3 == posicao6 && posicao6 == posicao9  
    && posicao6 != '#' || 
    posicao1 == posicao5 && posicao5 == posicao9  
    && posicao5 != '#' ||
    posicao3 == posicao5 && posicao5 == posicao7  
    && posicao5 != '#' ) {
    printf(" %c venceu!",simbolo);
      } else {
 // vez do primeiro, e repete o processo
 simbolo = 'X';

         printf("vez do primeiro jogador\n escolha sua posicao (de 1 a 9)");
  scanf("%d",&escolha);
  
  //verificar 
  switch (escolha) {
  case 1:
    if (posicao1 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao1 = simbolo;
    }
    break;
    case 2:
     if (posicao2 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao2 = simbolo;
    }
    break;
    case 3:
     if (posicao3 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao3 = simbolo;
    }
    break;
    case 4:
     if (posicao4 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao4 = simbolo;
    }
    break;
    case 5:
     if (posicao5 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao5 = simbolo;
    }
    break;
    case 6:
     if (posicao6 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao6 = simbolo;
    }
    break;
    case 7:
     if (posicao7 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao7 = simbolo;
    }
    break;
    case 8:
     if (posicao8 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao8 = simbolo;
    }
    break;
    case 9:
     if (posicao9 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao9 = simbolo;
    }
    break;
    default:
    printf("jogou errado perdeu a chance!\n");
  }
  
 //marcar no tabuleiro 
  printf("| %c %c %c |\n", posicao1, posicao2 , posicao3);
  printf("| %c %c %c |\n", posicao4, posicao5 , posicao6);
  printf("| %c %c %c |\n\n", posicao7, posicao8 , posicao9);

  //verificar se ganhou

  if (posicao1 == posicao2 && posicao2 == posicao3 
    && posicao2 != '#' || 
    posicao4 == posicao5 && posicao5 == posicao6  
    && posicao5 != '#' ||
    posicao7 == posicao8 && posicao8 == posicao9  
    && posicao8 != '#' ||
    posicao1 == posicao4 && posicao4 == posicao7  
    && posicao4 != '#' ||
    posicao2 == posicao5 && posicao5 == posicao8  
    && posicao5 != '#' ||
    posicao3 == posicao6 && posicao6 == posicao9  
    && posicao6 != '#' || 
    posicao1 == posicao5 && posicao5 == posicao9  
    && posicao5 != '#' ||
    posicao3 == posicao5 && posicao5 == posicao7  
    && posicao5 != '#' ) {
    printf(" %c venceu!",simbolo);
      } else {
 // vez do segundo, e repete o processo
 simbolo = 'O';
    
  printf("vez do segundo jogador\n escolha sua posicao (de 1 a 9)");
  scanf("%d",&escolha);

    switch (escolha) {
  case 1:
    if (posicao1 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao1 = simbolo;
    }
    break;
    case 2:
     if (posicao2 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao2 = simbolo;
    }
    break;
    case 3:
     if (posicao3 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao3 = simbolo;
    }
    break;
    case 4:
     if (posicao4 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao4 = simbolo;
    }
    break;
    case 5:
     if (posicao5 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao5 = simbolo;
    }
    break;
    case 6:
     if (posicao6 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao6 = simbolo;
    }
    break;
    case 7:
     if (posicao7 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao7 = simbolo;
    }
    break;
    case 8:
     if (posicao8 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao8 = simbolo;
    }
    break;
    case 9:
     if (posicao9 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao9 = simbolo;
    }
    break;
    default:
    printf("jogou errado perdeu a chance!\n");
  }

    printf("| %c %c %c |\n", posicao1, posicao2 , posicao3);
  printf("| %c %c %c |\n", posicao4, posicao5 , posicao6);
  printf("| %c %c %c |\n\n", posicao7, posicao8 , posicao9);
       
     if (posicao1 == posicao2 && posicao2 == posicao3 
    && posicao2 != '#' || 
    posicao4 == posicao5 && posicao5 == posicao6  
    && posicao5 != '#' ||
    posicao7 == posicao8 && posicao8 == posicao9  
    && posicao8 != '#' ||
    posicao1 == posicao4 && posicao4 == posicao7  
    && posicao4 != '#' ||
    posicao2 == posicao5 && posicao5 == posicao8  
    && posicao5 != '#' ||
    posicao3 == posicao6 && posicao6 == posicao9  
    && posicao6 != '#' || 
    posicao1 == posicao5 && posicao5 == posicao9  
    && posicao5 != '#' ||
    posicao3 == posicao5 && posicao5 == posicao7  
    && posicao5 != '#' ) {
    printf(" %c venceu!",simbolo);
      } else {
 // vez do primeiro, e repete o processo
 simbolo = 'X';

         printf("vez do primeiro jogador\n escolha sua posicao (de 1 a 9)");
  scanf("%d",&escolha);
  
  //verificar 
  switch (escolha) {
  case 1:
    if (posicao1 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao1 = simbolo;
    }
    break;
    case 2:
     if (posicao2 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao2 = simbolo;
    }
    break;
    case 3:
     if (posicao3 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao3 = simbolo;
    }
    break;
    case 4:
     if (posicao4 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao4 = simbolo;
    }
    break;
    case 5:
     if (posicao5 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao5 = simbolo;
    }
    break;
    case 6:
     if (posicao6 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao6 = simbolo;
    }
    break;
    case 7:
     if (posicao7 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao7 = simbolo;
    }
    break;
    case 8:
     if (posicao8 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao8 = simbolo;
    }
    break;
    case 9:
     if (posicao9 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao9 = simbolo;
    }
    break;
    default:
    printf("jogou errado perdeu a chance!\n");
  }
  
 //marcar no tabuleiro 
  printf("| %c %c %c |\n", posicao1, posicao2 , posicao3);
  printf("| %c %c %c |\n", posicao4, posicao5 , posicao6);
  printf("| %c %c %c |\n\n", posicao7, posicao8 , posicao9);

  //verificar se ganhou

  if (posicao1 == posicao2 && posicao2 == posicao3 
    && posicao2 != '#' || 
    posicao4 == posicao5 && posicao5 == posicao6  
    && posicao5 != '#' ||
    posicao7 == posicao8 && posicao8 == posicao9  
    && posicao8 != '#' ||
    posicao1 == posicao4 && posicao4 == posicao7  
    && posicao4 != '#' ||
    posicao2 == posicao5 && posicao5 == posicao8  
    && posicao5 != '#' ||
    posicao3 == posicao6 && posicao6 == posicao9  
    && posicao6 != '#' || 
    posicao1 == posicao5 && posicao5 == posicao9  
    && posicao5 != '#' ||
    posicao3 == posicao5 && posicao5 == posicao7  
    && posicao5 != '#' ) {
    printf(" %c venceu!",simbolo);
      } else {
 // vez do segundo, e repete o processo
 simbolo = 'O';
    
  printf("vez do segundo jogador\n escolha sua posicao (de 1 a 9)");
  scanf("%d",&escolha);

    switch (escolha) {
  case 1:
    if (posicao1 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao1 = simbolo;
    }
    break;
    case 2:
     if (posicao2 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao2 = simbolo;
    }
    break;
    case 3:
     if (posicao3 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao3 = simbolo;
    }
    break;
    case 4:
     if (posicao4 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao4 = simbolo;
    }
    break;
    case 5:
     if (posicao5 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao5 = simbolo;
    }
    break;
    case 6:
     if (posicao6 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao6 = simbolo;
    }
    break;
    case 7:
     if (posicao7 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao7 = simbolo;
    }
    break;
    case 8:
     if (posicao8 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao8 = simbolo;
    }
    break;
    case 9:
     if (posicao9 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao9 = simbolo;
    }
    break;
    default:
    printf("jogou errado perdeu a chance!\n");
  }

    printf("| %c %c %c |\n", posicao1, posicao2 , posicao3);
  printf("| %c %c %c |\n", posicao4, posicao5 , posicao6);
  printf("| %c %c %c |\n\n", posicao7, posicao8 , posicao9);
       
     if (posicao1 == posicao2 && posicao2 == posicao3 
    && posicao2 != '#' || 
    posicao4 == posicao5 && posicao5 == posicao6  
    && posicao5 != '#' ||
    posicao7 == posicao8 && posicao8 == posicao9  
    && posicao8 != '#' ||
    posicao1 == posicao4 && posicao4 == posicao7  
    && posicao4 != '#' ||
    posicao2 == posicao5 && posicao5 == posicao8  
    && posicao5 != '#' ||
    posicao3 == posicao6 && posicao6 == posicao9  
    && posicao6 != '#' || 
    posicao1 == posicao5 && posicao5 == posicao9  
    && posicao5 != '#' ||
    posicao3 == posicao5 && posicao5 == posicao7  
    && posicao5 != '#' ) {
    printf(" %c venceu!",simbolo);
      } else {
 // vez do primeiro, e repete o processo
 simbolo = 'X';

         printf("vez do primeiro jogador\n escolha sua posicao (de 1 a 9)");
  scanf("%d",&escolha);
  
  //verificar 
  switch (escolha) {
  case 1:
    if (posicao1 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao1 = simbolo;
    }
    break;
    case 2:
     if (posicao2 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao2 = simbolo;
    }
    break;
    case 3:
     if (posicao3 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao3 = simbolo;
    }
    break;
    case 4:
     if (posicao4 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao4 = simbolo;
    }
    break;
    case 5:
     if (posicao5 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao5 = simbolo;
    }
    break;
    case 6:
     if (posicao6 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao6 = simbolo;
    }
    break;
    case 7:
     if (posicao7 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao7 = simbolo;
    }
    break;
    case 8:
     if (posicao8 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao8 = simbolo;
    }
    break;
    case 9:
     if (posicao9 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao9 = simbolo;
    }
    break;
    default:
    printf("jogou errado perdeu a chance!\n");
  }
  
 //marcar no tabuleiro 
  printf("| %c %c %c |\n", posicao1, posicao2 , posicao3);
  printf("| %c %c %c |\n", posicao4, posicao5 , posicao6);
  printf("| %c %c %c |\n\n", posicao7, posicao8 , posicao9);

  //verificar se ganhou

  if (posicao1 == posicao2 && posicao2 == posicao3 
    && posicao2 != '#' || 
    posicao4 == posicao5 && posicao5 == posicao6  
    && posicao5 != '#' ||
    posicao7 == posicao8 && posicao8 == posicao9  
    && posicao8 != '#' ||
    posicao1 == posicao4 && posicao4 == posicao7  
    && posicao4 != '#' ||
    posicao2 == posicao5 && posicao5 == posicao8  
    && posicao5 != '#' ||
    posicao3 == posicao6 && posicao6 == posicao9  
    && posicao6 != '#' || 
    posicao1 == posicao5 && posicao5 == posicao9  
    && posicao5 != '#' ||
    posicao3 == posicao5 && posicao5 == posicao7  
    && posicao5 != '#' ) {
    printf(" %c venceu!",simbolo);
      } else {
 // vez do segundo, e repete o processo
 simbolo = 'O';
    
  printf("vez do segundo jogador\n escolha sua posicao (de 1 a 9)");
  scanf("%d",&escolha);

    switch (escolha) {
  case 1:
    if (posicao1 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao1 = simbolo;
    }
    break;
    case 2:
     if (posicao2 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao2 = simbolo;
    }
    break;
    case 3:
     if (posicao3 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao3 = simbolo;
    }
    break;
    case 4:
     if (posicao4 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao4 = simbolo;
    }
    break;
    case 5:
     if (posicao5 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao5 = simbolo;
    }
    break;
    case 6:
     if (posicao6 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao6 = simbolo;
    }
    break;
    case 7:
     if (posicao7 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao7 = simbolo;
    }
    break;
    case 8:
     if (posicao8 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao8 = simbolo;
    }
    break;
    case 9:
     if (posicao9 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao9 = simbolo;
    }
    break;
    default:
    printf("jogou errado perdeu a chance!\n");
  }

    printf("| %c %c %c |\n", posicao1, posicao2 , posicao3);
  printf("| %c %c %c |\n", posicao4, posicao5 , posicao6);
  printf("| %c %c %c |\n\n", posicao7, posicao8 , posicao9);
       
     if (posicao1 == posicao2 && posicao2 == posicao3 
    && posicao2 != '#' || 
    posicao4 == posicao5 && posicao5 == posicao6  
    && posicao5 != '#' ||
    posicao7 == posicao8 && posicao8 == posicao9  
    && posicao8 != '#' ||
    posicao1 == posicao4 && posicao4 == posicao7  
    && posicao4 != '#' ||
    posicao2 == posicao5 && posicao5 == posicao8  
    && posicao5 != '#' ||
    posicao3 == posicao6 && posicao6 == posicao9  
    && posicao6 != '#' || 
    posicao1 == posicao5 && posicao5 == posicao9  
    && posicao5 != '#' ||
    posicao3 == posicao5 && posicao5 == posicao7  
    && posicao5 != '#' ) {
    printf(" %c venceu!",simbolo);
      } else {
 // vez do primeiro, e repete o processo
 simbolo = 'X';

         printf("vez do primeiro jogador\n escolha sua posicao (de 1 a 9)");
  scanf("%d",&escolha);
  
  //verificar 
  switch (escolha) {
  case 1:
    if (posicao1 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao1 = simbolo;
    }
    break;
    case 2:
     if (posicao2 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao2 = simbolo;
    }
    break;
    case 3:
     if (posicao3 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao3 = simbolo;
    }
    break;
    case 4:
     if (posicao4 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao4 = simbolo;
    }
    break;
    case 5:
     if (posicao5 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao5 = simbolo;
    }
    break;
    case 6:
     if (posicao6 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao6 = simbolo;
    }
    break;
    case 7:
     if (posicao7 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao7 = simbolo;
    }
    break;
    case 8:
     if (posicao8 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao8 = simbolo;
    }
    break;
    case 9:
     if (posicao9 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao9 = simbolo;
    }
    break;
    default:
    printf("jogou errado perdeu a chance!\n");
  }
  
 //marcar no tabuleiro 
  printf("| %c %c %c |\n", posicao1, posicao2 , posicao3);
  printf("| %c %c %c |\n", posicao4, posicao5 , posicao6);
  printf("| %c %c %c |\n\n", posicao7, posicao8 , posicao9);

  //verificar se ganhou

  if (posicao1 == posicao2 && posicao2 == posicao3 
    && posicao2 != '#' || 
    posicao4 == posicao5 && posicao5 == posicao6  
    && posicao5 != '#' ||
    posicao7 == posicao8 && posicao8 == posicao9  
    && posicao8 != '#' ||
    posicao1 == posicao4 && posicao4 == posicao7  
    && posicao4 != '#' ||
    posicao2 == posicao5 && posicao5 == posicao8  
    && posicao5 != '#' ||
    posicao3 == posicao6 && posicao6 == posicao9  
    && posicao6 != '#' || 
    posicao1 == posicao5 && posicao5 == posicao9  
    && posicao5 != '#' ||
    posicao3 == posicao5 && posicao5 == posicao7  
    && posicao5 != '#' ) {
    printf(" %c venceu!",simbolo);
      } else {
 // vez do segundo, e repete o processo
 simbolo = 'O';
    
  printf("vez do segundo jogador\n escolha sua posicao (de 1 a 9)");
  scanf("%d",&escolha);

    switch (escolha) {
  case 1:
    if (posicao1 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao1 = simbolo;
    }
    break;
    case 2:
     if (posicao2 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao2 = simbolo;
    }
    break;
    case 3:
     if (posicao3 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao3 = simbolo;
    }
    break;
    case 4:
     if (posicao4 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao4 = simbolo;
    }
    break;
    case 5:
     if (posicao5 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao5 = simbolo;
    }
    break;
    case 6:
     if (posicao6 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao6 = simbolo;
    }
    break;
    case 7:
     if (posicao7 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao7 = simbolo;
    }
    break;
    case 8:
     if (posicao8 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao8 = simbolo;
    }
    break;
    case 9:
     if (posicao9 != '#') {
       printf("jogou errado perdeu a chance!\n");
    } else {
      posicao9 = simbolo;
    }
    break;
    default:
    printf("jogou errado perdeu a chance!\n");
  }

    printf("| %c %c %c |\n", posicao1, posicao2 , posicao3);
  printf("| %c %c %c |\n", posicao4, posicao5 , posicao6);
  printf("| %c %c %c |\n\n", posicao7, posicao8 , posicao9);
       
     if (posicao1 == posicao2 && posicao2 == posicao3 
    && posicao2 != '#' || 
    posicao4 == posicao5 && posicao5 == posicao6  
    && posicao5 != '#' ||
    posicao7 == posicao8 && posicao8 == posicao9  
    && posicao8 != '#' ||
    posicao1 == posicao4 && posicao4 == posicao7  
    && posicao4 != '#' ||
    posicao2 == posicao5 && posicao5 == posicao8  
    && posicao5 != '#' ||
    posicao3 == posicao6 && posicao6 == posicao9  
    && posicao6 != '#' || 
    posicao1 == posicao5 && posicao5 == posicao9  
    && posicao5 != '#' ||
    posicao3 == posicao5 && posicao5 == posicao7  
    && posicao5 != '#' ) {
    printf(" %c venceu!",simbolo);
      } else {
 // vez do primeiro, e repete o processo
 simbolo = 'X';
       
      }}}}}}}}}}
  return 0 ;
}
