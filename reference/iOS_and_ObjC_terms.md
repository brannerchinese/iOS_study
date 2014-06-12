## iOS and Objective C terms

### Objective C terms

 1. **argc**, **argv**: http://pages.cs.wisc.edu/~cs354-1/onyourown/C.argv.html

### iOS structural terms

 1. **window**: top object in **view** hierarchy; instance of `UIWindow`
 1. **modal**: one type of view; "Interrupt the regular flow of the app to allow a user to perform some kind of action"
 1. **action**: piece of code connected to event in app
 1. **outlet**: "handle" for code to access interface object
 1. **view controller**: manages individual views; one of these must always be **initial view controller**.
 1. **control**: interface element allowing user to perform actions; creates **control event**. Types:
   2. **touch and drag**
   2. **edit**
   2. **change value**
 1. **navigation controller**: manages presentation of view controllers in **navigation stack**
 1. **seque**: connection between view controllers. Types:
   2. **push**
   2. **modal**: not added to navigation stack and so doesn't have navigation bar unless it is embedded in one
   2. **custom**
   2. **unwind**: "allows users to go from a given scene back to a previous scene, and it provides a place for you to add your own code that gets executed when users navigate between those scenes"
 1. **constraint**: rule for relating one element to another. Types:
   2. position
   2. size
 1. **target-action**: the sending of a message from one object to another, triggered by a specific event
 1. **delegation**: one object in an app acting on behalf of, or in coordination with, another; examples include child object communicating with a parent
 1. **Foundation Kit**: the framework providing the most important base classes (NS-). Provides:
   2. value classes: basic datatypes, representing scalar values; more efficient than the primitive types they encapsulate
   2. collection classes: datatypes for other objects
     3. NSArray
     3. NSSet
     3. NSDictionary
 1. singleton class: class that always returns the same instance
 1. iOS class:
   2. interface: occurs in `.h` file; "specifies exactly how a given type of object is intended to be used by other objects"
   2. implementation: occurs in `.m` file; "includes the executable code for each method declared in the interface"
 1. instance method: marked with `-`; can be called on an object of the class
 1. class method: marked with `+`: can be called on the class itself
 1. in order to test for compilations errors, build with command-b
 
### References

 1. [Foundation Framework Reference](https://developer.apple.com/library/ios/documentation/cocoa/reference/foundation/ObjC_classic/FoundationObjC.pdf)

[end]
