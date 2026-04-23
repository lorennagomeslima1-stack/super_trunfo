/* 
    Aluna: Lorenna Gomes Lima 
    Disciplina: Introdução a  Progamação de Computadores
    Desafio: Nível novato - Cartas Super Trunfo 
    */ 
   
    #include <stdio.h>
    int main () {
       //Variáveis carta1
       char estado1;
       char codigo1 [50];
       char cidade1 [50];
       int populacao1;
       float area1;
       float pib1;
       int pontos_turisticos1;
       
       //Variáveis carta2
       char estado2;
       char codigo2 [50];
       char cidade2 [50];
       int populacao2;
       float area2;
       float pib2;
       int pontos_turisticos2;

       //---entrada e saida da carta1---
       printf ("---cadastro da carta1---\n");

       printf ("Digite o estado (A-Z): "); 
       scanf (" %c", &estado1);
       printf ("O estado digitado foi: %c\n\n, estado1");

       printf ("Digite o codigo [50]:");
       scanf ("%d" , &codigo1);
       printf ("O codigo digitado foi: %d\n\n", codigo1);

       printf ("Digite a cidade [50]:");
       scanf (" %[^\n]" , &cidade1);
       printf ("A cidade digitada foi: %s\n\n", cidade1);

       printf ("Digite a população:");
       scanf ("%f" , & populacao1);
       printf ("A populacao digitada foi: %f\n\n" , populacao1);

       printf ("Digite a area:");
       scanf ("%f" , &area1);
       printf ("A area digitada foi: %f\n\n" , area1);

       printf ("Digite o pib:");
       scanf ("%f" , &pib1);
       printf ("O pib digitado foi: %f\n\n", pib1);

       printf ("Digite a quantidade de pontos_turisticos:");
       scanf ("%d" , &pontos_turisticos1);
       printf ("A quantidade de pontos_turisticos foi: %d\n\n", pontos_turisticos1);

       //---entrada e saida da carta2---
       printf ("---cadrasto da carta2---\n");

       printf ("Digite o estado (A-Z): ");
       scanf (" %c", & estado2);
       printf ("O estado digitado foi: %c\n\n, estado2");

       printf ("Digite o codigo [50]: ");
       scanf ("%d", & codigo2);
       printf ("O codigo digitado foi: %d\n\n, codigo2");

       printf ("Digite a cidade [50]: ");
       scanf (" %[^\n]", & cidade2);
       printf ("A cidade digitada foi: %s\n\n, cidade2");

       printf ("Digite a populacao: ");
       scanf ("%f", & populacao2);
       printf ("A populacao digitada foi: %f\n\n, populacao2");

       printf ("Digite a area: ");
       scanf ("%f", & area2);
       printf ("A area digitada foi: %f\n\n, area2");

       printf ("Digite o pib: ");
       scanf ("%f", & pib2);
       printf ("O pib digitado foi: %f\n\n, pib2");

       printf ("Digite a quantidade de pontos_turisticos: ");
       scanf ("%d", & pontos_turisticos2);
       printf ("Os pontos_turisticos digitados foi: %d\n\n, pontos_turisticos2");


       if (populacao1 > populacao2) { //PRIMEIRA CONDICAO
        printf ("Carta1 venceu!\n");
       }
       else if (populacao1 < populacao2){ //OUTRA CONDICAO
        printf ("Carta2 venceu!\n");
       }
       else { //EMPATE
        printf ("empate!\n");
       }
        
      if (area1 > area2){
        printf ("Carta1 venceu!\n");
      }
      else if (area1 < area2){
        printf ("Carta2 venceu!\n");
      }
      else {
        printf ("Empate!\n");
      }

      if (pib1 > pib2) {
        printf ("Carta1 venceu!\n");
      }
      else if (pib1 < pib2) {
        printf ("Carta2 venceu!\n");
      }
      else {
        printf ("Empate!\n");
      }

      if (pontos_turisticos1 > pontos_turisticos2) {
        printf ("Carta1 venceu!\n");
      }
      else if (pontos_turisticos1 < pontos_turisticos2) {
        printf ("Carta2 venceu!\n");
      }
      else {
        printf ("Empate!\n");
      }
     




       return 0;

       }






