#ifndef _LINUX_HOTPLUG_H
#define _LINUX_HOTPLUG_H

extern bool gpu_idle;
extern short idle_counter;
extern u64 boostpulse_duration_val;
extern u64 boostpulse_endtime;

u64 get_cpu_idle_time(unsigned int cpu, u64 *wall, int io_busy);
ssize_t show_array(unsigned int value, unsigned int type, char *buf);
ssize_t show_value(unsigned int value, unsigned int type, char *buf);
bool store_array(unsigned int value, unsigned int type, const char *buf);
bool store_value(unsigned int value, unsigned int type, const char *buf);

#endif
