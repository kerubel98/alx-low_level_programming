#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * tyedef struct node_t - intializes structur with data ande pointer to the next struct
 * @data: hldes the data
 * @next: holdes the pointer to the next truct
 */
 typedef struct size_t
{
    int data;
    struct node_t *next;
}list_t;
size_t print_list(const list_t *h);
#endif
