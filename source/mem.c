#include "cutils.h"


void memory_zero(void* ptr, size_t size) {
    if (!ptr) return;
    if (size < 1) return;
    
    memset(ptr, 0, size);
}


void* memdup(void* ptr, size_t size) {
    if (!ptr) return NULL;
    if (size < 1) return NULL;

    void* ans = malloc(size);

    if (!ans) return NULL;

    memcpy(ans, ptr, size);
}


/*
---------------------------------
| LINKED LIST MEMORY MANAGEMENT |
---------------------------------
*/


void freeLL(linked_list ptr) {
    linked_list tmp;

    while (ptr->next != NULL) {
        free(ptr->data);
        tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
}


linked_list create_linked_list() {
    linked_list new_list;

    new_list = malloc(sizeof(struct Linked_List_Type));
    new_list->data = NULL;

    return new_list;
}



void append_node(linked_list ptr, void* data, size_t data_size) {
    if (!ptr || !data) return;
    if (data_size < 1) return;

    while (ptr->next != NULL)
        ptr = ptr->next;

    ptr->next = malloc(sizeof(struct Linked_List_Type));

    if (!ptr->next) return;

    ptr->next->next = NULL;

    ptr->next->data = malloc(data_size);

    if (!ptr->next->data) {
        free(ptr->next);
        return;
    }

    memcpy(ptr->next->data, data, data_size);
}


void set_node(linked_list ptr, void* data, size_t data_size) {
    if (!ptr || !data) return;
    if (data_size < 1) return;
    
    ptr->data = malloc(data_size);

    if (!data) {
        free(ptr);
        return;
    }

    memcpy(ptr->data, data, data_size);
}


void delete_node(linked_list ptr, linked_list item) {
    if (!ptr || !item) return;

    while (ptr->next != NULL && ptr->next != item) 
        ptr = ptr->next;

    if (!ptr->next) return;

    linked_list to_remove;

    to_remove = ptr->next;
    ptr->next = ptr->next->next;
    free(to_remove->data);
    free(to_remove);
}


void delete_last_node(linked_list ptr) {
    if (!ptr) return;

    if (ptr->next == NULL) {
        free(ptr->data);
        free(ptr);
        return;
    }

    while (ptr->next->next != NULL)
        ptr = ptr->next;

    free(ptr->next->data);
    free(ptr->next);
    ptr->next = NULL;

}


linked_list insert_node(linked_list ptr, linked_list item, void* data, size_t data_size) {
    if (!ptr || !item || !data) return NULL;
    if (data_size < 1) return NULL;

    linked_list new_item;

    new_item = malloc(sizeof(struct Linked_List_Type));
    
    if (!item) return NULL;

    new_item->next = NULL;
    new_item->data = malloc(data_size);
    
    if (!new_item->data) {
        free(new_item);
        return NULL;
    }

    memcpy(new_item->data, data, data_size);

    if (ptr == item) {
        new_item->next = ptr;
        return new_item;
    }

    while (ptr->next != item && ptr->next != NULL)
        ptr = ptr->next;

    if (!ptr->next) return NULL;

    new_item->next = ptr->next;
    ptr->next = new_item;
}


linked_list search_node(linked_list ptr, void* data, size_t data_size) {
    if (!ptr || !data) return NULL;
    if (data_size < 1) return NULL;

    while (ptr != NULL && memcmp(ptr->data, data, data_size) != 0)
        ptr = ptr->next;

    if (!memcmp(ptr->data, data, data_size)) {
        return ptr;
    }

    return NULL;
}