Last login: Tue Sep 12 23:22:29 on ttys002
carlosmac@Carloss-MacBook-Pro ~ % cd  42-EXAM 
carlosmac@Carloss-MacBook-Pro 42-EXAM % ls
CONTRIBUTING.md	Makefile	rendu		success
LICENSE		README.md	subjects
carlosmac@Carloss-MacBook-Pro 42-EXAM % man ascii
carlosmac@Carloss-MacBook-Pro 42-EXAM % cd rendu 
carlosmac@Carloss-MacBook-Pro rendu % cd rev_wstr 
carlosmac@Carloss-MacBook-Pro rev_wstr % cc rev_wstr.c 
carlosmac@Carloss-MacBook-Pro rev_wstr % ./a.out oi td bom

carlosmac@Carloss-MacBook-Pro rev_wstr % ./a.out "oi td bom"
bom td oi
carlosmac@Carloss-MacBook-Pro rev_wstr % ./a.out "oi td bom "
 bom td oi
carlosmac@Carloss-MacBook-Pro rev_wstr % ./a.out " oi td bom "
 bom td oi 
carlosmac@Carloss-MacBook-Pro rev_wstr % ./a.out " oi td bom " & cat -e
[1] 2880
 bom td oi 
[1]  + done       ./a.out " oi td bom "

$
^[[A^[[D^[[D^[[D^[[D^[[D^C
carlosmac@Carloss-MacBook-Pro rev_wstr % ./a.out " oi td bom " && cat -e
 bom td oi 

$
^[[A^C
carlosmac@Carloss-MacBook-Pro rev_wstr % ./a.out " oi td bom "          
 bo t o
carlosmac@Carloss-MacBook-Pro rev_wstr % cd ../../
carlosmac@Carloss-MacBook-Pro 42-EXAM % cat subjects/subject.en.txt 
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.

Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
carlosmac@Carloss-MacBook-Pro 42-EXAM % 
carlosmac@Carloss-MacBook-Pro 42-EXAM % cat traces/0-0_searchandreplace.trace 
----------------8<-------------[ START TEST 
        💻 TEST
./a.out AkjhZ zLKIJz , 23y 
        🔎 YOUR OUTPUT:
        🗝 EXPECTED OUTPUT:
$
----------------8<------------- END TEST ]
carlosmac@Carloss-MacBook-Pro 42-EXAM % cat traces/0-1_searchandreplace.trace 
----------------8<-------------[ START TEST 
        💻 TEST
./a.out Papache est un sabre        🔎 YOUR OUTPUT:
$
        🗝 EXPECTED OUTPUT:
Popoche est un sobre$
----------------8<------------- END TEST ]
carlosmac@Carloss-MacBook-Pro 42-EXAM % cd rendu 
carlosmac@Carloss-MacBook-Pro rendu % ls
carlosmac@Carloss-MacBook-Pro rendu % mkdir ft_putstr 
carlosmac@Carloss-MacBook-Pro rendu % cd ft_putstr 
carlosmac@Carloss-MacBook-Pro ft_putstr % vim ft_putstr.c

#include <unistd.h>
void ft_putstr(char *str){
int i =0;
while(str){
        write(1,str,1);
        i++;
}
}
int main(){
char *c = "fgdhbjsnamk";
ft_putstr(c);
}
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
~                                                                               
"ft_putstr.c" 12L, 149B written
  [Restored 16 Sep 2023 17:44:16]
Last login: Sat Sep 16 17:44:14 on ttys001
Restored session: Sat Sep 16 17:44:04 -03 2023
carlosmac@Carloss-MacBook-Pro ft_putstr % vim ft_putstr.c
carlosmac@Carloss-MacBook-Pro ft_putstr % cd ..
carlosmac@Carloss-MacBook-Pro rendu % mkdir ft_strdup
carlosmac@Carloss-MacBook-Pro rendu % cd ft_strdup 
carlosmac@Carloss-MacBook-Pro ft_strdup % vim ft_strdup.c
carlosmac@Carloss-MacBook-Pro ft_strdup % cd ../parasum 
carlosmac@Carloss-MacBook-Pro parasum % vim parasum.c
carlosmac@Carloss-MacBook-Pro parasum % cd ..
carlosmac@Carloss-MacBook-Pro rendu % cd ..
carlosmac@Carloss-MacBook-Pro 42-EXAM % cat subjects/subject.en.txt 
Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
carlosmac@Carloss-MacBook-Pro 42-EXAM % man itoa
No manual entry for itoa
carlosmac@Carloss-MacBook-Pro 42-EXAM % cd rendu 
carlosmac@Carloss-MacBook-Pro rendu % ls
ft_itoa		ft_putstr	ft_strdup	paramsum
carlosmac@Carloss-MacBook-Pro rendu % cd ft_itoa 
carlosmac@Carloss-MacBook-Pro ft_itoa % ls
carlosmac@Carloss-MacBook-Pro ft_itoa % vim ft_itoa.c
carlosmac@Carloss-MacBook-Pro ft_itoa % vim ft_itoa.c
carlosmac@Carloss-MacBook-Pro ft_itoa % cd ../sort_list 
carlosmac@Carloss-MacBook-Pro sort_list % cc -g -o sort sort.c
clang: error: no such file or directory: 'sort.c'
clang: error: no input files
carlosmac@Carloss-MacBook-Pro sort_list % cc -g -o sort sort_list.c 
carlosmac@Carloss-MacBook-Pro sort_list % sort > output.txt 

^C%                                                                                            carlosmac@Carloss-MacBook-Pro sort_list % ./sort > output.txt
carlosmac@Carloss-MacBook-Pro sort_list % cat output.txt 
1 2 3 
carlosmac@Carloss-MacBook-Pro sort_list % cd ..
carlosmac@Carloss-MacBook-Pro rendu % vim node.js
carlosmac@Carloss-MacBook-Pro rendu % vim clang.v
carlosmac@Carloss-MacBook-Pro rendu % gcc clang.v 
ld: warning: ignoring file clang.v, building for macOS-x86_64 but attempting to link with file built for unknown-unsupported file format ( 0x23 0x69 0x6E 0x63 0x6C 0x75 0x64 0x65 0x20 0x3C 0x73 0x74 0x64 0x69 0x6F 0x2E )
Undefined symbols for architecture x86_64:
  "_main", referenced from:
     implicit entry/start for main executable
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
carlosmac@Carloss-MacBook-Pro rendu % vim clang.v 
carlosmac@Carloss-MacBook-Pro rendu % mv clang.v clang.c 
carlosmac@Carloss-MacBook-Pro rendu % gcc clang.v       
clang: error: no such file or directory: 'clang.v'
clang: error: no input files
carlosmac@Carloss-MacBook-Pro rendu % gcc clang.c 
carlosmac@Carloss-MacBook-Pro rendu % ./a.out 

Fatorial de 20 é 2432902008176640000
carlosmac@Carloss-MacBook-Pro rendu % 
carlosmac@Carloss-MacBook-Pro rendu % node node.js 
Fatorial de 20 é 2432902008176640000
Tempo de execução: 0ms
carlosmac@Carloss-MacBook-Pro rendu % vim node.js 
carlosmac@Carloss-MacBook-Pro rendu % vim clang.c 
carlosmac@Carloss-MacBook-Pro rendu % gcc clang.c 
clang.c:4:1: error: unknown type name 'uint64_t'
uint64_t fibonacci(uint64_t n) {
^
clang.c:4:20: error: unknown type name 'uint64_t'
uint64_t fibonacci(uint64_t n) {
                   ^
clang.c:10:13: error: expected ';' after expression
    uint64_t num = 40;
            ^
            ;
clang.c:10:5: error: use of undeclared identifier 'uint64_t'
    uint64_t num = 40;
    ^
clang.c:10:14: error: use of undeclared identifier 'num'
    uint64_t num = 40;
             ^
clang.c:16:13: error: expected ';' after expression
    uint64_t resultado = fibonacci(num);
            ^
            ;
clang.c:16:5: error: use of undeclared identifier 'uint64_t'
    uint64_t resultado = fibonacci(num);
    ^
clang.c:16:14: error: use of undeclared identifier 'resultado'
    uint64_t resultado = fibonacci(num);
             ^
clang.c:16:36: error: use of undeclared identifier 'num'
    uint64_t resultado = fibonacci(num);
                                   ^
clang.c:22:40: error: use of undeclared identifier 'num'
    printf("Fibonacci(%llu) = %llu\n", num, resultado);
                                       ^
clang.c:22:45: error: use of undeclared identifier 'resultado'
    printf("Fibonacci(%llu) = %llu\n", num, resultado);
                                            ^
11 errors generated.
carlosmac@Carloss-MacBook-Pro rendu % vim clang.c
carlosmac@Carloss-MacBook-Pro rendu % vim clang.c 
carlosmac@Carloss-MacBook-Pro rendu % vim clang.c
carlosmac@Carloss-MacBook-Pro rendu % vim node.js 
carlosmac@Carloss-MacBook-Pro rendu % gcc clang.c 
clang.c:4:1: error: unknown type name 'uint64_t'
uint64_t fibonacci(uint64_t n) {
^
clang.c:4:20: error: unknown type name 'uint64_t'
uint64_t fibonacci(uint64_t n) {
                   ^
clang.c:10:13: error: expected ';' after expression
    uint64_t num = 35;
            ^
            ;
clang.c:10:5: error: use of undeclared identifier 'uint64_t'
    uint64_t num = 35;
    ^
clang.c:10:14: error: use of undeclared identifier 'num'
    uint64_t num = 35;
             ^
clang.c:16:13: error: expected ';' after expression
    uint64_t resultado = fibonacci(num);
            ^
            ;
clang.c:16:5: error: use of undeclared identifier 'uint64_t'
    uint64_t resultado = fibonacci(num);
    ^
clang.c:16:14: error: use of undeclared identifier 'resultado'
    uint64_t resultado = fibonacci(num);
             ^
clang.c:16:36: error: use of undeclared identifier 'num'
    uint64_t resultado = fibonacci(num);
                                   ^
clang.c:22:40: error: use of undeclared identifier 'num'
    printf("Fibonacci(%llu) = %llu\n", num, resultado);
                                       ^
clang.c:22:45: error: use of undeclared identifier 'resultado'
    printf("Fibonacci(%llu) = %llu\n", num, resultado);
                                            ^
11 errors generated.
carlosmac@Carloss-MacBook-Pro rendu % vim node.js
carlosmac@Carloss-MacBook-Pro rendu % gcc clang.c
clang.c:4:1: error: unknown type name 'uint64_t'
uint64_t fibonacci(uint64_t n) {
^
clang.c:4:20: error: unknown type name 'uint64_t'
uint64_t fibonacci(uint64_t n) {
                   ^
clang.c:10:13: error: expected ';' after expression
    uint64_t num = 35;
            ^
            ;
clang.c:10:5: error: use of undeclared identifier 'uint64_t'
    uint64_t num = 35;
    ^
clang.c:10:14: error: use of undeclared identifier 'num'
    uint64_t num = 35;
             ^
clang.c:16:13: error: expected ';' after expression
    uint64_t resultado = fibonacci(num);
            ^
            ;
clang.c:16:5: error: use of undeclared identifier 'uint64_t'
    uint64_t resultado = fibonacci(num);
    ^
clang.c:16:14: error: use of undeclared identifier 'resultado'
    uint64_t resultado = fibonacci(num);
             ^
clang.c:16:36: error: use of undeclared identifier 'num'
    uint64_t resultado = fibonacci(num);
                                   ^
clang.c:22:40: error: use of undeclared identifier 'num'
    printf("Fibonacci(%llu) = %llu\n", num, resultado);
                                       ^
clang.c:22:45: error: use of undeclared identifier 'resultado'
    printf("Fibonacci(%llu) = %llu\n", num, resultado);
                                            ^
11 errors generated.
carlosmac@Carloss-MacBook-Pro rendu % vim clang.c
carlosmac@Carloss-MacBook-Pro rendu % vim node.js 
carlosmac@Carloss-MacBook-Pro rendu % vim clang.c
carlosmac@Carloss-MacBook-Pro rendu % gcc clang.c 
carlosmac@Carloss-MacBook-Pro rendu % ./a.out 
Fibonacci(35) = 9227465
Tempo de execução: 0.068082 segundos
carlosmac@Carloss-MacBook-Pro rendu % node node.js 
Fibonacci(35) = 9227465
Tempo de execução: 159ms
carlosmac@Carloss-MacBook-Pro rendu % node node.js 
Fibonacci(35) = 9227465
Tempo de execução: 145ms
carlosmac@Carloss-MacBook-Pro rendu % vim node.js 
carlosmac@Carloss-MacBook-Pro rendu % node node.js 
Fibonacci(35) = 9227465
Tempo de execução: 0.138 segundos
carlosmac@Carloss-MacBook-Pro rendu % ./a.out 
Fibonacci(35) = 9227465
Tempo de execução: 0.067520 segundos
carlosmac@Carloss-MacBook-Pro rendu % ./a.out
Fibonacci(35) = 9227465
Tempo de execução: 0.067923 segundos
carlosmac@Carloss-MacBook-Pro rendu % node node.js
Fibonacci(35) = 9227465
Tempo de execução: 0.138 segundos
carlosmac@Carloss-MacBook-Pro rendu % vim javascript.js
carlosmac@Carloss-MacBook-Pro rendu % vim c_lang.c
carlosmac@Carloss-MacBook-Pro rendu % gcc c_lang.c 
carlosmac@Carloss-MacBook-Pro rendu % ./a.out 
Fibonacci(1476) = 13341904997268534576
Execution time: 0.000010 seconds
carlosmac@Carloss-MacBook-Pro rendu % node javascript.js 
Fibonacci(1476) = 130698922376339931803631155380271983098392443907412640726006659460192793070479231740288681087777017721095463154979012276234322246936939647185366706368489362660844147449941348462800922755818969634743348982916424954062744135969865615407276492410653721774590669544801490837649161732095972658064630033793347171632
Execution time: 0.001 seconds
carlosmac@Carloss-MacBook-Pro rendu % gcc c_lang.c      
carlosmac@Carloss-MacBook-Pro rendu % vim c_lang.c      
carlosmac@Carloss-MacBook-Pro rendu % gcc c_lang.c -lgmp -o outputname

carlosmac@Carloss-MacBook-Pro rendu % ./outputname 
Fibonacci(1476) = 130698922376339931803631155380271983098392443907412640726006659460192793070479231740288681087777017721095463154979012276234322246936939647185366706368489362660844147449941348462800922755818969634743348982916424954062744135969865615407276492410653721774590669544801490837649161732095972658064630033793347171632
Execution time: 0.000086 seconds
carlosmac@Carloss-MacBook-Pro rendu % node javascript.js 
Fibonacci(1476) = 130698922376339931803631155380271983098392443907412640726006659460192793070479231740288681087777017721095463154979012276234322246936939647185366706368489362660844147449941348462800922755818969634743348982916424954062744135969865615407276492410653721774590669544801490837649161732095972658064630033793347171632
Execution time: 0 seconds
carlosmac@Carloss-MacBook-Pro rendu % node javascript.js
Fibonacci(1476) = 130698922376339931803631155380271983098392443907412640726006659460192793070479231740288681087777017721095463154979012276234322246936939647185366706368489362660844147449941348462800922755818969634743348982916424954062744135969865615407276492410653721774590669544801490837649161732095972658064630033793347171632
Execution time: 0 seconds
carlosmac@Carloss-MacBook-Pro rendu % vim javascript.js 
carlosmac@Carloss-MacBook-Pro rendu % node javascript.js 
Fibonacci(1476) = 130698922376339931803631155380271983098392443907412640726006659460192793070479231740288681087777017721095463154979012276234322246936939647185366706368489362660844147449941348462800922755818969634743348982916424954062744135969865615407276492410653721774590669544801490837649161732095972658064630033793347171632
Execution time: 0.000000 seconds
carlosmac@Carloss-MacBook-Pro rendu % vim lists.c

#include <stdio.h>
#include <stdlib.h>

// Estrutura para um nó da lista
typedef struct Node {
    int data;           // Valor armazenado no nó
    struct Node* next;  // Ponteiro para o próximo nó na lista
} Node;

// Função para criar um novo nó com um valor específico
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node)); // Alocar memória para o novo nó
    newNode->data = value;                       // Atribuir o valor ao nó
    newNode->next = NULL;                        // Inicialmente, o próximo nó é NULL
    return newNode;
}

void sortList(Node** head) {
    if (*head == NULL || (*head)->next == NULL) {
        return;  // Se a lista estiver vazia ou tiver apenas um elemento, retorne
    }

    int swapped = 1;  // Inicialmente, assume que houve trocas
    Node* ptr = NULL;

    while (swapped) { // Continue enquanto houver trocas
        swapped = 0;  // Reinicializa a flag de troca para false
        ptr = *head;  // Inicializa o ponteiro ptr no início da lista

        while (ptr->next != NULL) {
            if (ptr->data > ptr->next->data) {
                int temp = ptr->data;
                ptr->data = ptr->next->data;
                ptr->next->data = temp;
                swapped = 1;  // Indica que houve uma troca nesta iteração
            }

