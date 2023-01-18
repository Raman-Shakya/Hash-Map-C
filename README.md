# HASH-TABLE
The above repository is the implementation of **HASH TABLE (Separate Chaining)** Data Structure in C.<br>
In computing, a hash table, also known as hash map, is a data structure that implements an associative array or dictionary. It is an abstract data type that maps keys to values.[2] A hash table uses a hash function to compute an index, also called a hash code, into an array of buckets or slots, from which the desired value can be found. During lookup, the key is hashed and the resulting hash indicates where the corresponding value is stored.<br>
[click here for more info](https://en.wikipedia.org/wiki/Hash_table)

---
## Download
Download the headers *Map.h* and *node.h*, or clone this repository.
If you want the example implementation of this Data Structure, you may look inside *example.c*

---

## Functions
1. ### init_map()
    ```c
    struct Map* init_map();
    ```
    This function will create a new instance of Map object and return a pointer to that object.

1. ### add_data()
    ```c
    void add_data(struct Map* map, char* key, char* value);
    ```
    This function will assign the given **value** to the given **key** for the given **map** object.

1. ### fetch_data()
    ```c
    char * fetch_data(struct Map* map, char* key);
    ```
    This function will search for the **key** int the **map** and return the value as saved.

---