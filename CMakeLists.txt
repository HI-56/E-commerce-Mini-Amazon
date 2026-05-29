cmake_minimum_required(VERSION 3.20)
project(MiniAmazon)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(includes)

add_executable(mini_amazon
    src/main.cpp
    src/Product.cpp
    src/Electronic.cpp
    src/Food.cpp
    src/Clothing.cpp
    src/Client.cpp
    src/Cart.cpp
    src/Order.cpp
    src/RecommendationEngine.cpp
    src/Utils.cpp
)

target_compile_options(mini_amazon PRIVATE -Wall -Wextra)