# Circular Queue Implementation in C

## Description
This program implements a **Circular Queue** in C using an array. It provides basic operations like **enqueue**, **dequeue**, and **display** while handling overflow and underflow conditions efficiently.

## Features
- **Enqueue**: Adds an element to the queue.
- **Dequeue**: Removes an element from the queue.
- **Display**: Shows all elements in the queue.
- **Handles circular nature** of the queue efficiently.

## How to Use
1. Compile the program using a C compiler:
   ```bash
   gcc circular_queue.c -o circular_queue
   ```
2. Run the executable:
   ```bash
   ./circular_queue
   ```
3. Choose an option from the menu:
   - Press **1** to enqueue an element.
   - Press **2** to dequeue an element.
   - Press **3** to display the queue.
   - Press **4** to exit.

## Code Overview
The program maintains a circular queue with a **fixed size of 10** and manages the **front** and **rear** indices to ensure efficient insertions and deletions. The queue wraps around when necessary to utilize available space.

## Example Output
```
1 - ENQUEUE
2 - DEQUEUE
3 - DISPLAY
4 - EXIT

PROVIDE YOUR CHOICE: 1
ENTER ELEMENT TO INSERT: 5
5 HAS BEEN INSERTED INTO THE CIR-QUEUE

PROVIDE YOUR CHOICE: 3
ELEMENTS ARE:
5
```

## Author
Aniket Sonawane

## License
This project is open-source and free to use.

