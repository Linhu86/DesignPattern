CC = g++
CFLAGS = 

TARGETS = flyweight

SOURCES = \
		  flyweight_test.cpp \
		  flyweight.cpp \
		  flyweightFactory.cpp

INCLUDES +=

LIBS =

all:$(TARGETS)

$(TARGETS): $(SOURCES)
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) $^ -g -o $@

clean:
	rm -rf *.o flyweight