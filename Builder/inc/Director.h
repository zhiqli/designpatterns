#ifndef __DIRECTOR__H__
#define __DIRECTOR__H__

#include "Builder.h"

class Director
{
public:
    explicit Director();
    ~Director();

public:
    void Construct();

private:
    Builder *m_pBuilder;
};

#endif
