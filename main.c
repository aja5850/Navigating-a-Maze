#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 10


int main(void) {
    FILE *f;

    if ((f = fopen("/Users/aj/Documents/ESE124FinalProject/ESE124FinalProject/FinalProject_Input1.txt", "r")) == NULL) {
        printf ("Error: File actions.txt cannot be opened\n");
        exit(1);
    }
    
    char *input_string[10];
    //char c, a;
    int x = 0, y = 0, i=0;
    int ant_pos[MAX_SIZE][MAX_SIZE];

    while(fgets(input_string, 9, f) != EOF){
        i++;
        
        if(strcmp(input_string[i], "MARK") > 0)
            printf("Current position: %d\n", ant_pos[x][y]);
        
        else if
            (strcmp(input_string[i], "MOVE_F") > 0)
            x++;
        
        else if
            (strcmp(input_string[i], "MOVE_B") > 0)
            x--;
        
        else if
            (strcmp(input_string[i], "MOVE_L") > 0)
            y--;
        
        else if
            (strcmp(input_string[i], "MOVE_R") > 0)
            y++;
        
    }

    printf("New Position: (%d,%d)\n", x,y);
   




}
