#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Maximum number of contacts
#define MAX_CONTACTS 100

// Contact structure
struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

// List of contacts
struct Contact contacts[MAX_CONTACTS];
int contactCount = 0;

// File where contacts are stored
const char *filename = "contacts.txt";

// Function to save contacts to file
void saveContactsToFile() {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not open file for saving contacts.\n");
        return;
    }

    for (int i = 0; i < contactCount; i++) {
        fprintf(file, "%s %s %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
    }

    fclose(file);
}

// Function to load contacts from file
void loadContactsFromFile() {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        // No file exists, so there are no contacts to load
        printf("No existing contacts found. Starting fresh.\n");
        return;
    }

    while (fscanf(file, "%s %s %s", contacts[contactCount].name, contacts[contactCount].phone, contacts[contactCount].email) == 3) {
        contactCount++;
    }

    fclose(file);
}

// Function to add a contact
void addContact() {
    if (contactCount >= MAX_CONTACTS) {
        printf("Contact list is full!\n");
        return;
    }

    struct Contact newContact;
    
    printf("Enter name: ");
    scanf("%s", newContact.name);
    printf("Enter phone number: ");
    scanf("%s", newContact.phone);
    printf("Enter email: ");
    scanf("%s", newContact.email);

    contacts[contactCount] = newContact;
    contactCount++;

    printf("Contact added successfully.\n");
    saveContactsToFile();  // Save after adding
}

// Function to display all contacts
void displayContacts() {
    if (contactCount == 0) {
        printf("No contacts to display.\n");
        return;
    }

    printf("\nList of Contacts:\n");
    for (int i = 0; i < contactCount; i++) {
        printf("%d. Name: %s, Phone: %s, Email: %s\n", i + 1, contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

// Function to search for a contact by name
void searchContact() {
    char searchName[50];
    printf("Enter the name of the contact to search: ");
    scanf("%s", searchName);

    for (int i = 0; i < contactCount; i++) {
        if (strcmp(contacts[i].name, searchName) == 0) {
            printf("Contact found: Name: %s, Phone: %s, Email: %s\n", contacts[i].name, contacts[i].phone, contacts[i].email);
            return;
        }
    }

    printf("Contact not found.\n");
}

// Function to delete a contact
void deleteContact() {
    char deleteName[50];
    printf("Enter the name of the contact to delete: ");
    scanf("%s", deleteName);

    for (int i = 0; i < contactCount; i++) {
        if (strcmp(contacts[i].name, deleteName) == 0) {
            // Shift all contacts after the one to delete
            for (int j = i; j < contactCount - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            contactCount--;
            printf("Contact deleted successfully.\n");
            saveContactsToFile();  // Save after deletion
            return;
        }
    }

    printf("Contact not found.\n");
}

// Function to update a contact
void updateContact() {
    char updateName[50];
    printf("Enter the name of the contact to update: ");
    scanf("%s", updateName);

    for (int i = 0; i < contactCount; i++) {
        if (strcmp(contacts[i].name, updateName) == 0) {
            printf("Enter new phone number: ");
            scanf("%s", contacts[i].phone);
            printf("Enter new email: ");
            scanf("%s", contacts[i].email);

            printf("Contact updated successfully.\n");
            saveContactsToFile();  // Save after updating
            return;
        }
    }

    printf("Contact not found.\n");
}

int main() {
    int choice;

    // Load contacts
    loadContactsFromFile();

    while (1) {
        printf("\n--- Contact Manager ---\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Update Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                updateContact();
                break;
            case 6:
                printf("Exiting and saving contacts...\n");
                saveContactsToFile();
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}
