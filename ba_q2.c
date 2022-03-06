// Stack implementation in C

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int count = 0;

// Creating a stack
struct stack {
  int items[MAX];
  int top;
};

typedef struct stack st;

void createEmptyStack(st *s) {
  s->top = -1;
}

// Check if the stack is full
int isfull(st *s) {
  if (s->top == MAX - 1)
    return 1;
  else
    return 0;
}

// Check if the stack is empty
int isempty(st *s) {
  if (s->top == -1)
    return 1;
  else
    return 0;
}

// Add elements into stack
void push(st *s, int newitem) {
  if (isfull(s)) {
    printf("STACK FULL");
  } else {
    
    s->items[s->top] = newitem;
    s->top++;
  }
  count++;
}

// Remove element from stack
void pop(st *s) {
  if (isempty(s)) {
    printf("\n STACK EMPTY \n");
  } else {
    s->top--;
    printf("Item popped= %d", s->items[s->top]);
    
  }
  count--;
  printf("\n");
}

// Print elements of stack
void printStack(st *s) {
  printf("Stack: ");
  for (int i = 0; i < count; i++) {
    printf("%d ", s->items[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  int ch;
  st *s = (st *)malloc(sizeof(st));
  
  int choice;
  
	while(1){
		int n;
		int ele = 0;
		
	
		printf("1. Push\n2. Pop\n3. Display\n4. Exit\n\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		
		if(choice<=4){
			
			switch(choice){
			
				case 1:
					printf("Enter total push\n");
					scanf("%d",&n);
					for(int i=0; i<n; i++){
						printf("Enter the element to push\n");
						scanf("%d", &ele);
						push(s, ele);
					}
					break;
					
				case 2:
/*					printf("popping %d", s);*/
					pop(s);
					printf("Done\n");
					
					break;
				
				case 3:
					printStack(s);
					break;
				
				case 4:
					exit(0);
					break;
				
				
				}
			}
		}
}
