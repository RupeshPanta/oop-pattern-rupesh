#include <string>
#include "../include/trainingGround.h"

using namespace std;

class trainingGround : public TrainingGround {
        bool seats(){
            return false;
        };
        
        string hasFood(){
            return "Training Grounds have no food";
        };

};