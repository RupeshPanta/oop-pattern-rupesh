#include <iostream>
#include <string>
#include "Staidum.cpp"
#include "TrainingGround.cpp"
#include "StadiumAdapter.cpp"
#include "gtest/gtest.h"

using namespace std;

TEST(BaseStadium, Adapter){
  TrainingGround *trainingField = new trainingGround();
  FootballStadium *footballField = new FootballStadium();
  TrainingGround *adapter = new StadiumAdapter(footballField);
   ASSERT_EQ(adapter->seats(), true);
   ASSERT_EQ(adapter->hasFood(), "The stadium has food");

}

TEST(BaseStadium, BaseOut){
  TrainingGround *trainingField = new trainingGround();
  FootballStadium *footballField = new FootballStadium();
  TrainingGround *adapter = new StadiumAdapter(footballField);
   ASSERT_EQ(trainingField->seats(), false);
   ASSERT_EQ(trainingField->hasFood(), "Training Grounds have no food");
   ASSERT_EQ(footballField->seats(), true);
   ASSERT_EQ(footballField->hasFood(), "The stadium has food");
   ASSERT_EQ(adapter->seats(), true);
   ASSERT_EQ(adapter->hasFood(), "The stadium has food");

}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}