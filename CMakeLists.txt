cmake_minimum_required(VERSION 3.19.4)
project(TYRANT)
set(FLAPPY_BIRD_PRJ_NAME FlappyBird)
file(GLOB_RECURSE FlappyBirdSrc
	FlappyBird/*.h
	FlappyBird/*.cpp
)
add_executable(${FLAPPY_BIRD_PRJ_NAME} ${FlappyBirdSrc}) 

if(MSVC)
	set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${FLAPPY_BIRD_PRJ_NAME})
endif()

add_subdirectory(TYRANT)
target_include_directories(${FLAPPY_BIRD_PRJ_NAME} PRIVATE TYRANT/include)
target_link_libraries(${FLAPPY_BIRD_PRJ_NAME} ${TYRANT_ENGINE_NAME})

add_custom_command(TARGET ${FLAPPY_BIRD_PRJ_NAME} POST_BUILD
	COMMAND ${CMAKE_COMMAND} -E copy_directory
	$<TARGET_FILE_DIR:${TYRANT_ENGINE_NAME}>
	$<TARGET_FILE_DIR:${FLAPPY_BIRD_PRJ_NAME}>
)