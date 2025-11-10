#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int random_number;
    int choice;
    char correct[256];
    char wrong[256];
    srand(time(NULL));
    random_number = rand() % 10 + 1;
    printf("Enter A Random Number Between 0-10\n");
    while(1) {
    scanf("%d",&choice);
    if (choice == random_number) {
            FILE *file = fopen("youwon.txt","r");
        if (file == NULL) {
            printf("ASCII youwon.txt Not Found\n");
            return 1;
        }
        while(fgets(correct,sizeof(correct),file)) {
        printf("%s",correct);
        }
        printf("The Random Number Was %d\n",random_number);
        fclose(file);
        break;
    }
    else{
          FILE *file = fopen("wrong.txt","r");
        if (file == NULL) {
            printf("ASCII wrong.txt Not Found\n");
            return 1;
        }
        while(fgets(wrong,sizeof(wrong),file)) {
        printf("%s",wrong);
        }
        if (choice > random_number) {
        printf("    Too High! Try Again\n");
        }
        else if (choice < random_number) {
       printf("     Too Low! Try Again\n");
        }
        fclose(file);
        
    }
    }
    return 0;
}
