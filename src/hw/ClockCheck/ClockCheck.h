#ifndef CLOCKCHECK_H
#define CLOCKCHECK_H

#include <time.h>

#pragma once

class ClockCheck
{
private:
    time_t prevSec;


public:
    ClockCheck();
    virtual ~ClockCheck();
    bool isUpdate();
};

#endif