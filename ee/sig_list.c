
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

     if (element == NULL) /*����������ǰһ��Ԫ��Ϊ��,������ɾ����һ��Ԫ�� */
     {

     }
     else
     {

     }
    /* �ڵ���������,ɾ��һ��Ԫ�ر���֪����ǰ���Ǹ�Ԫ�ص�λ��,���Դ��������Ԫ�� */

    
    


}

void list_destroy(List *list)
{
    void *data;

    while (list_szie(list) > 0)
    {
        if (list)

    }

}



