#  Problem F - Blood Transfusion (easy version) 

The determining factor of the solution is the occurrence of each blood type in the two arrays so we should start by calculating that.

**We know that the injured people of blood type O can only receive from O donors**

Intuitively, we can safely start by saving the first category of injured people: people with blood type O. If injuredO > donorO then we know for sure that it's impossible to save all the injured people.

We update donorO accordingly.

**We know that injured people of blood type A can receive from blood type A donors as well as blood type O donors**
**Symmetrically, injured people of blood type B can receive from blood type B donors as well as blood type O donors**   

Starting by saving the people with blood type A or the people of blood type B does not matter. (Try all the possible cases)

We stop if the value of (donorO + donorA) < injuredA or if (donorO + donorB) < injuredB

**Note: don't forget to always update the value of donorO**

**We know that people of blood type AB can receive from any donor**

If O, A, B injured people are saved then the AB injured people will be saved since size(injured) = size(donors) and every donor left can donate to the AB injured people.
