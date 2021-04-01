#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "seqlist.h"

void init_list(SeqList *L) {
    L->length = 0;
}

int list_empty(SeqList L) {
    if (L.length == 0) {
        printf("List empty\n");
        return 1;
    } 
    else {
        printf("List is not empty\n");
        return 0;
    }
}

int get_elem(SeqList L, int pos, DataType *elem) {
    if (pos < 1 || pos > ListSize) {
        return -1;
    }
    *elem = L.list[pos-1];

    return 1;
}

int local_elem(SeqList L, DataType elem) {
    int i;
    for (i = 0; i < L.length; i++) {
        if (L.list[i] == elem) {
            return i+1;
        }
    }

    return 0;
}

int insert_elem(SeqList *L, int pos, DataType elem) {
    if (pos < 1 || pos > L->length+1) {
        printf("插入位置非法\n");
        return -1;
    }
    else if (L->length >= ListSize) {
        printf("顺序表已满!\n");
        return 0;
    }
    
    //i是位置(从1开始)不是索引(从0开始).
    int i;
    for (i = L->length; i >= pos; i--) {
        L->list[i] = L->list[i-1];
    }
    L->list[pos-1] = elem;
    L->length = L->length + 1;

    return 1;
}

int delete_elem(SeqList *L, int pos,DataType *elem) {
    if (list_empty(*L)) {
        printf("顺序表为空\n");
        return 0;
    }
    else if (pos < 1 || pos > L->length) {
        printf("删除位置非法!\n");
        return -1;
    }
    *elem = L->list[pos-1];
    int i;
    for (i = pos; pos <= L->length; i++) {
        L->list[i-1] = L->list[i];
    }
    L->length--;
    return 1;
}

int list_length(SeqList L) {
    return L.length;
}

void clear_list(SeqList *L) {
    L->length = 0;
}


