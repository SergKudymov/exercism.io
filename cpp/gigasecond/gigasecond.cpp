#include "gigasecond.h"
#include <string>

using namespace boost::posix_time;	

ptime gigasecond::advance(ptime time_to_start) {
	return time_to_start + seconds(GIGASECOND);
}