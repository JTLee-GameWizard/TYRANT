#Tyrant engine cmake lists
set(TYRANT_PRJ_NAME TYRANT)
set(TYRANT_PRJ_NAME TYRANT PARENT_SCOPE)

file(GLOB_RECURSE TyrantSrc
	include/*.h
	src/*.cpp
)

add_library(${TYRANT_PRJ_NAME} SHARED ${TyrantSrc})
target_include_directories(${TYRANT_PRJ_NAME} PUBLIC include)
target_compile_definitions(${TYRANT_PRJ_NAME} PRIVATE TYRANT_DLL_EXP)

target_precompile_headers(${TYRANT_PRJ_NAME} PUBLIC include/TYRANT/pch.h)

add_subdirectory(vendor/sfml)
target_link_libraries(${TYRANT_PRJ_NAME} PUBLIC
	sfml-audio
	sfml-graphics
	sfml-network
	sfml-system
	sfml-window
)
add_custom_command(TARGET ${TYRANT_PRJ_NAME} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_directory
	$<TARGET_FILE_DIR:sfml-system>
	$<TARGET_FILE_DIR:${PROJECT_NAME}>
)

add_custom_command(TARGET ${TYRANT_PRJ_NAME} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_directory
	$<TARGET_FILE_DIR:${TYRANT_PRJ_NAME}>
	$<TARGET_FILE_DIR:${PROJECT_NAME}>
)

target_include_directories(${TYRANT_PRJ_NAME} PUBLIC vendor/sfml/include)
