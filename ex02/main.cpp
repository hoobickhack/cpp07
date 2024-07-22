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
    Array<unsigned int> defaultArray(5);
    
    std::cout << "Size defaultArray: " << defaultArray.size() << std::endl;
    
    defaultArray[0] = 5;
    defaultArray[1] = 51;
    defaultArray[2] = 4;
    defaultArray[3] = 32;
    defaultArray[4] = 1;
    
    Array<unsigned int> intArray(10);
    
    std::cout << "Size intArray: " << intArray.size() << std::endl;
    
    Array<const unsigned int> constArray(3);
    
    std::cout << "Size constArray: " << constArray.size() << std::endl;
    
    std::cout << std::endl;

    std::cout << "Contents defaultArray: ";
    
    for (unsigned int i = 0; i < defaultArray.size(); ++i)
        std::cout << defaultArray[i] << " ";
        
    std::cout << std::endl;
    
    std::cout << "Contents intArray: ";

    for (unsigned int i = 0; i < intArray.size(); ++i)
        intArray[i] = (i + 1) * 2;

    for (unsigned int i = 0; i < intArray.size(); ++i)
        std::cout << intArray[i] << " ";
        
 
    std::cout << std::endl;

    Array<unsigned int> copiedArray = intArray;

    std::cout << "Contents copiedArray: ";

    for (unsigned int i = 0; i < copiedArray.size(); ++i)
        std::cout << copiedArray[i] << " ";

    std::cout << std::endl;

    std::cout << std::endl;
 
    intArray[0] = 200;

    std::cout << "After modification, intArray[0]: " << intArray[0] << std::endl;
    std::cout << "After modification, copiedArray[0]: " << copiedArray[0] << std::endl;
   
    std::cout << std::endl;
    try
    {
        intArray[7] = 5;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}