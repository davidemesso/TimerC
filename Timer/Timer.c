#ifndef TIMER_C
#define TIMER_C

#include <stdlib.h>
#include "Timer.h"

/**
 * Allocates a new Timer and returns it.
 * 
 * counter: Timer counter value
 * callback: Pointer to function raisable as event
 * autoreset: Boolean indicating if autoreset or not
 */
Timer* newTimer(unsigned int counter, void (*callback)(), bool autoReset)
{
    Timer* result = 
        (Timer*)malloc(sizeof(Timer));

    result->counter       = counter;
    result->originalValue = counter;
    result->autoReset     = autoReset;
    result->callback      = callback;
    
    return result;
}


#endif // !TIMER_C