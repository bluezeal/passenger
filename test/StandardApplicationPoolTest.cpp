#include "tut.h"
#include "ApplicationPool.h"
#include "Utils.h"

using namespace Passenger;

namespace tut {
	struct StandardApplicationPoolTest {
		ApplicationPoolPtr pool, pool2;
		
		StandardApplicationPoolTest() {
			pool = ptr(new StandardApplicationPool("../bin/passenger-spawn-server"));
			pool2 = pool;
		}
	};

	DEFINE_TEST_GROUP(StandardApplicationPoolTest);

	#define USE_TEMPLATE
	#define APPLICATION_POOL_TEST_START 0
	#include "ApplicationPoolTestTemplate.cpp"
}
