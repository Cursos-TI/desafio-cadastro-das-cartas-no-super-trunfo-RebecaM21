#include <stdio.h>
#include <string.h> 

   int main() {
   char nome [20];
   char codigo [15];
   float populacao;
   float area;
   double PIB;
   int pontos_turisticos;
  
  //ENTRADA DE DADOS 
  printf ("Digite o nome do estado:  \n");
  fgets(nome,sizeof(nome),stdin);
  nome[strcspn(nome,"\n")]= '\0';


  
  printf("Digite o codigo da ciudade: \n");
  scanf ("%s", codigo);

  printf("Digite o numnero da populacao: \n");
  scanf("%f", &populacao);

  printf("Digite o numero de area(em Km²): \n" );
  scanf("%f", &area);
  
  while(getchar() != '\n');

   printf("Digite o PIB do estado: \n" );
   scanf("%Lf" , &PIB);
 
 while(getchar() != '\n');

  printf ("Digite o numero de pontos turisticos: \n");
  scanf("%d", &pontos_turisticos);

  // SAIDA DE DADOS 

  printf("\n===Informacoes do estado===\n");
  printf("nome do estado: %s \n", nome );
  printf("codigo da cidade: %s \n", codigo);
  printf("populacao: %2.f populacao \n", populacao);
  printf("area: %2.f Km² \n", area);
  printf ("PIB :%.2Lf\n", PIB);
  printf("pontos_turisticos: %d\n", pontos_turisticos);


   return 0;
}
