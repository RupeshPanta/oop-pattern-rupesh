import abc

class Stadium(abc.ABC):
    @abc.abstractmethod
    def fans(self)->str:
        pass
    def seats(self)->bool:
        pass
    def hasfood(self)->str:
        pass

class TrainingGround(abc.ABC):
    @abc.abstractmethod
    def seats(self)->bool:
        pass
    def hasfood(self)->str:
        pass

class FootballStadium(Stadium):

    def fans(self)->str:
        return("Fans are cheering")

    def seats(self)->bool:
        return True

    def hasfood(self)->str:
        return("Food is available")

class PractiseGround(TrainingGround):
    
     def seats(self)->bool:
        return False

     def hasfood(self)->str:
        return ("No food available")

class StadiumAdapter(TrainingGround):       
    #aStadium = Stadium()
    def __init__(self, stadium)->None:
        self.aStadium = stadium

    def seats(self)->bool:
        return self.aStadium.seats()
        
    def hasfood(self)->str:
        return self.aStadium.hasfood()


