#include <stdio.h>

// #define SIZE 100

int array[1000];
int n = 0;

// Function to display the array
void display() {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Function to insert an element
void insert(int pos, int value) {
    if (n >= SIZE) {
        printf("Array is full. Cannot insert.\n");
        return;
    }
    if (pos < 0 || pos > n) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = n; i > pos; i--) {
        array[i] = array[i - 1];
    }
    array[pos] = value;
    n++;
    printf("Inserted successfully.\n");
}

// Function to update an element
void update(int pos, int value) {
    if (pos < 0 || pos >= n) {
        printf("Invalid position.\n");
        return;
    }
    array[pos] = value;
    printf("Updated successfully.\n");
}

// Function to delete an element
void delete(int pos) {
    if (pos < 0 || pos >= n) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        array[i] = array[i + 1];
    }
    n--;
    printf("Deleted successfully.\n");
}

// Function to search for an element
void search(int value) {
    for (int i = 0; i < n; i++) {
        if (array[i] == value) {
            printf("Element %d found at position %d.\n", value, i);
            return;
        }
    }
    printf("Element not found.\n");
}

int main() {
    int choice, pos, value;

    do {
        printf("\n---- Array Operations ----\n");
        printf("1. Insert\n");
        printf("2. Update\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Search\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter position to insert (0 to %d): ", n);
                scanf("%d", &pos);
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(pos, value);
                break;
            case 2:
                printf("Enter position to update (0 to %d): ", n - 1);
                scanf("%d", &pos);
                printf("Enter new value: ");
                scanf("%d", &value);
                update(pos, value);
                break;
            case 3:
                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                delete(pos);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Enter value to search: ");
                scanf("%d", &value);
                search(value);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please choose between 1-6.\n");
        }
    } while (choice != 6);

    return 0;
}
