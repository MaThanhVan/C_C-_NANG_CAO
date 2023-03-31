#ifndef __LINKER_H
#define __LINKER_H
#include <stdio.h>

typedef struct node    /// khai bao ra mot node
{
    uint8_t data;       //du lieu data chua trong tung node
    struct node *next;   /// con tro next dung de lien ket giua cac data voi nhau 
}node;

typedef struct list
{
    node *pHead;        // node quan ly dau danh sach
    node *pTail;       /// node quan ly cuoi danh sach
}list;

node *createNODE( uint8_t data)

void AddHead(list *list, node *nodeAdd) 

void AddTail(list *list, node *nodeAdd)  

void assign(list *list, uint8_t location, uint8_t data)        ////Ham thay the mot node, bang cach thay the gia tri cu bang node moi

void clearHead(list *list)      

void pop_back(list *list)

void erase(list *list, int index)

void getData(list location, uint8_t index)

void Export_list(list location)

void clear(node *ptr)

#endif