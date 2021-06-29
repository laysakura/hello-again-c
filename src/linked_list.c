#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "linked_list.h"

/// Returns: first container
List *construct(int val)
{
    List *head = malloc(sizeof(List));
    assert(head != NULL);
    head->val = val;
    return head;
}

/// Returns: next container
List *append(List *tail, int next_val)
{
    List *next = construct(next_val);
    assert(next != NULL);
    tail->next = next;
    return next;
}

void destroy(List *head)
{
    assert(head != NULL);
    free(head);
}

void debug_print(List *head)
{
    for (List *p = head; p != NULL; p = p->next)
    {
        printf("%d, ", p->val);
    }
}

int main()
{
    List *head = construct(1);
    List *l2 = append(head, 2);
    List *l3 = append(l2, 3);

    debug_print(head);

    destroy(head);

    return 0;
}
