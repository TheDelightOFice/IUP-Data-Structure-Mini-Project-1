#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = 0, back = -1;

void enqueue(int x) {
    if (back == MAX - 1)
    printf("Queue full\n");

    else {
    back++;
    queue[back] = x;
    }
}

void dequeue() {
    if (front > back)
    printf("Queue empty\n");

    else {
    printf("Serving order: %d\n", queue[front]);
    front++;
    }
}

void display() {
    if (front > back)
    printf("No orders\n");

    else {
    printf("Queue: ");

    for (int i = front; i <= back; i++)
    printf("%d ", queue[i]);
    printf("\n");
    }
}

int main() {
    int n, x;

    while (1) {
        printf("\nQUEUE MENU\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &n);

    switch(n) {
        case 1:
            printf("Enter order ID: ");
            scanf("%d", &x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        }
    }

}
