# Implementation of Stack, Queue, and Deque in an Online Food Ordering System

## INTRODUCTION
   This project demonstrates the implementation of fundamental data structures: Stack, Queue, and Deque using the C programming language. These structures are applied in a case study of an online food ordering system.

## OBJECTIVES

* To understand Stack, Queue, and Deque concepts
* To implement these data structures in C
* To apply them in a practical system
* To improve problem solving and coding skills

# DATA STRUCTURES USED

## STACK
Stack follows Last In First Out (LIFO).
Used for: Undo last order
Operations:

* Push (add order)
* Pop (remove last order)

## QUEUE
Queue follows First In First Out (FIFO).
Used for: Processing orders
Operations:

* Enqueue (add order)
* Dequeue (process order)

## DEQUE
Deque allows insertion and deletion from both ends.
Used for: Priority order system
Operations:

* Add front (VIP orders)
* Add back (normal orders)
* Remove front (process order)
* Remove rear (cancel order)

## CASE STUDY
   In an online food ordering system:

* Customers place orders (Queue)
* VIP customers get priority (Deque)
* Users can cancel recent orders (Stack)
  
## IMPLEMENTATION DETAILS
   Each structure is implemented using arrays in C.
   Menus are provided for user interaction.
   Number handling is used for storing order IDs.

## RESULTS
   The program successfully:

* Manages order history using Stack
* Processes orders in correct sequence using Queue
* Handles priority orders using Deque
