#include<iostream>
#include "header.hh"

/*No usar "using namespce std;"*/



int main()
{
    
    int* numArr{new int[3]{
        1, 2, 3
    }};

   for(int i{}; i < 3; i++)
   {
       std::cout << &numArr[i] << std::endl;
   }


    /*for(int& n : numArr)
    {
        std::cout << n << std::endl;
    }*/
    
    /*
    int numberInteger{1}; //Así se inicializa apropiadamente algo en C++

    int numberIntegerr{}; //Significa que el valor es 0 de inicio.

    //float numberFloat{5.f }; //Tambien puedes inicializar floats

    //const char* stringChar{"My string char"}; //Inicializando un charizard

    //char chararray[]{"char array"};

    //std::string myString{"My string from STL "};
    
    int *numPointerArr
    {
        new int[3]
        {
            1, 2, 3
        }
    };

    std::cout << *numPointerArr << std::endl;

    std::cout << numberInteger << std::endl; 
    std::cout << numberFloat << std::endl;
    std::cout << stringChar << "Size: " << sizeof(stringChar) << std::endl;
    std::cout << chararray << "Size: " << sizeof(chararray) << std::endl;
    std::cout << myString << "Size: " << sizeof(myString) << std::endl;
   

   for(int i{}; i < 5; i++)
   {
       std::cout << stringChar + 1 << std::endl;
   }

   for(int i{}; i < 3; i++)
   {
       std::cout << *(numPointerArr + i) << std::endl;
   }

    std::cout<< "Suma: " << Add(1.0f, 2.5f) ;
    
    int number{5};
    int number2{number};
    int& numberRef{number};
    int* numberPointer{&number};
    int** numberPointer2{&numberPointer};

   std::cout << "number variable: " << number << std::endl;
    std::cout << "number2 variable: " << number2 << std::endl;
    std::cout << "number reference: " << numberRef << std::endl;
    std::cout << std::endl;
    numberRef++;
    std::cout << "number variable: " << number << std::endl;
    std::cout << "number2 variable: " << number2 << std::endl;
    std::cout << "number reference: " << numberRef << std::endl;
    std::cout << std::endl;
    std::cout << "number variable: " << &number << std::endl;
    std::cout << "number2 variable: " << &number2 << std::endl;
    std::cout << "number reference: " << &numberRef << std::endl;
    numberRef = number2;
    std::cout << std::endl;
    std::cout << "number variable: " << number << std::endl;
    std::cout << "number2 variable: " << number2 << std::endl;
    std::cout << "number reference: " << numberRef << std::endl;
    std::cout << std::endl;
    std::cout << "number variable: " << &number << std::endl;
    std::cout << "number2 variable: " << &number2 << std::endl;
    std::cout << "number reference: " << &numberRef << std::endl;


    std::cout << std::endl;
    std::cout << "number Pointer memory: " << numberPointer << std::endl;
    std::cout << "number pointer value: " << numberPointer << std::endl;
    std::cout << "number pointer reference: " << &numberPointer << std::endl;
    numberPointer = &number2;
    std::cout << std::endl;
    std::cout << "number Pointer memory: " << numberPointer << std::endl;
    std::cout << "number pointer value: " << numberPointer << std::endl;
    std::cout << "number pointer reference: " << &numberPointer << std::endl;
    std::cout << std::endl;
    std::cout << "pointer to pointer: " << **numberPointer2;*/

    //int number;
    //int number2{number};
    //int& numberRef{number};
    //int* numberPointer{&number};

    //int *newPointer{new int (2)};
    

    //std::cout << *newPointer << std::endl;
    //std::cout << sizeof(number);
    //std::cout << sizeof(*newPointer);
    //delete newPointer;
    
    //std::cout << *newPointer;
    //std::cout << "number value: " << number << std::endl;
    //std::cout << "number memory: " << &number << std::endl;
    //std::cout << "pointer variable inside memory" << numberPointer << std::endl;
    //std::cout << "pointer memory" << &numberPointer << std::endl;

    //std::cout << "Hi" << std::endl;
    std::cin.get();
    return 0;
}

