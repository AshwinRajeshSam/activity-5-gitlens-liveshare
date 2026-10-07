#include <stdio.h>

/**
 * greet - Greets a participant by name
 * @param name: The name of the collaborator or visitor
 */
void greet(const char *name) {
    printf("Hello, %s! Welcome to your GitHub portfolio.\n", name);
}

int main(void) {
    printf("=== Activity 5: Paired Programming via VS Code Live Share ===\n");
    greet("Ada Lovelace");
    greet("Ashwin Rajesh Sam");
    greet("Rohan Sharma");
    return 0;
}
