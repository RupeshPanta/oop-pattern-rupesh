#pragma once

#include <string>

class Stadium {
    public: 
        virtual std::string fans()=0;
        virtual bool seats()=0;
        virtual std::string hasFood()=0;
};
