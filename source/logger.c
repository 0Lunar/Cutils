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
    printf("[ERROR] %s\n", msg);
}


void log_critical(string msg) {
    printf("[CRITICAL] %s\n", msg);
}