
“The journey of a thousand miles begins with one step.”  - Lao Tzu



 # CS50-s Introduction to computer-Science Notes

I am currently taking the CS50 course from Harvard on the basics of computer science and reviewing it. Feel free to download and study the materials! I hope these notes help you learn more about computer science concepts and how computers work in general. 

The notes are organized by each class:

- Week 0 notes
- Week 1 notes
- Week 2 notes


# Week 0 Notes

## Why Computers Use Binary

1. Binary Nature of Computers:
- Electrical Devices: Computers are built from electronic components, such as transistors, which can be in one of two states: on or off.
- Binary Representation: In binary, "on" is represented by 1 and "off" by 0. This corresponds directly to the presence or absence of an electrical signal.

2. Bits and Transistors:
- Bit: The fundamental unit of data in a computer, which can be either 0 or 1.
- Transistors: These are the building blocks of modern electronic devices. When a transistor is off, it represents a 0; when it’s on, it represents a 1.

## Understanding Binary Numbers

1. Binary Combinations:

Lamps Analogy: Imagine each lamp can be either on (1) or off (0). By combining these states, you can represent numbers:

- on on on (111 in binary) = 7 in decimal.
- on off on (101 in binary) = 6 in decimal.


2. Number Systems:
   
- Decimal System (Base-10): Uses digits from 0 to 9. The place value of each digit determines its significance.
- Binary System (Base-2): Uses only 0 and 1. Each position represents a power of 2.

3. Bits and Bytes:
   
- Bit: Represents the smallest unit of data, either 0 or 1.
- Byte: Composed of 8 bits, providing 28=2562^8 = 25628=256 possible values.

## Character Encoding

1. ASCII (American Standard Code for Information Interchange):
   
- Binary Representation of Characters: Each character is assigned a unique binary code.
Example: The letter 'A' is represented as 01000001 in binary, which is 65 in decimal.
Bit Values: From right to left, each bit position represents 1,2,4,8,16,32,64... 

If a bit is "on,"(1) its value is added to the total.

Example: 01000001

<img src="https://www.lifewire.com/thmb/etKJf4AjsmYOpGi2pfQHjR5eg4o=/1500x0/filters:no_upscale():max_bytes(150000):strip_icc()/what-is-binary-and-how-does-it-work-4692749-6-7180cc4d1fb84abfb2e58840dc08ad09.png" alt="What is Binary?" width="300"/>


3. Unicode:
Extended Character Set: Unicode includes a vast range of characters from various languages and symbols.
Example: U+1F602 represents the 😂 (Face with Tears of Joy) emoji.

## Contextual Interpretation

1. Data Representation in Different Applications:
   
- Gmail: Binary data is interpreted as text.
- Photoshop: Binary data is used to represent colors and graphics.
- RGB Color Model: For example, 73, 73, 33 represents a specific color in the RGB color space.

## Algorithms and Efficiency

1. Algorithm Design:
- Goal: The primary objective of an algorithm is to solve a problem efficiently.
- Example: Finding "John Harvard" in a book:
- Linear Search: Sequentially checking each page.
- Binary Search: Efficiently locating the name by dividing the search space.

2. Performance and Efficiency:
   
- Best Case vs. Worst Case: Algorithms have different performance characteristics in best-case, average-case, and worst-case scenarios.
Graph of Efficiency: Illustrates how an algorithm’s performance scales with the size of the input.

3. Binary Search in Practice:
- Example: Companies like Google and Microsoft use variations of binary search algorithms to handle large datasets efficiently. By dividing the data into sections and repeatedly narrowing down, they can quickly locate information.

## Incremental Development in Coding

 Step-by-Step Approach:
Compose Programs Gradually: Start with a basic version of the program and incrementally add features.
- Concept: Develop and refine your program in small, manageable steps to achieve the desired functionality.

## Binary Search Algorithm

## 1. Concept:

Binary search is an efficient algorithm for finding a target value within a sorted array.
It works by repeatedly dividing the search interval in half.

## 2. How It Works:
Initial State: Start with the entire array.

Step 1: Compare the target value with the middle element of the array.
- If the target value is equal to the middle element, the search is successful.
- If the target value is less than the middle element, narrow the search to the lower half of the array.
- If the target value is greater than the middle element, narrow the search to the upper half of the array.
  
Step 2: Repeat the process on the narrowed array until the target value is found or the interval is empty.

## 3. Example:
- Consider an array [1, 3, 5, 7, 9, 11, 13, 15, 17, 19] and you are searching for the value 7.

- Initial Search:
Middle element: 11
Target 7 is less than 11, so search the left half: [1, 3, 5, 7, 9]
- Second Search:
New middle element: 5
Target 7 is greater than 5, so search the right half of the previous interval: [7, 9]
- Third Search:
New middle element: 7
Target 7 matches the middle element, so the search is successful.

## 4. Efficiency:

Binary search is very efficient with a time complexity of O(log⁡n)O(\log n)O(logn), where nnn is the number of elements in the array.
It significantly reduces the number of comparisons compared to a linear search, especially for large datasets.

## 5. Practical Application:
Companies like Google and Microsoft use variations of binary search algorithms to manage and search through vast amounts of data quickly and efficiently.



