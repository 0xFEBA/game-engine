cmake_minimum_required(VERSION "3.16.0")
project("game-engine")

set (external_headers
	"thirdparty/spdlog/include"
)

set (internal_headers
	"core"
)

include_directories("${external_headers}" "${internal_headers}")
set (srcfiles
	"main.cpp"
	"core/Logger.h"
	"core/Logger.cpp"
)
add_executable("sandbox" "${srcfiles}")