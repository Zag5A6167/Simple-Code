#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];

    struct studentNode *next ;
} typedef Node ;

void saveNode( Node *child ) ;


int main() {
    Node *start, *now ;
    start = new Node ;
    saveNode( start ) ;
    printf("%s",start->name);
    return 0;
}

void saveNode( Node *person ) {
    char Name[20];
    int Age;
    float GPA;
    printf("Name: ");
    scanf("%s",Name);
    strcpy(person->name,Name);
}

