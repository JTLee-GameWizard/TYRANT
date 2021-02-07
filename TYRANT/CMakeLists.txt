cmake_minimum_required(VERSION 3.19.4)

#this is the engine project
set(TYRANT_ENGINE_NAME TYRANT_ENGINE)
set(TYRANT_ENGINE_NAME TYRANT_ENGINE PARENT_SCOPE)

file(GLOB_RECURSE TyrentEngineSrc
	*.h
	*.cpp
)
add_library(${TYRANT_ENGINE_NAME} SHARED ${TyrentEngineSrc})
target_include_directories(${TYRANT_ENGINE_NAME} PRIVATE  include)
target_compile_definitions(${TYRANT_ENGINE_NAME} PRIVATE TYRANT_DLL_EXPT)
