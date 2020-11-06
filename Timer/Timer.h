#ifndef TIMER_H
#define TIMER_H

#include "Utility.h"

// Timer Strcut
typedef struct Timer
{
  /**
   * Int counter of this timer.
   */
  unsigned int counter;
  
  /**
   * Value to set in case of autoReset
   */
  unsigned int originalValue;
  
  /**
   * Decide if autoReset or not
   */ 
  bool autoReset;
  
  /**
   * Callback to be called at decided event
   */
  void (*callback)();
} Timer;

// Prototypes definitions
Timer* newTimer(unsigned int counter, void (*callback)(), bool autoReset);

/**
 * Get the Timer pointer inside a Node
 */
#define GET_TIMER(node) \
    ((Timer*)(node->data))


#endif // !TIMER_H