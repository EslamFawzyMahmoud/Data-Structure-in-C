#include <stdio.h>
#include <stdlib.h>
#include "StackArray/StackArr.c"
using namespace std;



int main() {
    Stack stack;
    CreateStack(&stack);
    for (int i = 1; i <= 10; ++i) {
        Push(i,&stack);
    }

    printf("Traverse Stack\n");
    TraverseStack(&stack,&Display);
    return 0;
}
