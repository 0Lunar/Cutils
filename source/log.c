#include "cutils.h"


void log_debug(string msg) {
    printf("[DEBUG] %s\n", msg);
}


void log_info(string msg) {
    printf("[INFO] %s\n", msg);
}


void log_warning(string msg) {
    printf("[WARNING] %s\n", msg);
}


void log_error(string msg) {
    string error = malloc(8 + strlen(msg) + 1);

    if (!error) return;

    strcpy(error, "[ERROR] ");
    strcat(error, msg);
    
    perror(error);

    free(error);
}


void log_critical(string msg) {
    string error = malloc(11 + strlen(msg) + 1);

    if (!error) return;

    strcpy(error, "[CRITICAL] ");
    strcat(error, msg);
    
    perror(error);

    free(error);
}