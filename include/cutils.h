#ifndef CUTILS_INCLUDE_H
#define CUTILS_INCLUDE_H


#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "colors.h"


typedef char* string;
typedef char byte;


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
int32_t strint(string str);
void str_reverse(string str);
bool fileExist(string filename);
int32_t max(int32_t a, int32_t b);
int32_t min(int32_t a, int32_t b);
void swap(int32_t* a, int32_t* b);
void int_reverse(int32_t* num, size_t len);
void log_debug(string msg);
void log_info(string msg);
void log_warning(string msg);
void log_error(string msg);
void log_critical(string msg);
size_t fileSize(FILE *f);


#endif