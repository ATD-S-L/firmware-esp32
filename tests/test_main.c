#include <stdio.h>
#include <assert.h>

int main(void) {
    printf("Running unit tests...\n");
    
    printf("Test 1: Basic assertions\n");
    assert(1 == 1);
    
    printf("All tests passed!\n");
    return 0;
}
