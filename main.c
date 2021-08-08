// Q_72
/*
创建一个链表
 */

#include <stdio.h>
#include <stdlib.h>

#define OVERFLOW  -1
typedef int ElemType;
typedef struct LNode { // 单向链表结构体定义
    ElemType elem;
    struct LNode *next;
} LNode, *LinkList;

// Function prototypes

// 功能：创建链表头结点
// 返回值：头结点地址
LinkList CreatLinkList(void);

// param pos：在第pos个节点后插入
void InsertLinkList(LinkList h, ElemType new_elem, int pos);

void PrintLinkList(LinkList h);

int main(void) 
{
    LinkList head = NULL;
    int node_num = 0;
    int i;
    int elem;
    head = CreatLinkList();
    printf("Please enter number of Node:\n");
    scanf("%d", &node_num);
    for (i=0; i<node_num; i++) {
        scanf("%d", &elem);
        if (i == 0) {
            head->elem = elem;
            continue;
        }
        InsertLinkList(head, elem, i);
    }
    PrintLinkList(head);

    return 0;
}

LinkList CreatLinkList(void)
{
    LinkList p = (LinkList )malloc(sizeof(LNode));
    if (p == NULL) {
        printf("Memory allocate fault\n");
        return NULL;
    } 
    p->next = NULL;
    return p;
}

void PrintLinkList(LinkList h)
{
    if (h == NULL) {
        printf("The LinkList is empty!\n");
        return;
    }
    while (h != NULL) {
        printf("%-5d", h->elem);
        h = h->next;
    }
    printf("\n");
    return;
}

void InsertLinkList(LinkList h, ElemType new_elem, int pos)
{
    int i;
    LinkList p = (LinkList )malloc(sizeof(LNode));
    p->elem = new_elem;
    p->next = NULL;
    for (i=0; i<pos-1; i++) {
        h = h->next;
    }
    p->next = h->next;
    h->next = p;
    return;

}