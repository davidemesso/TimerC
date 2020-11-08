# TimerC
A struct that can keep track of a counter (used for time managment) and a function callback, using function pointer, to be called when the timer is over.

It can be used both with autoReset true or false, allowing looping events

Example for use
```C
for (                                 // Cycle the List till it founds NULL
       current = timers;
       current != NULL;
       current = current->next)
  {
    // Decrements every timer
      if ((GET_TIMER(current)->counter)-- == 0)//->counter)-- == 0)
      {
          // If it's over raise event
          if (GET_TIMER(current)->callback != NULL)        
              GET_TIMER(current)->callback();
          
          // If autoReset is true reset at original value
          if (GET_TIMER(current)->autoReset)                     
              GET_TIMER(current)->counter = GET_TIMER(current)->originalValue;
          
          // Removes finished timer
          else
              llRemoveElement(&timers, current);  
      }
  }
  ```
