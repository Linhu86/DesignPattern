CC = g++
CFLAGS = 

TARGETS = composite

SOURCES = \
		  test_composite.cpp \
		  component.cpp \
		  composite.cpp \
		  leaf.cpp

INCLUDES +=

LIBS =

all:$(TARGETS)

$(TARGETS): $(SOURCES)
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) $^ -g -o $@

clean:
	rm -rf *.o composite

