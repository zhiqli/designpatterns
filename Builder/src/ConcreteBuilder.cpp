#include <iostream>
#include "ConcreteBuilder.h"

using namespace std;

ConcreteBuilder::ConcreteBuilder()
:Builder()
{
    cout << "ConcreteBuilder Create" << endl;
}

ConcreteBuilder::~ConcreteBuilder()
{
    if (NULL != m_pProduct)
    {
        delete m_pProduct;
        m_pProduct = NULL;
    }
    cout << "ConcreteBuilder Destory" << endl;
}

void ConcreteBuilder::BuildPart()
{
    cout << "Product has be Build" << endl;
    m_pProduct = new Product();
}

Product* ConcreteBuilder::GetResult()
{
    cout << "Return Product" << endl;
    return m_pProduct;
}
