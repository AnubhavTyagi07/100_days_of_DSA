# 100 Days of DSA Challenge 🚀

Hi, I'm Anubhav Tyagi, a First-Year B.Tech CSE student.

This repository contains my daily DSA and C++ practice as part of my 100 Days of DSA Challenge.

## Day 1 - Add Two Numbers

### Problem Statement
Write a C++ program to add two numbers entered by the user and display their sum.

### Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, sum;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    sum = a + b;

    cout << "Sum = " << sum << endl;

    return 0;
}
