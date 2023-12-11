PROJECT(rpc)
CMAKE_MINIMUM_REQUIRED (VERSION 3.0.0)


find_package(Protobuf REQUIRED)
find_package(GTest REQUIRED)

PROTOBUF_GENERATE_CPP(PROTO_SRC PROTO_HEADER ${CMAKE_CURRENT_SOURCE_DIR}/books/books.proto)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})
INCLUDE_DIRECTORIES(${Protobuf_INCLUDE_DIRS})
include_directories(${GTEST_INCLUDE_DIRS})

ADD_LIBRARY(proto ${PROTO_HEADER} ${PROTO_SRC})

ADD_LIBRARY(math_lib 
math/src/add.cpp
math/src/mul.cpp
math/src/sub.cpp)

ADD_LIBRARY( socket_lib
             socket/src/InitSock.cpp
             socket/src/SecureSocket.cpp
             socket/src/Socket.cpp
             socket/src/TCPClient.cpp
             socket/src/TCPServer.cpp
             socket/src/TCPSSLClient.cpp
             socket/src/TCPSSLServer.cpp    
)
ADD_LIBRARY(student_lib
students/src/admin.cpp
students/src/InitStudent.cpp
students/src/load.cpp
students/src/sdm.cpp
)

ADD_EXECUTABLE(main 
test_main.cpp
my_main.cpp)
TARGET_LINK_LIBRARIES(main proto ${Protobuf_LIBRARIES} math_lib socket_lib student_lib ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} protobuf::protobuf GTest::GTest GTest::Main)
