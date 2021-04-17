import unittest
import adapter

class AdapterTest1(unittest.TestCase):
    def testFootballStadium(self):
        trainingField= adapter.PractiseGround()
        footballField=adapter.FootballStadium()
        adap=adapter.StadiumAdapter(footballField)
        given=adap.seats()
        expected=True
        self.assertEqual(given, expected)

          
# class AdapterTest2(unittest.TestCase):
#     def testSmallDog(self):
#         sizesmall:str= bridge.small()
    
if __name__ == '__main__':
    unittest.main()