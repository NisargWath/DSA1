#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main() {
    Node tree;
    init(&tree, 15);  // Initialize tree with size 15
    int a[] = {12,2,4,3,10};
    // Insert elements into BST
   
    for(int i = 0;i<5;i++){
        insertNode(&tree, a[i]);
    }
    printf("In-order traversal of BST: ");
    inordertraverse(&tree, 0); 
    printf("\n");
    posttraverse(&tree,0); // Should print elements in sorted order
    printf("\n");
      pretraverse(&tree,0); // Should print elements in sorted order
    printf("\n");

    // destroyTree(&tree);
    return 0;
}
