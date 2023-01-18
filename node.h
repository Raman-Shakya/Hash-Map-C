#pragma once

#include <stdio.h>
#include <stdlib.h>


struct Node {
    char * key;
    char * value;
    struct Node * next;
};

struct Node* append(struct Node*, char*, char*); // stack, key, value
int compare_string(char*, char*);                // compares 2 string if equal or not
char* search_stack(struct Node*, char*);         // searches through the Node/LinkedList/Stack


struct Node* append(struct Node *stack, char * key, char * value) {
    struct Node *new_ = malloc(sizeof(struct Node));
    new_->key   = stack->key;
    new_->value = stack->value;
    new_->next = stack->next;
    stack->next = new_;
    stack->key = key;
    stack->value = value;
    return new_;
}



int compare_string(char* a, char* b) {
    while (1) {
        if (*a!=*b) return 0;
        if (*a=='\0' && *b=='\0') return 1;
        if (*a=='\0' || *b=='\0') return 0;
        a++;
        b++;
    }
}


char* search_stack(struct Node* node, char * key) {
    if (compare_string(node->key, key)) return node->value;
    if (node->next==NULL) return "";
    return search_stack(node->next, key);
}
