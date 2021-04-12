#include "Socket.h"
#include "gtest/gtest.h"

using namespace std;

TEST(Socket, classTest) {
      int voltage, live, neutral, earth;
      voltage = 230;
      live = 1;
      neutral = -1;
      earth = 0;
      Socket socket;
      ASSERT_EQ(socket.voltage(), voltage);
      ASSERT_EQ(socket.live(), live);
      ASSERT_EQ(socket.neutral(), neutral);
      ASSERT_EQ(socket.earth(), earth);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}