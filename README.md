# Largest Number Finder

A simple C++ program that finds the largest of three integers input by the user.

## Description

This program prompts the user to enter three integers and then determines the largest of the three using a dedicated function `findLargest()`. It demonstrates basic input/output operations and conditional statements in C++.

### Key Features
- User input for three integers
- Function to determine the largest number
- Simple conditional logic
- Clear output display

## Function Structure

```cpp
int findLargest(int num1, int num2, int num3) {
    int largest = num1; 
    if (num2 > largest)
        largest = num2;
    if (num3 > largest)
        largest = num3;
    return largest;
}

