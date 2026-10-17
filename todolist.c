//
// Created by inigu on 10/17/2026.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct task{
    char name[100];
    struct task *next;
} task_t;



void addtask(task_t **head) {

    char * name;
    task_t *newtask = (task_t *) malloc(sizeof(task_t));
    printf("Name of the task: ");
    scanf("%99s", newtask->name);
    newtask->next = *head;
    (*head) = newtask;

};

void displaytasks(task_t **head) {

    task_t *actual = *head;
    task_t *siguiente = NULL;
    while (actual != NULL) {
        siguiente = actual->next;
        printf("Name of the task: %s \n", actual->name);
        actual = siguiente;
    };



};


int input();



int main() {
    task_t *head = NULL;
    int choice = 0;
    while (choice != 4){
    printf("1. Add a task\n");
    printf("2. Delete a task\n");
    printf("3. Display a task\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");

     choice = input();


        switch (choice) {
            case 1: {
                addtask(&head);
                break;
            }
            case 2: {
                printf("Option 2 \n");
                break;
            }
            case 3: {
                printf("Option 3 \n");
                displaytasks(&head);
                break;
            }
            case 4: {
                printf("Option 4 \n");
                break;
            }
            default: {
                printf("Wrong answer \n");
                break;
            }
        }
    }
    return 0;


}

int input() {
    int number;
    scanf("%i", &number);
    return(number);
}