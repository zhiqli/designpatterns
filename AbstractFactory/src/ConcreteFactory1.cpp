#include <iostream>
#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"

using namespace std;

ConcreteFactory1::ConcreteFactory1()
:AbstractFactory()
{
    cout << "ConcreteFactory1 Create" << endl;
}

ConcreteFactory1::~ConcreteFactory1()
{
    if (NULL != m_ProductA)
    {
        delete m_ProductA;
        m_ProductA = NULL;
    }

    if (NULL != m_ProductB)
    {
        delete m_ProductB;
        m_ProductB = NULL;
    }

    cout << "ConcreteFactory1 Destory" << endl;
}

void ConcreteFactory1::CreateProductA()
{
    m_ProductA = new ProductA1();
    cout << "ConcreteFactory1 CreateProductA" << endl;
}

void ConcreteFactory1::CreateProductB()
{
    m_ProductB = new ProductB1();
    cout << "ConcreteFactory1 CreateProductB" << endl;
}
