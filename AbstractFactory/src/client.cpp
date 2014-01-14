#include <iostream>
#include <stdlib.h>
#include "AbstractFactory.h" 
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

using namespace std;

int main(int argc, char **argv)
{
    AbstractFactory *factory;

    if (2 != argc)
    {
        cout << "usage: client 1|2" << endl;
        return -1;
    }
    
    int chose = atoi(argv[1]);
    
    if (1 == chose)
    {
        factory = new ConcreteFactory1();
        factory->CreateProductA();
        factory->CreateProductB();
    }
    else if(2 == chose)
    {
        factory = new ConcreteFactory2();
        factory->CreateProductA();
        factory->CreateProductB();
    }
    else
    {
        cout << "usage: client 1|2" << endl;
        return -1;
    }

    if (NULL != factory)
    {
        delete factory;
        factory = NULL;
    }
    return 0;
}
