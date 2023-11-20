## Algoritmos de Ordenação Elementares

 - [BubbleSort](https://github.com/acamposs/EDA/blob/main/OrdenacaoElementares/bubble_Interativo.c)
 - [SelectionSort](https://github.com/acamposs/EDA/blob/main/OrdenacaoElementares/Selection_Recursivo.c)
 - [InsertionSort](https://github.com/acamposs/EDA/blob/main/OrdenacaoElementares/insertion.c)
 - [ShellSort]

 ### Regras do jogo
 - O que vamos ordenar? Arquivos de itens (Chaves)

 - Objetivo é rearranjar os itens de forma que as chaves respeitem a ordem definida 

 - CONVENÇÕES

     - Definir um dado que será armazenado:
         - typedef int item;

     - Definir uma macro que defini uma chave:
         - #define key(A) //retorna (A)

     - Macro para comparar: 
         - #define less(A,B) // compara key(A) < key(B)

     - Macro para troca: 
         - #define exch(A,B) // troca {item T=A;  A=B; B=T;}
     
     - Macro compara e troca: 
         - #define compexch (A,B) //compara e troca {if(Less(A,B) exch(A,B))}


### Caracteristicas dos algoritmos

 - Estabilidade: diferencia ou não os itens iguais e mantém amposição relativa da ordenaçao dos elementos

 - Complexidade: 

 - Adaptativo: Aproveita a ordenaçao existente

 - inPlace: estrutura para ordenar
    - Cabe na memoria? 
         - SIM, é um ordenação interna e ultiliza a propria estrutura. É INPLACE 
         - NÃO, é uma ordenação externa e ultiliza mais uma estrutura. NÃO É INPLACE

### ALGORITMOS ELEMENTARES
 - custos maiores e mais simples
 - lidam bem com arrays e listas encadeadas
 - analise das constantes da função custo e o tamanho da entrada:
    - f1(n) = n² 
    - f2(n) = x • n + y
 
