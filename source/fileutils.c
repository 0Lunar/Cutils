#include "cutils.h"


bool fileExist(string filename) {
    FILE *f = fopen(filename, "rb");

    if (f) {
        fclose(f);
        return true;
    }

    return false;
}


size_t fileSize(FILE *f) {
    if (f == NULL) return 0;

    long currentPos = ftell(f);
    
    if (currentPos == -1) return 0;

    if (fseek(f, 0, SEEK_END) != 0) return 0;

    long size = ftell(f);

    if (size == -1) return 0;

    fseek(f, currentPos, SEEK_SET);

    return (size_t)size;
}