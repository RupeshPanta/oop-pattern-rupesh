# OOP Design

- Decorator pattern is a design that allows behavior to be added to an individual object dynamically without affectin the behavior of other objects of the same class 

- Useful for following the Single Responsibility principle, which allows functionality to be divided between classes with unique areas of concern 
 - A little more efficient than subclassing, because we can change the definition of one existing object without creating a new object 

 ## What problems does it solve

 (Decorator is known to be to solve design problems and design flexible and reusable OO software)
 
 - Flexible alternative to subclassing for extending functionality 
 - When using subclassing, difference subclasses are extended in different ways, but an extension is bounf to the class at compile time and cant be changed at run time 

 ## What solution?

 - Perform additional functionality before/after forwarding a request 
 - Decorators have the same super type as the object they decorate 
