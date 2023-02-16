//
//  main.c
//  AntStack
//
//  Created by Adam Arlotta on 5/5/22.
//

#include <stdio.h>
#include <stdlib.h>

#define MAX_X 100
#define MAX_Y 100

int stack_data[MAX_X][MAX_Y];
int x = 0, y = 0;

int empty_x(){
    return (x == 0)? 1 : 0;
}

int full_x(){
    return(x == MAX_X)? 1 : 0;
}

int empty_y(){
    return (y == 0)? 1 : 0;
}

int full_y(){
    return (y == MAX_Y)? 1 : 0;
}

void push(int ant_pos[MAX_X][MAX_Y]){
    if(!full_x() ){
        stack_data[x][y] = ant_pos[x][y];
        x++;
    }
    
    else if (!full_y() ){
            stack_data[x][y] = ant_pos[x][y];
            y++;
        }
    
    else{
        printf("Error: Stack is full\n");
        exit(1);
}
}
void pop(int ant_pos[MAX_X][MAX_Y]){
    if(!empty_x()){
        x--;
    }
    else if(!empty_y() ){
        y--;
    }
}

int peek(){//checks value in the stack
    if((!empty_x() && !empty_y()) || (!&empty_x) || !empty_y() )
        return stack_data[x - 1][y - 1];
    else{
        printf("Error: Stack is empty\n");
        exit(1);
    }
}

void clear_stack(int ant_pos[MAX_X][MAX_Y]){
    if(!empty_x() )
        free(x);
    else if(!empty_y() )
        free(y);
    else
        printf("Stack is empty. \n");
}
    

int main() {
    
}
