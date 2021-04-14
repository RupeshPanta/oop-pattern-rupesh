#include <string>
#include "../include/trainingGround.h"
#include "../include/stadium.h"

using namespace std;

class StadiumAdapter : public TrainingGround{
    Stadium *base;
    public: 
        StadiumAdapter(Stadium *baseStadium){
            base = baseStadium;
        }
        
        
        string hasFood(){
            return base->hasFood();
        }
        bool seats(){
            return base->seats();
        }
};