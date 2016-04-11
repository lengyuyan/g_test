
/*
sig_list.c

*/

#include "sig_list.h"

void list_init(List *list, void (*destroy)(void *data))
{
    list->size = 0;
    list->destroy =destroy;
    list->match = NULL;
    list->head = NULL;
    list->tail = NULL;
    return;
    
}

int list_ins_next(List * list, ListElmt * element, const void * data)
{
    ListElmt *new_element = NULL;
    new_element = (ListElmt*)malloc(sizeof(ListElmt));
    if (new_element == NULL)
    {
        return -1;
    }

    new_element->data = data;

    if (element == NULL) /* insert from list head */
    {
        if (list_size(list) == 0)
        {
            list->tail = new_element;

        }
        new_element->next = list->head;
        list->head = new_element;
        
    }
    else /* insert form tail */
    {
        if (element->next == NULL)
        {
            list->tail = new_element;
        }

        new_element->next = element->next;
        element->next = new_element;

    }

    list->size++;

    return 0;
        
}
/* remove one element */
int list_rem_next(List *list, ListElmt *element,void **data)
{

     if (list_size(list) == 0)
     {
       return -1;
     }

     if (element == NULL) /*若创建来的前一个元素为空,表明是删除第一个元素 */
     {

     }
     else
     {

     }
    /* 在单向链表中,删除一个元素必须知道它前面那个元素的位置,所以创建来这个元素 */

    
    


}

void list_destroy(List *list)
{
    void *data;

    while (list_szie(list) > 0)
    {
        if (list)

    }

}



