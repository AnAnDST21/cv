/* Pointers are the variables that store the address of other variables 
  let there is a variable named A that store value 10 and also it is at memeory location x 
  
  Now we create a pointer that points variable A and we declare it as int *aptr; and we create aptr that point A variable
  so using this aptr we can access variable A means the value of A=*aptr=10 and we can even modify the value of variable A and 
  we write int * becuse we need to point integer variable and if we want to point some other variable to point then we write
  its datatype to piont
  
  Now we need to store address of A in aptr so we can do this as aptr =&a; 

  When we declare an array then pointer comes that target every index of array so We cannot modify the value of pointer of array
  
  We can perform Arithmetic operation as- 
   1. ++
   2. --
   3. +
   4. -
   
   In RAM each byte has an address where the value of varible are stored in the bytes in form of Binary.
   let a=10 is stored in the memory and we write int& b=a; here b is the reference so this means a ka dusra naam hai b which
   means a=b=10 so if do changes using variable a like a++ then we print b the then we get output as 11 and when we print a 
   then also wew get 11 and if do changes using b vairable then when when we print a or b we get same result and we can access
   the value 10 using a and b both the variable. So int& b=a; means one memory has two name as a and b and both a and b has 
   same vakue and address as well.

   We use references when 
   1. When we need multiple identifiers
      Identifiers-C++ identifiers in a program are used to refer to the name of the variables, functions, arrays, or other
      user-defined data types created by the programmer. 
   2. For creating alias
       The term aliasing refers to a situation where two different expressions or symbols refer to the same object.

  When we do referencing in function then it helps in 
  1. It helps in savung the memory space
  2. Change the values within the function

  We have to intialise references at the time of declaration.

   int main(){
    int a=10;
    int* aptr=&a;
    cout<<aptr<<endl; (let the addresss of a will print 2000)
    aptr++;
    cout<<aptr<<endl; (then after increment the address of a will 2004)
    return 0
   }*/

  #include<iostream>
  using namespace std;
  int main(){
    int a=10;
    int* aptr=&a;
    cout<<*aptr<<endl; //It will print the value stored in a not the address of a
    *aptr=20;
    cout<<*aptr<<endl; 
    cout<<a;
    return 0;
  }