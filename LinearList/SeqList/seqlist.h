#ifndef __SEQLIST_H__
#define __SEQLIST_H__

typedef int DataType;

#define ListSize 100

typedef struct {
	DataType list[ListSize];
	int length;
}SeqList;

/**
 * 初始化顺序表.
 * @param	L	指向顺序表的指针
 */
void init_list(SeqList *L);

int list_empty(SeqList L);

int get_elem(SeqList L, int pos, DataType *elem);

int local_elem(SeqList L, DataType elem);

int insert_elem(SeqList *L, int pos, DataType elem);

int delete_elem(SeqList *L, int pos, DataType *elem);

int list_length(SeqList L);

void clear_list(SeqList *L);

#endif


