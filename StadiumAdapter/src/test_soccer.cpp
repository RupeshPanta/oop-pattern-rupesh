#include <iostream>
#include <string>
#include "Staidum.cpp"
#include "TrainingGround.cpp"
#include "StadiumAdapter.cpp"
#include "gtest/gtest.h"

using namespace std;

TEST(BaseStadium, BaseOut){
  TrainingGround *trainingField = new trainingGround();
  FootballStadium *footballField = new FootballStadium();
  TrainingGround *adapter = new StadiumAdapter(footballField);
   ASSERT_EQ(adapter->seats(), true);
   ASSERT_EQ(adapter->hasFood(), "The stadium has food");

}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}