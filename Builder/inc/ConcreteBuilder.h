#ifndef __CONCRETEBUILDER__H__
#define __CONCRETEBUILDER__H__

#include "Builder.h"

class ConcreteBuilder : public Builder
{
public:
    explicit ConcreteBuilder();
    virtual ~ConcreteBuilder();

public:
    void BuildPart();
    Product* GetResult();
};

#endif
