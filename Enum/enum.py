"""
Enumarations in python are implemented by using the module named "enum". 
Enumerations are created using classes. Enums have names and values associated with them.

#Properties
- Enums can be displayed as string or repr.
- Enums can be checked for their types using type();
- The "name" keyword is used to display the name of the enum member. 


"""

'''Basic Example'''

from enum import enum 

class Season(Enum):
    SPRING = 1
    SUMMER = 2
    AUTUMN = 3
    WINTER = 4


if __name__ == "__main__":
    print(Season.SPRING)
    '''Print name of enum member using "name" keyword'''
    print(Season.SPRING.name)
    print(Season.SPRING.value)
    print(type(Season.SPRING))
    print(Season(2).name)
    '''Printing enum member as repr'''
    print(repr(Season.SPRING))
    '''Printing all enum member using "list" keyword'''
    print(list(Season))