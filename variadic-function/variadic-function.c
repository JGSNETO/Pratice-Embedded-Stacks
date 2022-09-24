//Syntax
// #include<stdarg.h>
// type function-name(data-type variable-name, ...){}

#include<stdio.h>
#include<stdarg.h>

int SumNumbers(int numberOfArgument, ...){
    int sum = 0;

    //Declaring pointer to the argument list
    va_list ptr;

    //Initializing arguments to the list pointer
    va_start(ptr,numberOfArgument);
    for(int i=0; i<numberOfArgument;i++){
        //Accessing current variable and pointing to next one 
        sum += va_arg(ptr,int);
    }
    //Ending argument list traversal
    va_end(ptr);

    return sum;
}

int main(){

    printf("\n 1 + 2 = %d ",
           SumNumbers(5, 1, 2, 3, 4, 5));
 
    printf("\n 3 + 4 + 5 = %d ",
           SumNumbers(3, 6, 4, 5));

    return 0;
}