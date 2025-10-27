struct rtcdate {
  uint second;
  uint minute;
  uint hour;
  uint day;
  uint month;
  uint year;
#ifdef PROC_TIMES
# error Remember to put multi-include protection in here.
	unsigned int ticks_total;//this will represent the total number of time ticks that the process has run
	unsigned int ticks_begin;//this will be used to help calculate the total number of ticks the process has used
	unsigned int sched_times;//this will be used to count the number of times the process has been sceduled to run*/
#endif // PROC_TIMES
};
