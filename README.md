## What it is all about? 
Nothing much. Just a simplified representation of garbage collection of Python and written in C.
## Overview of Garbage Collection in Python
Python uses two main techniques in managing garbages.
1. **Reference Counting:** During Python Runtime, it counts how many references does an object currently has.
     The reference count of an object tells the Python Runtime if a particular object is active and when an object's reference count drops to zero, it is automatically deallocated, as it is no longer in use.
   
2. **Generational Garbage Collection:** Each objects are categorized based on their lifetime. Where Gen 0 is a placeholder for newly created objects followed by Gen 1 where a placeholder for objects who survived in Gen 0 and lastly Gen 2 where objects are the oldest typically for modules.
## Freeing Objects in the Memory
Python uses heap memory to manage objects and variables dynamically. However, function calls and local variables are managed using a call stack. 
