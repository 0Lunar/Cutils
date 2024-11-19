#include "cutils.h"


int32_t max(int32_t a, int32_t b) {
    return (a > b) ? a : b;
}


int32_t min(int32_t a, int32_t b) {
    return (a < b) ? a : b;
}


int32_t* sum(int32_t* nums, size_t len) {
    if (!nums) return NULL;
    if (len < 2) return NULL;

    int* ans = (int32_t *)malloc(sizeof(int32_t) * len);

    ans[0] = nums[0];

    for (int p = 1; p < len; p++) {
        ans[p] = nums[p] + ans[p-1];
    }

    return ans;
}


void int_bubleSort_dec(int32_t* nums, size_t len) {
    if (!nums) return;
    if (len < 2) return;

    bool changed = true;
    uint32_t i = 0;
    uint32_t pos = 0;

    while (changed) {
        changed = false;

        for (i = pos; i < len-1; i++) {
            if (nums[i] > nums[i+1]) {
                int32_t tmp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = tmp;
                changed = true;
            }
        }

        pos++;
    }
}


void int_bubleSort_inc(int32_t* nums, size_t len) {
    if (!nums) return;
    if (len < 2) return;

    bool changed = true;
    uint32_t i = 0;
    uint32_t pos = 0;

    while (changed) {
        changed = false;

        for (i = pos; i < len-1; i++) {
            if (nums[i] < nums[i+1]) {
                int32_t tmp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = tmp;
                changed = true;
            }
        }

        pos++;
    }
}