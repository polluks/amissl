#include <time.h>
#include <internal/amissl.h>

extern long __gmt_offset;
extern struct tm *gmtime_r(const time_t *t,struct tm *utim);

struct tm *localtime(const time_t *t)
{
	SETUPSTATE();
	time_t time = *t - __gmt_offset * 60;
	gmtime_r(&time,&state->localtime_var);
	return &state->localtime_var;
}
