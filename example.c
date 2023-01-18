#include <stdio.h>
#include "Map.h"
 
int main() {
    struct Map *map = init_map();   // this creates a new instance of the map

    // adding (key, value) to the map using add_data function
    add_data(map, "hello"      , "world");
    add_data(map, "abc"        , "xyz");
    add_data(map, "numbers"    , "0123456789");
    add_data(map, "alphabets"  , "abcdefghijklmnopqrstuvwxyz");
    add_data(map, "UCASE"      , "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    add_data(map, "ohayo"      , "good morning");

    // test keys
    char* temp = "hello", *temp2 = "numbers", *temp3 = "alphabets";
    // printing
    printf("\t%s\t: %s\n", temp , fetch_data(map, temp));
    printf("\t%s\t: %s\n", temp2, fetch_data(map, temp2));
    printf("\t%s\t: %s\n", temp3, fetch_data(map, temp3));


    return 0;
}