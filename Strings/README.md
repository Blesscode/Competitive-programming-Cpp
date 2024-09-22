# Competitive-programming-Cpp

# Template:

- Basic C++:

```
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    return 0;
}
```

## STRING

Try printing

- Isha
- Isha Gupta
-          Isha         Gupta
- s1=My name is Isha s2=I am a btech CSE student
  - output:'My name is Isha' 'I am a btech CSE student'
- s1= My name is Isha s2= I am a btech CSE student
  - output:' My name is Isha' 'I am a btech CSE student '
- take input as 66 Isha

- Convert [int]->[String]
- Convert [String]->[int]
- Operations on above two
  Take input

- take input as 66 Isha
- take input as Isha 77
- Isha is a student of Btech CSE -> 7 ->semester

## 1. How to convert int into a string?

There are various methods we can employ to convert an integer into a string in c++:

- a) Using the Stringstream Class
- b) Using the to_string() Method
- c) Using boost::lexical_cast -> not covering

## 1. What is to_string in C++?

to_string is a built-in function in C++ that allows converting:

- numerical data types such as integers
- floating-point numbers
  into their corresponding string representations

## 2. How to convert int to string in C++ using Sstream?

To convert an integer to a string using Sstream, follow these steps:

- a) Include the <sstream> header to use the Sstream library.
- b) Create an std::stringstream object.
- c) Use the << operator to insert the integer into the stringstream.
- d) Extract the string using the str() method of the stringstream.

# Int -> string

## 1. What is itoa and atoi in C++?

itoa: itoa is a C Standard Library function used to convert an integer to a string. It is not part of the C++ Standard Library, but it is available in many C++ implementations due to its widespread use.

atoi: atoi is a C Standard Library function used to convert a string to an integer. Like itoa, it is not part of the C++ Standard Library but is available in many C++ implementations.

## 2. How do you use Itoa ()?

To use itoa() to convert an integer to a string in C++, follow these steps:

a) Include the <cstdlib> header to use the C Standard Library function.
b) Declare a character array (char buffer) to store the resulting string.
c) Call the itoa() function, passing the integer, the character array (buffer), and the base (usually 10 for decimal).
d) The integer will be converted and stored as a string in the character array.

## 3. Stringstream

## Methods of String

- length= s.size()
- substring = s.substr()
- charat= s.at(0)
- indexOf= s.find('a')
- check for space= s[i]==' ' OR ch== ' '
- check for ' = space== ' /' '
- chcek if space= isspace(ch)
- check if space= isalpha(ch)
- remove trailing space->
  ` s.erase(s.find_last_not_of(" /t/n/r/v/f")+1);`
- remove leading space->
  ` s.erase(0,s.find_first_not_of(" /t/n/r/v/f"));`
