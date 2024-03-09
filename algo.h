//
// Created by NBAH on 09.07.2023.
//

///////////////////////////////////////////////////////////////////////////////
////                         Algorithms-1                                  ////
///////////////////////////////////////////////////////////////////////////////

#ifdef check
    #include "alloc.h"
#else
    #include "stdlib.h"
#endif

#pragma once

/* static array */
typedef struct {
    int *head;
    unsigned int size;
} stat_arr_t;

/* dynamic array */
typedef struct {
    stat_arr_t *array;
    unsigned int size;
    unsigned int capacity;
} dyn_arr_t;

/* doubly linked list's node */
typedef struct Node {
    int value;
    struct Node *prev;
    struct Node *next;
} node_t;

/* singly linked list's node */
typedef struct SingleNode {
    int value;
    struct SingleNode *next;
} singly_node_t;

/* doubly linked list */
typedef struct {
    node_t *head;
    node_t *tail;
    unsigned int size;
} list_t;

/* singly linked list */
typedef struct {
    singly_node_t *head;
    unsigned int size;
} singly_linked_list_t;

/* stack based on list */
typedef struct {
    singly_linked_list_t *list;
} list_stack_t;

/* stack based on dynamic array */
typedef struct {
    dyn_arr_t *array;
} array_stack_t;

/* circular queue */
typedef struct {
    int head;
    int tail;
    stat_arr_t *array;
} circular_queue_t;

/* queue based on doubly linked list */
typedef struct {
    list_t *list;
} list_queue_t;

/* queue based on stack */
typedef struct {
    array_stack_t *in;
    list_stack_t *out;
} stack_queue_t;

///////////////////////////////////////////////////////////////////////////////
////                         Algorithms-2                                  ////
///////////////////////////////////////////////////////////////////////////////

int bin_search (int *sorted_array, unsigned int size, int n);

typedef struct BinTreeSingleNode {
    char key;
    struct BinTreeSingleNode *left;
    struct BinTreeSingleNode *right;
} bin_node_single_t;

typedef struct {
    bin_node_single_t *root;
    unsigned int size;
} bin_search_tree_t;

typedef struct AVLNode {
    char key;
    unsigned int height;
    struct AVLNode *left;
    struct AVLNode *right;
} avl_node_t;

typedef struct {
    avl_node_t *root;
    unsigned int size;
} avl_tree_t;

typedef struct BinTreePairNode {
    char key;
    int val;
    struct BinTreePairNode *left;
    struct BinTreePairNode *right;
} bin_node_pair_t;

typedef struct {
    bin_node_pair_t *root;
    unsigned int size;
} tree_associative_array_t;

typedef struct {
    int *first;
    int *second;
} pair_t;

typedef struct {
    char first;
    char second;
} char_pair_t;
