cmake_minimum_required(VERSION 3.27)
project(learning VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)

add_executable(learning main.cpp
        src/BinaryTree.h
        src/BinaryTree.cpp
        src/SequenceList.cpp
        src/SequenceList.h
        src/SingLinkedList.cpp
        src/SingLinkedList.h
        src/DoubleReference.cpp
        src/DoubleReference.h
)
