CC = g++
CFLAGS = 

TARGETS = builder

SOURCES = \
		  test_build.cpp \
		  builder.cpp \
		  builder_product.cpp \
		  director.cpp

INCLUDES +=

LIBS =

all:$(TARGETS)

$(TARGETS): $(SOURCES)
	$(CC) $(INCLUDES) $(CFLAGS) $(LIBS) $^ -g -o $@

clean:
	rm -rf *.o builder

