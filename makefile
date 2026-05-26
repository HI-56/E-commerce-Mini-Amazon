CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++23 -Iincludes

SRC = src/main.cpp \
      src/Product.cpp \
      src/Electronic.cpp \
      src/Food.cpp \
      src/Clothing.cpp \
      src/Client.cpp \
      src/Cart.cpp \
      src/Order.cpp \
      src/RecommendationEngine.cpp \
      src/Utils.cpp

TARGET = mini_amazon

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

re: clean all