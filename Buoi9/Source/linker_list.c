/*
* File: Linker_List.c
* Author: MA THANH VAN
* Date: 30/03/2023
* Description: Cach tao ra mot danh sach linker_list va cach them sua xoa vi tri bat ky 
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "../Header/Linker_List.h"
    

// void create(list *l)
// {
//     l->pHead = NULL;    
//     l->pTail = NULL;    
// }

/**
 * @brief Function to create the node first of a linker_list
 *
 * @param data The first data of the list
 */
node *createNODE( uint8_t data)                        
{
    node *newNode = (node *)malloc(sizeof(node));   //cap phat vung nho cho malloc
    newNode->data = data;                              //truyen gia tri x cho data
    newNode->next = NULL;
    
}

/**
 * @brief Function to create the add node to the head
 *
 * @param list Pointer to the list struct
 * @param nodeAdd Pointer to the node struct
 */
static void AddHead(list *list, node *nodeAdd)                    
{
    if(list->pHead == NULL)                      //neu danh sach rong
    {
        list->pHead = list->pTail = nodeAdd;    // node dau va node cuoi chinh bang nodeAdd
    }
    else{
        nodeAdd->next = list->pHead;         //cho con tro node can them lien ket den node dau phead
        list->pHead = nodeAdd;               // cap nhat lai pHead chinh la nodeAdd 
    }
}


/**
 * @brief Function to create the add node to the Tail
 *
 * @param list Pointer to the list struct
 * @param nodeAdd Pointer to the node struct
 */
static void AddTail(list *list, node *nodeAdd)                       
{
     if(list->pHead == NULL)                 //neu danh sach rong
    {
        list->pHead = list->pTail = nodeAdd;    // node dau va node cuoi chinh bang p
    }
    else{
        list->pTail->next = nodeAdd;   //cho con tro pTail lien ket voi nodeAdd
        list->pTail = nodeAdd;        //cap nhat nodeAdd la node cuoi la pTail
    }
}

/**
 * @brief Function to delete the replace any node position 
 *
 * @param list       Pointer to the list struct
 * @param location position variable
 * @param data     pass in the data you want to replace
 */
static void assign(list *list, uint8_t location, uint8_t data){        ////Ham thay the mot node, bang cach thay the gia tri cu bang node moi
   
    int i = 0;                                // tao bien i de tim xac dinh vi tri
    node *Newnode  = createNODE(data);        //Tao node moi co gia tri ta dua vao
    node *tmp = list->pHead;                  // tmp = pHead de tao vong lap duyet tu dau mang den cuoi mang
    while (tmp->next != NULL || i != location )      
    {
        i++;
        node *temp = tmp->next;                 // temp chinh la node co vi tri sau node minh muon thay the
        Newnode->next = tmp->next->next;  // gan con tro next cua node moi den node tiep theo = cach cho hai lan cua bien temp 
        tmp->next = Newnode;        // node sau se tro den vi tri node moi
        free(temp);                 /// xoa node cu
        return;
       
    }
    
}


/**
 * @brief Function to clear node head 
 *
 * @param list       Pointer to the list struct
 */
static void clearHead(list *list){       
    if(list->pHead == NULL)                      // neu danh sach rong
    {
        return;
    }
    node *nodeClear = list->pHead;          // p la node se xoa
    list->pHead = list->pHead->next;       //cap nhat lai node dau la phan tu ke tiep
    free(nodeClear);                      // xoa phan tu dau 
}

/**
 * @brief Function to clear node Tail
 *
 * @param list       Pointer to the list struct
 */
static void pop_back(list *list){           // XOA CUOI DANH SACH
    if(list->pHead == NULL)         // neu danh sach rong
    {
        return;
    }

    if(list->pHead->next == NULL)///neu danh sach co mot phan tu thi ta se goi ham xoa dau
    {
        clearHead(list);
        return;
    }

    for(node *temp = list->pHead; temp != NULL; temp = temp->next)        // duyet dau den cuoi danh sach
    {
        if(temp->next == list->pTail)        // phat hien node sau node cuoi
        {
            free(list->pTail);        // Xoa node cuoi
            temp->next = NULL;         //cho node sau node cuoi bang null
        }
    }
}

/**
 * @brief Function to clear node any position
 *
 * @param list       Pointer to the list struct
 * @param index    variable the location you want to delete
 */
static void erase(list *list, int index){           
    if(list->pHead->data == index){         
        clearHead(list);            
        return;
    }
    if(list->pTail->data == index){
        pop_back(list);
        return;
    }

    node *temp = temp->next;                                                //  node truoc vi tri muon xoa
    for(node *temp_2 = list->pHead; temp_2 != NULL; temp_2 = temp_2->next)     //  duyet dau den cuoi danh sach
    {
        if(temp_2->data == index){                                       //phat hien vi tri phan tu can xoa
            
            temp->next = temp_2->next;
            free(temp_2);
            return;
        }
        temp = temp_2;
    }
    
}   

/**
 * @brief Function to get data any position 
 *
 * @param list       Pointer to the list struct
 * @param location      position you want get data
 */
static void getData(list location, uint8_t index){         // doc gia tri tai vi tri index 
    int i = 0;
   for(node *temp = location.pHead; temp != NULL; temp = temp->next)       ///cho vong lap chay tu dau den cuoi danh sach
    {
        i++;
        if(i == index){
            printf("data: %d\n", temp->data);
        }
    }
    return;
}


/**
 * @brief Function to clear all node  
 *
 * @param prt    Pointer to the node struct
 */
static void clear(node *ptr){              
    node *temp=ptr;             
    while(ptr->next!=NULL){
        temp=temp->next;
        free(ptr);
        temp=ptr;
    }
    free(ptr);
}


/**
 * @brief Function to export all list 
 *
 * @param location     Pointer to the list struct
 */
static void Export_list(list location){                    
    for(node *temp = location.pHead; temp != NULL; temp = temp->next)      ///cho vong lap chay tu dau den cuoi danh sach
    {
        printf("data: %d\n", temp->data);
        
    }
    return;
}



