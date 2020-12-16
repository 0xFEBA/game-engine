#include <stdio.h>
#include "Logger.h"
int main()
{
	Logger::Init();
	CORE_INFO("Hello {} world", 123);
	return 0;
}
