CC = g++
CFLAGS = --std=c++17 -Wall -Werror -pedantic -g
LIB = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system -lboost_unit_test_framework
# Your .hpp files
DEPS = hexa.hpp
# Your compiled .o files
OBJECTS = hexa.o

PROJECT = Hexa

.PHONY: all clean lint

all: $(PROJECT)

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c $<

$(PROJECT): main.o $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIB)

clean:
	rm *.o $(PROJECT)

lint:
	cpplint *.cpp *.hpp
