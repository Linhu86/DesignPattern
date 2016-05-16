CC = g++
CFLAGS = 

TARGETS = bridge

SOURCES = \
		  bridge_test.cpp \
		  bridge.cpp \
		  bridge_imp.cpp

INCLUDES +=

LIBS =

all:$(TARGETS)

$(TARGETS): $(SOURCES)
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) $^ -g -o $@

clean:
	rm -rf *.o bridge
