#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "Stack.h"
 
#define size 8
struct stack {
   int s[size];
   int top;
}st;


Stack::Stack(){
}
 
int Stack::stfull() {
   if (st.top >= size - 1)
      return 1;
   else
      return 0;
}
 
void Stack::push(int item) {
   st.top++;
   st.s[st.top] = item;
}
 
int Stack::stempty() {
   if (st.top == -1)
      return 1;
   else
      return 0;
}
 
int Stack::pop() {
   int item;
   item = st.s[st.top];
   st.top--;
   return (item);
}
 
int* Stack::display() {
   int i;
   if (stempty())
      return NULL;
   else {
      return st.s;
   }
}