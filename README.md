# Simple-Request-Queue-Elevator
# Elevator Management System

A simple elevator management system written in C.

This project simulates an elevator serving multiple floor requests using a queue-based scheduling system. Users can add floor requests, view the request queue, and process requests in the order they were received.

## Features

- Add multiple floor requests
- View pending requests
- Process requests using FIFO (First-In First-Out)
- Simulate elevator movement between floors
- Door open and close simulation
- Input validation for floor numbers
- Queue capacity control

## Example

Current Floor: 1

Queue:
5 8 3

Processing:

Moving up to floor 2
Moving up to floor 3
Moving up to floor 4
Moving up to floor 5

Arrived at floor 5
Doors opening...
Doors closing...

## Technologies Used

- C Programming Language
- GCC Compiler
- Code::Blocks

## Concepts Demonstrated

This project demonstrates:

- Structures (`struct`)
- Arrays
- Functions
- Pointers
- Queue implementation
- Scheduling concepts
- Control structures
- Input validation

## Project Structure

```
main.c
README.md
```

## How to Compile

Using GCC:

```bash
gcc main.c -o elevator
```

Run:

```bash
./elevator
```

Windows:

```bash
elevator.exe
```

## Menu Options

1. Add Floor Request
2. View Queue
3. Process Queue
4. Exit

## Future Improvements

- Multiple elevators
- Priority scheduling
- Elevator state machine
- Floor request cancellation
- Event logging to file
- TCP client-server integration
- Multithreading using POSIX threads
- Smart elevator scheduling algorithm

## Learning Outcomes

Through this project I practised:

- Working with C structures and arrays
- Designing modular programs
- Implementing queue-based request processing
- Simulating a real-world system
- Using Git and GitHub for version control

