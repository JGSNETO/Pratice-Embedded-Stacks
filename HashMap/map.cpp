/*
Maps are a associative containers that store elements in a mapped fashion. 
Each element has a key value and a mapped value. No two mapped values can have the same key value;

Functions:
- Begin: Returns an iterator to the first element in the map
- End: Returns an iterator to the theoretical element that follows the last element in the map
- Size: Returns the number of elements in the map
- Max_size: Returns the maximum number of elements that the map can hold
- Empty: Return whether the map is empty
- Pair insert(keyvalue, mapvalue): Adds a new element to the map
- Erase(iterator position): Removes the element at the position pointed by the iterator
- Clear: Removes all elements from the map
*/
#include<iostream>
#include<iterator>
#include<map>
int main(){

    std::map<char, int> numbers;

    numbers['A'] = 1;
    numbers['B'] = 2;
    numbers['C'] = 3;
    
    std::map<char, int>::iterator it;
    for(it=numbers.begin(); it!=numbers.end(); ++it){
        std::cout << it->first << "=>" << it->second << '\n'; 
    }
    return 0;
}