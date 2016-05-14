CC = g++
CFLAGS = 

TARGETS = factory

SOURCES = \
		  test.cpp \
		  factory.cpp \
		  product.cpp 

INCLUDES +=

LIBS =

all:$(TARGETS)

$(TARGETS): $(SOURCES)
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) $^ -g -o $@

clean:
	rm -rf *.o factory


