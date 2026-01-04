# FILE-HANDLING-PROGRAM

*COMPANY NAME*: CODTECH IT SOLUTION

*NAME*: MD MAHMUD HUSSAIN

*INTERN ID*: CTISAK20 

*DOMAIN*: C PRAOGAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

Task 1: File Handling in C Programming
Introduction

Task 1 of the CODTECH Internship focuses on understanding and implementing file handling operations in C programming. File handling is a crucial concept in computer science because it allows programs to store data permanently, retrieve it later, and manipulate it efficiently. Unlike variables that store data temporarily in memory, files enable long-term data storage on secondary memory devices such as hard disks or SSDs. This task helps build a strong foundation in working with files, which is essential for real-world software development.

The objective of this task is to design and implement a C program that performs basic file operations such as creating a file, writing data to a file, reading data from a file, and appending data to an existing file. Through this task, practical exposure is gained to standard file handling functions provided by the C standard library.

Objective of the Task

The main objectives of Task 1 are:

To understand the concept of file handling in C.

To learn how to create and open files using different modes.

To perform write, read, and append operations on text files.

To handle errors that may occur during file operations.

To display file content clearly in the terminal.

To understand the importance of persistent data storage.

Concept of File Handling in C

File handling in C is achieved using the FILE structure and a set of built-in functions provided by the <stdio.h> header file. A file is accessed through a file pointer, which acts as a connection between the program and the physical file stored on disk.

Some commonly used file modes include:

"w" (write mode): Creates a new file or overwrites an existing file.

"r" (read mode): Opens an existing file for reading.

"a" (append mode): Opens a file to add data at the end without overwriting existing content.

In this task, all three modes are used to demonstrate different file operations.

Description of the Implemented Program

The implemented C program performs the following operations sequentially:

1. File Creation and Writing Data

The program begins by creating a text file named data.txt using write mode ("w"). If the file already exists, its contents are overwritten. The user is prompted to enter text through the terminal, which is then written into the file using standard input and output functions.

This step demonstrates how user input can be captured and stored permanently in a file. Functions such as fopen(), fputs(), and fclose() are used to handle this operation.

2. Reading Data from the File

After writing data to the file, the program reopens the same file in read mode ("r"). The stored content is read line by line and displayed in the terminal. This confirms that the data has been successfully written and retrieved from the file.

The reading process uses functions like fgets() to read data safely and efficiently. Displaying the output in the terminal helps users verify the correctness of the file operation.

3. Appending Data to the File

In the final step, the file is opened in append mode ("a"). The user is again prompted to enter additional text, which is appended to the existing content of the file instead of overwriting it. This operation is particularly useful in applications such as logging systems, reports, and databases where new data must be added continuously.

This step reinforces the concept of preserving existing data while adding new information.

Error Handling

Proper error handling is implemented in the program to ensure robustness. If the file cannot be opened due to reasons such as missing permissions or invalid paths, the program displays an appropriate error message and terminates safely. This helps prevent unexpected crashes and ensures reliable execution.

Technologies and Tools Used

Programming Language: C

Compiler: GCC

Editor/IDE: Visual Studio Code

Operating System: Cross-platform (Windows, macOS, Linux)

Program Output

The output of the program is displayed directly in the terminal. It includes:

Prompts for user input

Display of file contents after reading

Confirmation messages indicating successful execution

Additionally, the generated data.txt file stores the written and appended data, proving the correctness of file handling operations.

Importance of File Handling

File handling plays a critical role in real-world applications. Some common use cases include:

Storing user records and configurations

Logging application activities

Saving reports and transaction data

Reading input data from external sources

By completing this task, a clear understanding is developed of how programs interact with files at a fundamental level.

Learning Outcomes

After completing Task 1, the following skills and concepts were learned:

Understanding file pointers and file modes.

Using standard file handling functions in C.

Managing user input and output effectively.

Implementing error handling for file operations.

Writing clean, readable, and modular C code.

Understanding persistent data storage concepts.

Conclusion

Task 1 successfully demonstrates the practical implementation of file handling in C programming. By performing create, read, write, and append operations, this task provides hands-on experience with one of the most essential features of system-level programming. The knowledge gained from this task is highly applicable to advanced programming concepts and real-world software development.

This task lays a strong foundation for future tasks in the internship and enhances confidence in working with file-based applications using the C programming language.


