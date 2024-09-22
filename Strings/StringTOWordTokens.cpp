#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*splitting a string by some delimiter*/
/*str: It is the pointer to the string to be tokenized.
delims: It is a string containing all delimiters.*/

/*Return Value
It returns the pointer to the first token encountered in the string.
It returns NULL if there are no more tokens found.*/
int main(){
   
  char str[] = "Comma,Delimited,List";
  const char s[] = ",";
  char *token = strtok(str, s);

    while(token!=NULL){
        /*1st word 1st character to =a*/
        //-> NOPE it changes all word first char
        /*
        my name is isha
        ay aame as asha
        */
       printf(" % s\n", token);
       token = strtok(NULL, s);
    }
    return 0;
}