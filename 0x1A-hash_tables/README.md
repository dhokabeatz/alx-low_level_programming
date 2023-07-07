# 0x01A. Hash Tables

## Description

The "0x01A. Hash Tables" project introduces the concept of hash tables in computer science. Hash tables, also known as hash maps, are data structures that provide efficient key-value pair storage and retrieval. They are widely used in various applications to achieve fast and constant-time access to data.

This subproject focuses on implementing hash tables in the C programming language. We explore the fundamentals of hash table data structures, including hashing functions, collision handling techniques, and resizing strategies. By understanding these concepts, we can design and implement efficient hash table functionalities.

Throughout this subproject, we implement different functionalities of hash tables, such as creating a hash table, adding elements, retrieving elements, and deleting elements. We also handle collisions using separate chaining, which involves storing multiple elements with the same hash key in a linked list.

The project aims to provide a comprehensive understanding of hash tables and their implementation in C. By the end of this subproject, you will be familiar with the underlying principles of hash tables and capable of using them to solve various programming problems efficiently.

## Learning Objectives

1. Understand the concept of hash tables and their role in efficient data storage and retrieval.
2. Learn how to implement hash tables in the C programming language.
3. Understand different collision handling techniques, such as separate chaining.
4. Explore hashing functions and their importance in achieving uniform distribution of keys.
5. Learn how to resize hash tables dynamically to maintain optimal performance.
6. Gain proficiency in implementing basic hash table functionalities, including insertion, retrieval, and deletion.

By the end of this subproject, you should have a solid understanding of hash tables, their implementation, and their application in solving real-world problems efficiently.

## Contents

This subproject contains the following files and directories:

- **README.md**: Provides an overview and description of the subproject.
- **hash_tables.h**: Header file that contains the function prototypes and structure definition for hash tables.
- **0-hash_table_create.c**: C file that implements the function to create a new hash table.
- **1-djb2.c**: C file that implements the djb2 hashing algorithm, a widely used string hashing function.
- **2-key_index.c**: C file that implements the function to retrieve the index of a key in a hash table.
- **3-hash_table_set.c**: C file that implements the function to add an element to a hash table.
- **4-hash_table_get.c**: C file that implements the function to retrieve an element from a hash table.
- **5-hash_table_print.c**: C file that implements the function to print the contents of a hash table.
- **6-hash_table_delete.c**: C file that implements the function to delete a hash table.

## How to Use

To explore the contents of this subproject, follow these steps:

1. Clone the repository: `git clone <repository-url>`
2. Navigate to the subproject directory: `cd 0x01A-hash_tables`
3. Open the header file (`hash_tables.h`) to view the function prototypes and structure definition.
4. Open the C files to view the implementation of each functionality.
5. Compile the C files to create the executable program:
   - `gcc -Wall -Werror -Wextra -pedantic *.c -o hash_table`
6. Run the program to test the functionalities of the hash table:
   - `./hash_table`

Feel free to modify the code and explore different use cases of hash tables. You can also create additional C files to implement new functionalities or extend the existing ones.

## Acknowledgements

This subproject is part of the Holberton School curriculum.