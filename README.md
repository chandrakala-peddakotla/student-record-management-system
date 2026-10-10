# Student Record Management System

### C Mini Project | Singly Linked List



A menu-driven C application for managing student records using a **singly linked list**.

The program presents a menu so users can perform record-management tasks without working directly with the underlying data structure. 

Student records are created dynamically, assigned the **smallest available roll number**, and can be added, deleted, modified, displayed, sorted, saved, read, and reversed.



## 🎯 What the project covers



This project brings together several core C programming topics:

* Structures and linked-list nodes
* Pointers and pointer-to-pointer parameters
* Dynamic memory allocation and deallocation
* Searching, sorting, and updating records
* String comparison and input handling
* Reading from and writing to a file
* Splitting a program into multiple source modules



## 📁 Module Structure

|**File**|**Responsibility**|
|-|-|
|`student.h`|Contains the student structure and function declarations used by all modules.|
|`stud\_main.c`|Contains the main function and controls the menu-driven program.|
|`stud\_add.c`|Creates and inserts a new student record with an automatically assigned roll number.|
|`stud\_del.c`|Deletes a student record by roll number or name.|
|`stud\_delall.c`|Deletes all records and releases the allocated memory.|
|`stud\_show.c`|Displays the complete student list in a readable format.|
|`stud\_mod.c`|Modifies an existing student’s details.|
|`stud\_sort.c`|Sorts student records according to the selected requirement.|
|`stud\_read.c`|Reads previously saved records from the data file.|
|`stud\_save.c`|Saves the current student records into the data file.|
|`stud\_rev.c`|Reverses the linked list by changing the existing links.|
|`student.dat`|Stores the saved student records.|
|`Makefile`|Compiles the project modules together.|



## 🧩 Student Record



Each node in the linked list contains:



|**Member**|**Type**|**Purpose**|
|-|-|-|
|rollno|int|Unique student's all number|
|name|char\[50]|Student's name|
|percentage|float|Student's percentage|
|next|struct student \*|Address of the next node|



## 🔢 Automatic Roll Number



Roll numbers are **not entered manually**.

When a record is added, the program finds the smallest positive roll number that is not currently in use. This means a roll number freed by deleting a record can be assigned again later.



Example:


Existing records : 1  2  4  5
New roll number  : 3


After deleting roll number `2`:


Existing records : 1  3  4  5
New roll number  : 2


This keeps roll numbers unique and also allows deleted numbers to be reused.



## ⚙️ Menu Operations

|Option|Operation|
|-|-|
|`A / a`|Add a new student record|
|`D / d`|Delete a student record|
|`S / s`|Display all student records|
|`M / m`|Modify a student record|
|`V / v`|Save records to 'student.dat'|
|`T / t`|Sort student records|
|`L / l`|Delete all records|
|`R / r`|Reverse the linked list|
|`E / e`|Exit the program|



## 🔗 How the Linked List Works



A student record is stored as a dynamically allocated node.
+---------+-------------+-------------+------+
| Roll No |     Name    | Percentage  | Next |
+---------+-------------+-------------+------+
      ↓
+---------+-------------+-------------+------+
|    1    | Chandrakala |    89.0     |  ●-------->
+---------+-------------+-------------+------+	  |
                                            	  |
                                                  ↓
                                            +---------+
                                            | Node 2  |
                                            +---------+


The 'next' pointer connects one student node to the next node.



## 💾 Memory Management

The project uses dynamic memory because the number of students is not fixed.

* malloc() is used when creating a new student node.
* free() is used when deleting a node.
* Delete-all releases every remaining node.
* Remaining allocated nodes are released before the program terminates.

This helps avoid memory leaks and invalid pointer access.



## 📂 File Handling



The file student.dat is used to retain student data between runs.

\- Save: transfers the current list to the data file.

\- Read: loads stored records into the list when the program starts.



## 🔄 Project Flow

&#x20;       
             START
               │
               ▼
       Read saved records
               │
               ▼
          Display Menu
               │
               ▼
       Select an operation
               │
     ┌─────────┼─────────┐
     ▼         ▼         ▼
    Add      Delete     Show
     │         │         │
     └─────────┼─────────┘
               ▼
       Other operations
               │
               ▼
          Display Menu
               │
        ┌──────┴──────┐
        ▼             ▼
      Save          Exit
                      │
                      ▼
              Release memory
                      │
                      ▼
                    END



## ✨ Features Implemented

* ✅ Add student records dynamically
* ✅ Automatically assign the smallest available roll number
* ✅ Delete by roll number or name
* ✅ Delete all records
* ✅ Modify existing records
* ✅ Display the complete list
* ✅ Sort records
* ✅ Reverse the linked-list order
* ✅ Save records to `student.dat`
* ✅ Read saved records when starting the program
* ✅ Menu accepts both upper-case and lower-case options
* ✅ Uses separate modules for different operations



#### Learning outcomes



Working on this project provides practice with linked-list traversal and updates, safe pointer handling, file operations, and modular C development. It is also a useful exercise in tracing program flow and checking memory ownership.



## 🛠️ Concepts Used

Structure • Singly Linked List • Pointers • Double Pointers • malloc() • free() • File Handling • String Handling • Searching • Sorting • Modular Programming



## 👩‍💻 Developer

**Chandrakala Peddakotla**

C Mini Project — Student Record Management System

