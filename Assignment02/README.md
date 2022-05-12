# Assignment02
## Question 1
Write an ASsembly program that uses the variables below and MOV isntruction to copy the value from highEndian to lowEndian, reversing the order of the bytes.
The number's 32-bits value is understood to be **12345678h** as shown below.
1. .data
2. mybigEndian BYTE 12h,34h,56h,78h
3. mylittleEndian DWORD ?


## Question 2
Write an ASsembly program that has an array of unsigned word called source with values shown and then uses a loop to do both of these tasks in the same loop(but do one part at a time).

A. Keep a total of all the elements in the **source** array. You have to define another variable that will finally store this sum.
B. copy each element of array **source** to another array of unsigned doubles word called **target** as shown below.
1. data
2. source word 1,2,3,4,5,6,7,8,9,10
3. count = LENGTHOF source
4. target dword count DUP(?)

