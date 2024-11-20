#ifndef CUTILS_INCLUDE_H
#define CUTILS_INCLUDE_H


#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include "colors.h"


struct Linked_List_Type {
    void* data;
    struct Linked_List_Type *next;
};


typedef char* string;
typedef char byte;
typedef struct Linked_List_Type* linked_list;


/*
---------------------------------
|       STRING MANAGEMENT       |
---------------------------------
*/
bool str_isDigit(string str);
string str_uppercase(string str);
string str_lowercase(string str);
bool str_isUpper(string str);
bool str_isLower(string str);
bool str_startswith(string str, string key);
bool str_endswith(string str, string key);
bool str_isSpace(string str);
string str_strip(string str);
bool str_isIn(string str, string key);
void str_reverse(string str);
void str_bubleSort_dec(string str, size_t len);
void str_bubleSort_inc(string str, size_t len);

/*
---------------------------------
|        INT MAGANEMENT         |
---------------------------------
*/
int32_t strint(string str);
void swap(int32_t* a, int32_t* b);
void int_reverseArray(int32_t* num, size_t len);
int32_t int_reverse(int32_t num);


/*
---------------------------------
|        MATH MANAGEMENT        |
---------------------------------
*/
int32_t max(int32_t a, int32_t b);
int32_t min(int32_t a, int32_t b);
int32_t* sum(int32_t* nums, size_t len);
void int_bubleSort_dec(int32_t* nums, size_t len);
void int_bubleSort_inc(int32_t* nums, size_t len);


/*
---------------------------------
|        LOG MANAGEMENT         |
---------------------------------
*/
void log_debug(string msg);
void log_info(string msg);
void log_warning(string msg);
void log_error(string msg);
void log_critical(string msg);


/*
---------------------------------
|        FILE MANAGEMENT        |
---------------------------------
*/
size_t fileSize(FILE *f);
bool fileExist(string filename);


/*
---------------------------------
|       MEMORY MANAGEMENT       |
---------------------------------
*/
void memory_zero(void* ptr, size_t size);
void* memdup(void* ptr, size_t size);
void freeLL(linked_list ptr);
linked_list create_linked_list();
void append_node(linked_list ptr, void* data, size_t data_size);
void set_node(linked_list ptr, void* data, size_t data_size);
void delete_node(linked_list ptr, linked_list item);
void delete_last_node(linked_list ptr);
linked_list insert_node(linked_list ptr, linked_list item, void* data, size_t data_size);
linked_list search_node(linked_list ptr, void* data, size_t data_size);


#endif