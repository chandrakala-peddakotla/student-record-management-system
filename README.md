# Student Record Management System

### C Mini Project | Singly Linked List

A menu-driven C application for managing student records using a **singly linked list**.

The program provides a menu that allows users to manage student records without interacting directly with the underlying data structure.

Student records are created dynamically and assigned the **smallest available roll number**. Records can be added, deleted, modified, displayed, sorted, saved, loaded, and reversed.

## 🎯 Project Overview

This project demonstrates several core C programming concepts:

- Structures and linked-list nodes
- Pointers and pointer-to-pointer parameters
- Dynamic memory allocation and deallocation
- Searching, sorting, and updating records
- String comparison and input handling
- File reading and writing
- Modular programming using multiple source files

## 📁 Module Structure

| File | Responsibility |
|---|---|
| `student.h` | Defines the student structure and declares functions shared by the modules. |
| `stud_main.c` | Contains `main()` and controls the menu-driven program. |
| `stud_add.c` | Creates and inserts a student record with an automatically assigned roll number. |
| `stud_del.c` | Deletes a student record by roll number or name. |
| `stud_del_all.c` | Deletes all records and releases the allocated memory. |
| `stud_show.c` | Displays the student records in a readable format. |
| `stud_mod.c` | Modifies an existing student's details. |
| `stud_sort.c` | Sorts student records according to the selected option. |
| `stud_read.c` | Loads previously saved records from the data file. |
| `stud_save.c` | Saves the current student records to the data file. |
| `stud_rev.c` | Reverses the linked list by changing the existing links. |
| `student.dat` | Stores the saved student records. |
| `Makefile` | Compiles the project modules together. |

## 🧩 Student Record Structure

Each node in the linked list contains the following members:

| Member | Type | Purpose |
|---|---|---|
| `rollno` | `int` | Stores the student's unique roll number. |
| `name` | `char[50]` | Stores the student's name. |
| `percentage` | `float` | Stores the student's percentage. |
| `next` | `struct student *` | Stores the address of the next node. |

## 🔢 Automatic Roll Number Assignment

Roll numbers are **not entered manually**.

When a new record is added, the program finds the smallest positive roll number that is not currently in use. Therefore, a roll number freed by deleting a record can be assigned to a new student later.

**Example**

```text
Existing roll numbers: 1  2  4  5
New roll number:       3
```

After deleting roll number `2`:

```text
Existing roll numbers: 1  3  4  5
Next available number: 2
```

This approach keeps roll numbers unique among the current records and allows deleted numbers to be reused.

## ⚙️ Menu Operations

| Option | Operation |
|---|---|
| `A / a` | Add a new student record |
| `D / d` | Delete a student record |
| `S / s` | Display all student records |
| `M / m` | Modify a student record |
| `V / v` | Save records to `student.dat` |
| `T / t` | Sort student records |
| `L / l` | Delete all records |
| `R / r` | Reverse the linked list |
| `E / e` | Exit the program |

## 🔗 How the Linked List Works

Each student is stored in a dynamically allocated node. The `next` pointer in each node points to the following node. The last node's `next` pointer is `NULL`.

```text
 HEAD
  |
  v
+---------+-------------+------------+------+
| Roll No | Name        | Percentage | Next |
+---------+-------------+------------+------+
|    1    | Chandrakala |    89.0    |  -------->
+---------+-------------+------------+------+    |
                                                 v
                                      +-------------------+
                                      |      Node 2       |	          
                                      +-------------------+
```

The `next` pointer links one student node to the next node in the list.

## 💾 Memory Management

The project uses dynamic memory allocation because the number of student records is not fixed.

- `malloc()` allocates memory when a new student node is created.
- `free()` releases memory when a node is deleted.
- The delete-all operation releases the memory used by every node.
- Remaining allocated nodes are released before the program terminates.

Proper memory management helps prevent memory leaks and invalid memory access.

## 📂 File Handling

The file `student.dat` is used to retain student data between program runs.

- **Save:** Writes the current linked-list records to the data file.
- **Read:** Loads saved records into the list when the program starts.

## 🔄 Project Flow

```text
              START
                |
                v
        Read saved records
                |
                v
          Display menu
                |
                v
       Select an operation
                |
                v
     Perform the selected task
                |
                v
          Display menu
                |
          +-----+-----+
          |           |
         Save       Exit
                      |
                      v
                Release memory
                      |
              	      v 
                     END
```

## ✨ Features

- Add student records dynamically
- Automatically assign the smallest available roll number
- Delete records by roll number or name
- Delete all records
- Modify existing records
- Display all student records
- Sort student records
- Reverse the linked list
- Save records to `student.dat`
- Load saved records when the program starts
- Accept both uppercase and lowercase menu options
- Organize functionality into separate source modules

## 📘 Learning Outcomes

This project provides practical experience with linked-list traversal and updates, pointer handling, file operations, dynamic memory management, and modular C programming. It also helps develop skills in tracing program flow and managing memory safely.

## 🛠️ Concepts Used

Structures • Singly Linked Lists • Pointers • Pointer-to-Pointer Parameters • `malloc()` • `free()` • File Handling • String Handling • Searching • Sorting • Modular Programming

## 👩‍💻 Developer

**Chandrakala Peddakotla**

*C Mini Project — Student Record Management System*
