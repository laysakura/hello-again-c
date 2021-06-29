typedef struct _List
{
    int val;
    struct _List *next;
} List;

/// Returns: first container
List *construct(int val);

/// Returns: next container
List *append(List *tail, int next_val);

void destroy(List *head);

void debug_print(List *head);
