#include <string>
#include "../include/stadium.h"

using namespace std;

class FootballStadium : public Stadium{
    public:
    string fans(){
        return "The fans are football fans";
    };
    bool seats(){
        return true;
    };
    string hasFood(){
        return "The stadium has food";
    };
};