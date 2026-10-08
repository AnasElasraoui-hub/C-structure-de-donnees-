#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;
    
    printf("Bravo Anas! Liste chainee cree avec valeur: %d\n", head->data);
    return 0;
}