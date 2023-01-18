#pragma once

#include <stdlib.h>
#include "node.h"

#define MAX_HASH 10

struct Map {
    struct Node data[MAX_HASH];
};

struct Map* init_map();                    // returns new clean instance of a map
int hash_fnc(char*);                       // hash_fnc
void clean_map(struct Map*);               // cleans the map// initialize
char* fetch_data(struct Map*, char*);      // fetches and returns string in the map given the key
void add_data(struct Map*, char*, char*);  // adds data


struct Map* init_map() {
    struct Map *map = malloc(sizeof(struct Map));
    clean_map(map);
    return map;
}

void clean_map(struct Map * map) {
    for (int i=0; i<MAX_HASH; i++) {
        map->data[i].next = NULL;
        map->data[i].key  = "";
        map->data[i].value = "";
    }
}

int hash_fnc(char *a) {
    int i=0, sum=0;
    while (a[i]!='\0') {
        sum += (int) a[i];
        i++;
    }
    return sum % MAX_HASH;
}


// add & fetch
void add_data(struct Map* map, char* key, char* value) {
    int index = hash_fnc(key);
    append(&map->data[index], key, value);
}

char * fetch_data(struct Map* map, char* key) {
    int index = hash_fnc(key);
    return search_stack(&map->data[index], key);
}