#include "cutils.h"


int32_t strint(string str) {
    int32_t ans;
    int8_t sign;
    uint8_t pointer;


    if (str[0] == '-') {
        sign = -1;
        pointer = 1;
    }
    else if (str[0] == '+') {
        sign = 1;
        pointer = 1;
    }
    else {
        sign = 1;
        pointer = 0;
    }

    for (ans = 0; str[pointer] != '\0' && (str[pointer] >= '0' && str[pointer] <= '9'); pointer++) {
        ans += str[pointer] - '0';

        if (str[pointer + 1] >= '0' && str[pointer + 1] <= '9')
            ans *= 10;
    }

    return ans * sign;
}


void swap(int32_t* a, int32_t* b) {
    int32_t tmp = *a;
    *a = *b;
    *b = tmp;
}


void int_reverse(int32_t* num, size_t len) {
    if (num == NULL) return;

    int32_t tmp;

    if (len < 2) return;

    len--;

    for (size_t p = 0; p < len; p++, len--) {
        tmp = num[p];
        num[p] =  num[len];
        num[len] = tmp;
    }
}