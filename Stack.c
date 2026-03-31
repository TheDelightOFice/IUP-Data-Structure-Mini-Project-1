#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1)
    printf("Stack full\n");

    else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    if (top == -1) 
    printf("Stack empty\n");

    else {
        printf("Cancelled order: %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) 
    printf("No orders\n");

    else {
        printf("Orders: ");

        for (int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
        printf("\n");
    }
}

int main() {

    int  n, x;

    while (1) {
        printf("\nSTACK MENU\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &n);

    switch(n) {
        case 1:
            printf("Enter order ID: ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        }
    }

}
