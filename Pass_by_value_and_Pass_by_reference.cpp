/*Here we are going to discuss 4  Eaxmples-
1. Value type, Call by Value
2. Value Types, Call by Reference
3. Reference Types, Call by Value
4. Reference Types, Call by Reference

// Discussing 1st example of Value type, Call by Value
#include<iostream>
using namespace std;
void swap(int a,int b){
    cout<<a<<" "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;

    cout<<a<<" "<<b<<endl;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);

    cout<<a<<" "<<b;
}*/

/*Here above we pass the value of a and b from main function to swap name function there 
  will swaping happen between a and b variable value but that not refelct in the main 
  function a and b variable because original a and b variable is not pass to the swap function 
  only there value pass and a and b variable of swap function is different from main function
  a and b variable 

// Discussing 2nd example of Value type, Call by Reference
#include<iostream>
using namespace std;
void swap(int *p,int *q){   //Here this *p and *q is a pointer which sotre the address of a and b variable adn here we are dereferencing the variable a and b
    cout<<*p<<" "<<*q<<endl;  //The address of a stored in p and the value of a is access by *p beacuse jo address store hoga p me uss address jo value hogi usse *p access kar payega  
    int temp=*p;
    *p=*q;
    *q=temp;

    cout<<*p<<" "<<*q<<endl;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(&a, &b); //Here this &a and &b means that we pass reference value to the function means the address of a and b varibale is pass to the swap function
    cout<<a<<" "<<b;
}*/
// swap(&a, &b);  It is example of call by reference
/*Here from main function we pass the address of variable a and b becasue we call as &a and &b 
  and in swap function dereferencing of vartiable a and b happen means p is the pointer which 
  points the variable a and store the address of a variable and *p store the value of variable
  a and *q store the value of variable b, so if do any changes in value or address of *p and *q 
  that will reflect in varibale a and b because p and q store the address of a and b means
  p is pointing to a and q is pointing to b

  // Discussing 3rd example of Reference Types, Call by Value
#include<iostream>
using namespace std;
void swap(int *p,int *q){   //Here the copy of address of r1 and r2 is is pass from main function and is get sotred in p and q, in Value type, Call by Reference the address is pass pass from the main function to swap function but in this the copy of address is pass from main to swap function  
    cout<<*p<<" "<<*q<<endl;
    int temp=*p;
    *p=*q;
    *q=temp;

    cout<<*p<<" "<<*q<<endl;
    
}
int main(){
    int a=10,b=20;
    int* r1=&a;  //here r1 is pointing to varibale a and r1 store the address of variable a and r2 store the address of variable b 
    int* r2=&b;  //Here the *r1 store the value of variable a and *r2 store the value of variable b
    swap(r1, r2); //Here the address of a and b are passed as value which are stored in r1 and r2, so it is a call by value

    cout<<a<<" "<<b;
}*/

// Discussing 4th example of Reference Types, Call by Reference

#include<iostream>
using namespace std;
void swap(int **p,int **q){    //Here p stores 1008 and q stores 1012 and *p means the the value stored at 1008 address that is 1000 and **p means the value stored at address 1000 that is 10  
    cout<<**p<<" "<<**q<<endl;  //Here the value stored in p is the address oif r1 which is 1008 and value at address 1008 is access by *p which is 1000 and value at address 1000 is access by **p which is 10  and same procedure happen with q then here 10 and 20 will get print out
    int* temp=*p;  //Here the 1000 is stored in temp
    *p=*q;         // here the address stored in q is 1012 and the value at address 1012 is access by *q which is 1004 so 1004 is intialise in *p
    *q = temp;     // Now the 1000 is intialsie at *q 
    cout<<**p<<" "<<**q<<endl;  //We know *p is 1004 and value at 1004 address is access by **p which is 20 and *q is 1000 and value at 1000 address is access by **q which is 10 so 20 and 10 will get print out here
    //Only the values at address 1012 and 1008 are get swap and here is no swaping happen at the address of a and b so the value a and b will remain as it is  
}
int main(){
    int a=10,b=20;
    int* r1=&a;  //Here the r1 sotres the address of a let 1000, r1 is a pointer which stores the address of a varibale and the value stored at the address that is stored in r1 is access by * r1
    int* r2=&b;  //Here the r2 sotres the address of b let 1004
    swap(&r1, &r2); //Here we are doing Call by Reference and Here are passing the address of r1 and r2 and let r1 address 1008 and r2 address is 1012
    cout<<a<<" "<<b;  //here 10 and 20 will get print out
}
