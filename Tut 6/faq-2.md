# FAQ: Stack using Linked List

**1. What is a queue?**
A queue is a linear data structure that works on the first in, first out (FIFO) principle. New data is inserted at the rear end and removed from the front end, so the element added first is the one removed first.

**2. How is a queue represented?**
A queue can be represented with an array or with a linked list. An array queue has a fixed size and keeps front and rear indexes. A linked list queue grows as needed and keeps front and rear pointers to its nodes.

**3. List the types of queues.**
The main types are the linear queue, the circular queue and the priority queue. A deque (double-ended queue) is another variant. Each differs in how elements are inserted, removed and ordered.

**4. What is a circular queue?**
In a circular queue the last position is connected back to the first position, forming a circle. When the rear reaches the end of the array it wraps around to the start if space is free. This reuses the empty slots that a linear queue wastes after deletions.

**5. What are the applications of a queue?**
Queues are used for categorizing data and for queue simulation, for example a line of customers at a counter. They also appear in CPU scheduling, printer spooling and buffering of incoming data, where items must be handled in arrival order.

**6. What is a priority queue?**
A priority queue is a collection where every element has a priority, and the priority decides the order of deletion and processing. Two rules apply:
1. An element with higher priority is processed before any element with lower priority.
2. Two elements with the same priority are processed in the order they were added.

**7. What is a deque?**
Deque is short for double-ended queue. It is a linear list where elements can be added or removed at either end, but not in the middle. Because both ends are open, it can behave as a stack or as a queue.
