#include "cutils.h"


void* memory_zero(void* ptr, size_t size) {
    memset(ptr, 0, size);
}