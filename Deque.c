#include <stdio.h>

#define MAX 5

int deque[MAX];
int front = -1, back = -1;

void addFront(int x) {
    if (front == 0)
    printf("No space at front\n");

    else {

    if (front == -1) {
        front = back = 0;
    } else {
        front--;
    }
        deque[front] = x;
    }
}

void addBack(int x) {
    if (back == MAX - 1)
    printf("Deque full\n");

    else {
        
    if (back == -1) {
        front = back = 0;
    } else {
        back++;
    }
        deque[back] = x;
    }
}

void removeFront() {
    if (front == -1)
    printf("No orders\n");
    
    else {
        printf("Serving order: %d\n", deque[front]);

    if (front == back)
        front = back = -1;
    else
        front++;
    }
}

void removeBack() {
    if (front == -1)
    printf("No orders\n");

    else {
        printf("Removing last order: %d\n", deque[back]);

    if (front == back)
        front = back = -1;
    else
        back--;
    }
}


void display() {
    if (front == -1)
    printf("No orders\n");

    else {
        printf("Orders: ");

    for (int i = front; i <= back; i++)
        printf("%d ", deque[i]);
        printf("\n");
    }
}

int main() {
    int n, x;

    while (1) {
        printf("\nDEQUE MENU\n1.Add VIP(front)\n2.Add Normal(back)\n3.Serve Order\n4.Remove Last\n5.Display\n6.Exit\n");
        scanf("%d", &n);

    switch(n) {
        case 1:
            printf("Enter order ID: ");
            scanf("%d", &x);
            addFront(x);
            break;
        case 2:
            printf("Enter order ID: ");
            scanf("%d", &x);
            addBack(x);
            break;
        case 3:
            removeFront();
            break;
        case 4:
            removeBack();
            break;
        case 5:
            display();
            break;
        case 6:
            return 0;
        }
    }

}
