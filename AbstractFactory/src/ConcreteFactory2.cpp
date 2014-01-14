#include <iostream>
#include "ConcreteFactory2.h"
#include "ProductA2.h"
#include "ProductB2.h"

using namespace std;

ConcreteFactory2::ConcreteFactory2()
:AbstractFactory()
{
    cout << "ConcreteFactory2 Create" << endl;
}

ConcreteFactory2::~ConcreteFactory2()
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
    cout << "ConcreteFactory2 Destory" <<endl;
}

void ConcreteFactory2::CreateProductA()
{
    m_ProductA = new ProcductA2();
    cout << "ConcreteFactory2 CreateProcductA" << endl;
}

void ConcreteFactory2::CreateProductB()
{
    m_ProductB = new ProductB2();
    cout << "ConcreteFactory2 CreateProcductB" << endl;
}
