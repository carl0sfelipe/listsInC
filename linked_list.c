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

