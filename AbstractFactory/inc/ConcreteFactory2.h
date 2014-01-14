#ifndef __CONCRETEFACTORY2__H__
#define __CONCRETEFACTORY2__H__

#include "AbstractFactory.h"

class ConcreteFactory2 : public AbstractFactory
{
public:
    ConcreteFactory2();
    virtual ~ConcreteFactory2();

public:
    void CreateProductA();
    void CreateProductB();
};

#endif
