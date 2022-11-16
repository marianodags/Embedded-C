#include <stdio.h>


int main()
{
  float num = 17.6; // address of num is 1000
    float *p;
    p = &num;  // value of p pointer is 1000, which is the address of num.

    /*4.a. What value is p++?*/
    // p++; // after post-incrementing, the value of p is (1000 + 1(4 bytes)) = 1004;
    
    /*4.b. Define in words what *p and &p mean.*/
    /*
    *p could mean one thing depending on the context. First, when declaring a pointer, *p means 
    a variable named p is being declared as a pointer. Second, when accessing the value of the 
    variable it is pointing to, * operator should be used. So the following line of code prints 17.6.*/
    printf("*p = %f\n", *p);
    /*&p means you are accessing the address of the pointer. So the code below prints 1004.*/
    printf("&num = %p\t&p = %p\n",&num, &p);
    
    /*4.c. Is there a way to determine the values of *p and &p given the info mentioned?*/
    /*The demonstration above shows how the values *p and &p can be known by printing.*/	
	return 0;
}

