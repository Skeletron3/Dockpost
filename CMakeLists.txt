cmake_minimum_required(VERSION 3.22)
project(Dockpost)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_library(
	libLexer
	STATIC
	src/Lexer/Lexer.cc
	src/Lexer/Handler/eof.cc
	src/Lexer/Handler/identifiers.cc
	src/Lexer/Handler/numbers.cc
)

add_library(
	libToken
	STATIC
	src/Token/Token.cc
)

add_executable(dockpost src/Main/Main.cc)

target_link_libraries(libLexer libToken)

target_link_libraries(dockpost libToken libLexer)