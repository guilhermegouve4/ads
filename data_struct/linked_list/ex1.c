#include <stdio.h>
#include <stdlib.h>

struct dog {
    int weigth;
    struct dog *p;
};

void print_struct_value(struct dog *dog) {
    printf("Dog weigth: %d\n", dog->weigth);
}

void free_dog_list(struct dog *poodle){
    struct dog *tmp;
    for(struct dog *i = poodle; i != NULL; i = tmp){
        tmp = i->p;
        free(i);
    }
}

int main(){

    struct dog *poodle = malloc(sizeof(struct dog));
    poodle->weigth = 5;
    struct dog *head = poodle;

    struct dog *pug = malloc(sizeof(struct dog));
    pug->weigth = 9;
    pug->p = NULL;

    poodle->p = pug;

    struct dog *rottweiler = malloc(sizeof(struct dog));
    rottweiler->p = poodle;
    rottweiler->weigth = 30;
    head = rottweiler;

    free(rottweiler);
    free(poodle);
    free(pug);

    return 0;
}