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
        return("The fans are football fans")

    def seats(self)->bool:
        return True

    def hasfood(self)->str:
        return("The Football stadium has food")

class PractiseGround(TrainingGround):
    
     def seats(self)->bool:
        return False

     def hasfood(self)->str:
        return ("Practise grounds have no food")

class StadiumAdapter(TrainingGround):       
    _Stadium = Stadium()
    def __init__(self, stadium)->None:
        self._Stadium = stadium

    def seats(self)->bool:
        return self._Stadium().seats()
        
    def hasfood(self)->str:
        return self._Stadium().hasfood()


