#include "logic.c"

void menu(int argc, char **argv)
{
    initBST(&globalTree);

    int choice;
    char *name = (char *)malloc(sizeof(char) * 50);

    do
    {
        printf("\n----- Binary Search Tree Menu -----\n");
        printf("1. Insert Node\n");
        printf("2. Count Nodes\n");
        printf("3. Remove Node\n");
        printf("4. Search Node\n");
        printf("5. Inorder Traversal\n");
        printf("6. Preorder Traversal\n");
        printf("7. Postorder Traversal\n");
        printf("8. 3D tree\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Name: ");
            scanf("%s", name);
            insertNode(&globalTree, name);
            printf("Node inserted.\n");
            break;
        case 2:
            printf("Total nodes in the tree: %d\n", count(globalTree));
            break;
        case 3:
            printf("Enter name number to remove: ");
            scanf("%s", name);
            removeNode(&globalTree, name);
            printf("Node removed.\n");
            break;
        case 4:
            printf("Enter name number to search: ");
            scanf("%s", name);
            if (search(globalTree, name) == 1)
                printf("Node found.\n");
            else
                printf("Node not found.\n");
            break;
        case 5:
            printf("Inorder Traversal: \n");
            inorderTraversal(globalTree);
            printf("\n");
            break;
        case 6:
            printf("Preorder Traversal: \n");
            preorderTraversal(globalTree);
            printf("\n");
            break;
        case 7:
            printf("Postorder Traversal: \n");
            postorderTraversal(globalTree);
            printf("\n");
            break;
        case 8:
            start(argc, argv);
            break;
        case 0:
            printf("This is what we call as 3D Binary Search Tree!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
}

int main(int argc, char **argv)
{
    menu(argc, argv);
    return 0;
}