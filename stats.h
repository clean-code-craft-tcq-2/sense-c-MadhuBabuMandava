
struct Stats
{
  float average;
  float min;
  float max;
};
struct Stats compute_statistics(float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
void emailAlerter(void);
void ledAlerter(void);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
