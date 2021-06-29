#include "CppUTest/TestHarness.h"

extern "C"
{
#include "linked_list.h"
}

TEST_GROUP(LinkedList){
    void setup(){}

    void teardown(){}

    //
};

TEST(LinkedList, SimpleScenario)
{
    List *head = construct(1);
    List *l2 = append(head, 2);
    List *l3 = append(l2, 3);

    debug_print(head);

    destroy(head);
}
