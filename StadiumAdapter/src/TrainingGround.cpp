#include <string>
#include "../include/trainingGround.h"

using namespace std;

class trainingGround : public TrainingGround {
    public:
        bool seats(){
            return false;
        };
        
        string hasFood(){
            return "Training Grounds have no food";
        };

};