#ifndef __ABSTREACTPRODUCTA__H__
#define __ABSTREACTPRODUCTA__H__

#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{
public:
    AbstractFactory(void);
    virtual ~AbstractFactory(void);

public:
    virtual void CreateProductA() = 0;
    virtual void CreateProductB() = 0;

protected:
    AbstractProductA *m_ProductA;
    AbstractProductB *m_ProductB;
};

#endif
