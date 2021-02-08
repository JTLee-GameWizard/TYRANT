cmake_minimum_required(VERSION 3.19.4)
project(FlappyBird)
file(GLOB_RECURSE FlappyBirdSrc
	FlappyBird/*.h
	FlappyBird/*.cpp
)
add_executable(${PROJECT_NAME} ${FlappyBirdSrc}) 

if(MSVC)
	set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})
endif()

add_subdirectory(TYRANT)
target_include_directories(${PROJECT_NAME} PRIVATE TYRANT/include)
target_link_libraries(${PROJECT_NAME} PUBLIC ${TYRANT_PRJ_NAME})

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_directory
	$<TARGET_FILE_DIR:${TYRANT_PRJ_NAME}>
	$<TARGET_FILE_DIR:${PROJECT_NAME}>
)
