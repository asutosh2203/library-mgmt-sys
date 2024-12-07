# Library Management System

A simple **Library Management System** implemented in C++. This system allows users to add, issue, return, and view books within a simulated library environment. It uses a simple map-based approach for efficient searching and organization.

---

## Table of Contents
- [Overview](#overview)  
- [Features](#features)  
- [Technologies Used](#technologies-used)  
- [Setup Instructions](#setup-instructions)  
- [How to Run](#how-to-run)

---

## Overview

The **Library Management System** is designed to simulate the operations of a library. It allows users to perform operations like adding new books, issuing books to members, returning books, and viewing a list of all available books. The system uses standard C++ features like `std::map` and user-defined logic for storing and searching books by ID.

---

## Features

This system includes the following features:

1. **Add New Books**  
   Allows the user to add a new book with title and author information into the library.

2. **View Library Catalog**  
   Displays a list of all available books along with their respective authors and issue statuses.

3. **Issue Books by ID**  
   Allows a user to issue a book if it is available.

4. **Return Books by ID**  
   Allows a user to return a book by providing its unique book ID.

5. **Search by Book ID**  
   Efficient searching of books using a map-based lookup system.

---

## Technologies Used

This project is implemented entirely in **C++17** with standard libraries and does **not** depend on external libraries (other than the standard C++ library). Below are some of the key concepts and features in use:

- **C++17**
- `std::map` for faster lookups.
- Struct-based design for simplicity.
- Efficient lookups and operations via ID mapping.

---

## Setup Instructions

### Prerequisites
Before you proceed, ensure you have a C++ compiler such as **g++** or **Visual Studio's C++ compiler** available on your system.

### Clone the repository
- `git clone https://github.com/<username>/<repository-name>.git`
- `cd <repository-name>`

### How to Run
1. **Compile the program**
   Use the following command to compile the system:
   `g++ -o library_sys .\main.cpp .\uuid.cpp .\library.cpp -std=c++17`

2. **Run the Executable**
   After compilation, execute the program:
   `./library`
   Or on Windows:
   `./library.exe`