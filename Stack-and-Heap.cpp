/* The size of the stack is fixed therefore sometimes stack overflow happen and stack works on the concept of 
   first in last out and stack has fix size and heap doesnot have fix size and in stack we donot need to allocate or deallocate memory but this not happen in heap

In dynamic memory  we can allocate or deallocate momory to our variable mannually and this happen in heap
New operator is used to allocate memory in heap */

#include<iostream>
using namespace std;
int main(){
    int a=10; //this variable a is stored in stack
    int *p=new int();
    *p=10; //Here *p is not stored in heap but it point to the memory address where a memory allocate to store our variable value which means p is pointer
    delete(p); //delete operator is used to deallocate memory from heap but the pointer *p is still pointing to the memory and then it is called as dangling pointer because the memory location where p is pointing there is no value is stored 
    p =new int[4]; //here we are storing array of size 4 in pointer p and then pointer p will point to the array and it point as it will store the address of 0 index element of array
    delete[]p; //this will delete block memory allocate for array
    p=NULL; //It tells that p is not pointing to any memory location of heap
    return 0;
}