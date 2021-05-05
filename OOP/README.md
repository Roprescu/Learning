# OOP

- Basics
- Constructors/Destructors
- Inheritance
- Access Modifiers
- Overload/Override
- Virtual
- Interface
- Abstract
- Rule of 3/5s
- Problems
  - Diamond Problem

https://info.keylimeinteractive.com/the-four-pillars-of-object-oriented-programming

# The Four Pillars of Object Oriented Programming

### Encapsulation
Encapsulation is accomplished when each object maintains a private state, inside a class. Other objects can not access this state directly, instead, they can only invoke a list of public functions. The object manages its own state via these functions and no other class can alter it unless explicitly allowed. In order to communicate with the object, you will need to utilize the methods provided. One way I like to think of encapsulation is by using the example of people and their dogs. If we want to apply encapsulation, we do so by encapsulating all “dog” logic into a Dog class. The “state” of the dog is in the private variables playful, hungry and energy and each of these variables has their respective fields. 

There is also a private method: bark(). The dog class can call this whenever it wants, and the other classes can not tell the dog when to bark. There are also public methods such as sleep(), play() and eat() that are available to other classes. Each of these functions modifies the internal state of the Dog class and may invoke bark(), when this happens the private state and public methods are bonded. 

### Abstraction
Abstraction is an extension of encapsulation. It is the process of selecting data from a larger pool to show only the relevant details to the object. Suppose you want to create a dating application and you are asked to collect all the information about your users. You might receive the following data from your user: Full name, address, phone number, favorite food, favorite movie, hobbies, tax information, social security number, credit score. This amount of data is great however not all of it is required to create a dating profile. You only need to select the information that is pertinent to your dating application from that pool. Data like Full name, favorite food, favorite movie, and hobbies make sense for a dating application. The process of fetching/removing/selecting the user information from a larger pool is referred to as Abstraction. One of the advantages of Abstraction is being able to apply the same information you used for the dating application to other applications with little or no modification. 

### Inheritance
Inheritance is the ability of one object to acquire some/all properties of another object. For example, a child inherits the traits of his/her parents. With inheritance, reusability is a major advantage. You can reuse the fields and methods of the existing class. In Java, there are various types of inheritances: single, multiple, multilevel, hierarchical, and hybrid. For example, Apple is a fruit so assume that we have a class Fruit and a subclass of it named Apple. Our Apple acquires the properties of the Fruit class. Other classifications could be grape, pear, and mango, etc. Fruit defines a class of foods that are mature ovaries of a plant, fleshy, contains a large seed within or numerous tiny seeds. Apple the sub-class acquires these properties from Fruit and has some unique properties, which are different from other sub-classes of Fruit such as red, round, depression at the top. 

### Polymorphism
Polymorphism gives us a way to use a class exactly like its parent so there is no confusion with mixing types. This being said, each child sub-class keeps its own functions/methods as they are. If we had a superclass called Mammal that has a method called mammalSound(). The sub-classes of Mammals could be Dogs, whales, elephants, and horses. Each of these would have their own iteration of a mammal sound (dog-barks, whale-clicks).
