import unittest
import adapter

class DefaultTest(unittest.TestCase):
    def testFootballStadium(self):
        trainingField= adapter.PractiseGround()
        footballField=adapter.FootballStadium()
        adap=adapter.StadiumAdapter(footballField)
        given1=trainingField.seats()
        expected1=False
        self.assertEqual(given1, expected1)
        given2 =trainingField.hasfood()
        expected2= "No food available"
        self.assertEqual(given2, expected2)
        given3=footballField.seats()
        expected3=True
        self.assertEqual(given3, expected3)
        given4=footballField.hasfood()
        expected4="Food is available"
        self.assertEqual(given4, expected4)

class AdapterTest(unittest.TestCase):
    def testFootballStadium(self):
        trainingField= adapter.PractiseGround()
        footballField=adapter.FootballStadium()
        adap=adapter.StadiumAdapter(footballField)
        given=adap.seats()
        expected=True
        self.assertEqual(given, expected)
        given1=adap.hasfood()
        expected1="Food is available"
        self.assertEqual(given, expected)

          
    
if __name__ == '__main__':
    unittest.main()