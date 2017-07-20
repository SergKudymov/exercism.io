#ifndef GIGASECOND_H
#define GIGASECOND_H
#include <boost/date_time/posix_time/posix_time.hpp>

using namespace boost::posix_time;

namespace gigasecond {
	static const int GIGASECOND = 1000000000;
	ptime advance(ptime time_to_start);
}

#endif