#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    float sum = 0;
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    for(int i=0; i<setlength;i++)
    {
      // Compute sum
      sum+=numberset[i];
      
      //Find min
      if(numberset[i]<s.min){
      s.min = numberset[i];
      }
        
      //find max
      if(numberset[i]>s.min){
      s.max = numberset[i];
      }
    }
    s.average = sum/setlength;
    
    if(s.average>10.2)
    {
        emailAlertCallCount++;
        ledAlertCallCount++;
    }
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
