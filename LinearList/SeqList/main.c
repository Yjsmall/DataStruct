#include "seqlist.c"
int main(int argc, char **arg) {
    SeqList L;
    init_list(&L);
    insert_elem(&L, 1, 0);
    printf("0元素的位置是%d\n", local_elem(L, 0));
    return 0;
}
