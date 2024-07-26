/*#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
*/
#include "Array.hpp"
#include <iostream>
int main()
{
    try{
    
    //Array<int> defArray;

    //std::cout << "try 01 = >> "<< defArray[0] << std::endl;
    
    Array<unsigned int> defaultArray(10);
    
    std::cout << "Size of defaultArray: " << defaultArray.size() << std::endl;
    
    defaultArray[0] = 5;
    defaultArray[1] = 51;
    defaultArray[2] = 4;
    defaultArray[3] = 32;
    defaultArray[4] = 1;
    defaultArray[9] = 99;
    
    Array<unsigned int> intArray(5);
    
    std::cout << "Size of intArray: " << intArray.size() << std::endl;

    for (unsigned int i = 0; i < intArray.size(); ++i)
        intArray[i] = i + 1;

    std::cout << "defaultArray: ";
    
    for (unsigned int i = 0; i < defaultArray.size(); ++i)
        std::cout << defaultArray[i] << " ";
    
    std::cout << std::endl;

    std::cout << "intArray: ";
    
    for (unsigned int i = 0; i < intArray.size(); ++i)
        std::cout << intArray[i] << " ";
        
    std::cout << std::endl;

    Array<unsigned int> copiedArray = intArray;
    std::cout << "opiedArray: ";
    for (unsigned int i = 0; i < copiedArray.size(); ++i) {
    std::cout << copiedArray[i] << " ";
    }
    std::cout << std::endl;
    
    std::cout<< "test modif Array :" << std::endl;

    intArray[0] = 100;
    std::cout << "intArray[0] now: " << intArray[0] << std::endl;
    std::cout << "copiedArray[0]: " << copiedArray[0] << std::endl;

        
    std::cout << "try >> "<< defaultArray[9] << std::endl;
    std::cout  << copiedArray[5];
    }
     catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}