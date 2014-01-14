#ifndef __CONCRETEFACTORY__H__
#define __CONCRETEFACTORY__H__

#include "AbstractFactory.h"

class ConcreteFactory1 : public AbstractFactory
{
public:
    ConcreteFactory1();
    virtual ~ConcreteFactory1();

public:
    void CreateProductA();
    void CreateProductB();
};

#endif
