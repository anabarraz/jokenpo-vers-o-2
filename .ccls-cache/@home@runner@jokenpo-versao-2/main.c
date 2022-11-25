#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand (time(NULL));
  int menu, cpu;
  char S, N;
  
  
  do{
   printf("Escolha o que voce quer\n");
   printf("1 - pedra\n");
   printf("2 - papel\n");
   printf("3 - tesoura\n");
   printf("4 - largarto\n");
   printf("5 - spock\n");
   scanf("%d", &menu);

    switch(menu){

    case(1): // usuario escolheu pedra
    cpu = rand()%6+1;
    if(cpu == 1) {
      printf("Computador escolheu pedra, empate!\n");
    }
    else if(cpu == 2) {
      printf("Computador escolheu papel, perdeu\n");
    }
     else if(cpu == 3) {
      printf("Computador escolheu tesoura, você Ganhou\n");
    }
      else if(cpu == 4) {
        printf("Computador escolheu lagarto, você ganhou\n"); 
      }
      else if(cpu == 5) {
        printf("Computador escolheu spock, você foi vaporizado, perdeu :( \n");
      }
    break;
      
    case(2): // usuario escolheu papel
      cpu = rand()%6+1;
        if(cpu == 1 ){
         printf("Computador escolheu pedra, você perdeu\n");
        }
        else if(cpu == 2) {
          printf("Computador escolheu papel, empatou\n");
        }
        else if(cpu == 3) {
          printf("Computador escolheu tesoura, você ganhou!\n");
          }
        else if(cpu == 4) {
          printf("Computador escolheu lagarto, você perdeu\n");
          }
        else if(cpu == 5){
          printf("Computador escolheu spock, você perdeu\n");
        }
    
      break;

      case(3): // usuario escolheu tesoura
      cpu = rand()%6+1;
      if(cpu == 1) {
        printf("Computador escolheu pedra, você perdeu!\n");
      }
      else if(cpu == 2) {
        printf("Computador escolheu papel, você ganhou\n");
      }
      else if(cpu == 3) {
        printf("Computador escolheu tesoura, empate\n");
      }
      else if(cpu == 4) {
        printf("Computador escolheu lagarto, você ganhou!\n");
      }
      else if(cpu == 5) {
        printf("Computador escolheu spock, você perdeu!\n");
      }
     break;
      case(4):
      cpu = rand()%6+1;
      if(cpu==1){
        printf("computador escolheu papel, voce ganhou\n");
      }
      else if(cpu==2){
        printf("computador escolheu pedra, você perdeu\n");
      }
      else if(cpu==3){
        printf("computador escolheu tesoura, voce perdeu\n");
        }
      else if(cpu==4){
        printf("computador escolheu lagarto, empate\n");
        }
      else if(cpu==5){
        printf("computador escolheu spock, voce ganhou\n");
        }
      break;
      case(5):
      cpu=rand()%6+1;
      if(cpu==1){
        printf("computador escolheu pedra, voce ganhou\n");
      }
      else if(cpu==2){
        printf("computador escolheu papel, voce perdeu\n ");
      }
      else if(cpu==3){
        printf("computador escolheu tesoura, voce ganhou\n");
        }
        else if(cpu==4){
        printf("computador escolheu lagarto, voce perdeu\n");
        }
      else if(cpu==5){
        printf("computador escolheu spock, empate\n");
      }
      break;
      }
    
    printf("Deseja jogar novamente?\n");
    
     printf("Digite S para sim\n");
     scanf("%c", &S);
     printf("Digite N para nao\n ");
     scanf("%c", &N);

    if(N == 'n'|| N == 'N'){
      printf("Tchau\n");
      menu = 0;
    }
  

  }while(menu!=0);

  } 