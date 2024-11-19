#ifndef CUTILS_INCLUDE_H
#define CUTILS_INCLUDE_H


#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "colors.h"


struct Linked_List_Type {
    void* val;
    struct Linked_List_Type *next;
};


typedef char* string;
typedef char byte;
typedef struct Linked_List_Type* linked_list;


//strings
bool str_isDigit(string str);
string str_uppercase(string str);
string str_lowercase(string str);
bool str_isUpper(string str);
bool str_isLower(string str);
bool str_startswith(string str, string key);
bool str_endswith(string str, string key);
bool str_isSpace(string str);
string str_strip(string str);
bool str_strin(string str, string key);
void str_reverse(string str);


//int
int32_t strint(string str);
void swap(int32_t* a, int32_t* b);
void int_reverseArray(int32_t* num, size_t len);
int32_t int_reverse(int32_t num);


//math
int32_t max(int32_t a, int32_t b);
int32_t min(int32_t a, int32_t b);
int32_t* sum(int32_t* nums, size_t len);
void int_bubleSort_dec(int32_t* nums, size_t len);
void int_bubleSort_inc(int32_t* nums, size_t len);


//log
void log_debug(string msg);
void log_info(string msg);
void log_warning(string msg);
void log_error(string msg);
void log_critical(string msg);


//file
size_t fileSize(FILE *f);
bool fileExist(string filename);


//memory
void* memory_zero(void* ptr, size_t size);


#endif