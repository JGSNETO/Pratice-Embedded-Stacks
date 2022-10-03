/*
Enum is a user data type in C. It is mainly used to assign names to integral const, the names make a program
easy to read and maintain. 

Syntax: enum(keyword) enum_variable {enumerators(List of const separeted by commas)}
E.G: enum days-of-week {sun, mon, tue, wed, thu, fri, sat};
instantiation: enum days-of-week day;
operation: day=wed; 
*/

#include <stdio.h>

enum week {Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main(){

    enum week day1, day2;
    day1 = Wed;
    day2 = Thur;
    if(day1 < day2){
        printf("Antes\n");
    }else{
        printf("Depois");
    }
    printf("%d", day1);
    return 0;
}