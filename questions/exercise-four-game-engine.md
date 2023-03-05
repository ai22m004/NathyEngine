- What is a precompiled header? Name pros and cons:

A header used for multiple files with many standard libraries to speed up the building process. The code is then precompiled, which makes the initial build slower and following builds faster. 

Pros: Makes building faster after initial build and its easier and makes files easily readable.

Cons: Has to be included everywhere and needs some tweakings of settings. We lose some information on libraries used in code.

- Describe the layer of abstraction with your own words:

The layer of abstraction is what we implement with these different events to map the different cases we use with our engine. So different actions (moved mouse, pressed key) are then used/referred as callbacks.

- Name the SOLID principles and describe them briefly:

S: Single Responsibility 
Every class should have only one single responsibility.

O: Open-Closed
Open for extensions, closed for modification

L: Liskov Substitution
Every subclass should be substitutable for its parent class.

I: Interface Segregation
Used to have different interfaces for different purpose so that only minimal requierements are presented and implemented.

D: Dependency Injection
With depedency injection every implementation can be substituted to have different modules for the implementation.