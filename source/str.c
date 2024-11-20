#include "cutils.h"


bool str_isDigit(string str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') 
            return false;
    }

    return true;
}


string str_uppercase(string str) {
    string upper;
    int i;

    upper = (string)malloc(sizeof(char) * strlen(str) + 1);

    if (!upper) return NULL;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            upper[i] = 'A' + (str[i] - 'a');
    }

    upper[i] = '\0';
    return upper;
}


string str_lowercase(string str) {
    string lower;
    int i;

    lower = (string)malloc(sizeof(char) * strlen(str) + 1);

    if (!lower) return NULL;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            lower[i] = 'a' + (str[i] - 'A');
    }

    return lower;
}


bool str_isUpper(string str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 'A' || str[i] >= 'Z')
            return false;
    }
    
    return true;
}


bool str_isLower(string str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 'a' || str[i] >= 'z')
            return false;
    }
    
    return true;
}


bool str_startswith(string str, string key) {
    if (strlen(key) > strlen(str))
        return false;

    for (int i = 0; key[i] != '\0'; i++) {
        if (key[i] != str[i])
            return false;
    }

    return true;
}


bool str_endswith(string str, string key) {
    int lkey = strlen(key);
    int lstr = strlen(str);

    if (lkey > lstr)
        return false;

    
    for (;lkey != 0; lkey--, lstr--) {
        if (str[lstr] != key[lkey])
            return false;
    }

    return true;
}


bool str_isSpace(string str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            return false;
    }

    return true;
}


string str_strip(string str) {
    string stripped;
    int pointer;
    int i;

    stripped = (string)malloc(sizeof(char) * strlen(str) + 1);

    if (!stripped) return NULL;

    for (pointer = 0; str[pointer] == ' '; pointer++);
    
    for (i = 0 ; str[pointer] != '\0'; pointer++, i++) {
        stripped[i] = str[pointer];
    }

    for (i = strlen(stripped); stripped[i] == ' '; i--);

    stripped[i] = '\0';

    return stripped;
}


bool str_isIn(string str, string key) {
    if (strlen(key) > strlen(str))
        return false;
    
    for (int pointer = 0; str[pointer] != '\0'; pointer++) {
        if (str[pointer] == key[0]) {
            int i;

            for (i = 0; i < strlen(key) && str[pointer] != '\0'; i++, pointer++)

            if (i == strlen(key) - 1)
                return true;
        }
    }
    
    return false;
}


void str_reverse(string str) {
    if (str == NULL) return;

    char tmp;
    size_t len = strlen(str);

    if (len < 2) return;

    len--;

    for (size_t p = 0; p < len; p++, len--) {
        tmp = str[p];
        str[p] = str[len];
        str[len] = tmp;
    }
}


void str_bubleSort_dec(string str, size_t len) {
    if (!str) return;
    if (len < 2) return;

    bool changed = true;
    uint32_t i = 0;
    uint32_t pos = 0;

    while (changed) {
        changed = false;

        for (i = pos; i < len-1; i++) {
            if (str[i] > str[i+1]) {
                char tmp = str[i];
                str[i] = str[i+1];
                str[i+1] = tmp;
                changed = true;
            }
        }

        pos++;
    }
}


void str_bubleSort_inc(string str, size_t len) {
    if (!str) return;
    if (len < 2) return;

    bool changed = true;
    uint32_t i = 0;
    uint32_t pos = 0;

    while (changed) {
        changed = false;

        for (i = pos; i < len-1; i++) {
            if (str[i] < str[i+1]) {
                char tmp = str[i];
                str[i] = str[i+1];
                str[i+1] = tmp;
                changed = true;
            }
        }

        pos++;
    }
}